#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QSqlTableModel>
#include <QMessageBox>
#include <QSqlError>
#include <QDebug>
#include <QSqlQuery>
#include"sklep.h"
#include "magazynier.h"
#include "kurierpanel.h"
#include <QCryptographicHash>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{





    ui->setupUi(this);
    ui->Username->setPlaceholderText("Enter username");
     ui->Email->setPlaceholderText("Enter email");
      ui->Haslo->setPlaceholderText("Enter password:");
       ui->Username2->setPlaceholderText("Enter ID");
                ui->Haslo2->setPlaceholderText("Enter password");
                ui->groupBox_2->setHidden(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_ZarejestrujBtn_clicked()
{
    QSqlDatabase::drivers();
database = QSqlDatabase::addDatabase("QMYSQL");
database.setHostName("127.0.0.1");
database.setUserName("root");
  database.setPort(3306);
database.setDatabaseName("projektsklep");
database.setPassword("");
if(!database.open()){
    QMessageBox::critical(this, "Error",database.lastError().text());
       return;
   }

 //otrzymaj dane z rejestracja $$$$$$$$$$$$$$$$$$$$$$$$$$

username = ui->Username->text();
QString password = ui->Haslo->text();
QString email = ui->Email->text();

QSqlQuery qry;
for(int i =0;i<email.length();i++)
{
if(email[i] == '@' && password.length()>=7 && username.length()>5)
    valid =1;
}

if (valid ==1  && User_Searched(username, email)==false ){
    qDebug() <<User_Searched(username, email);

    password = QString("%1").arg
(QString(QCryptographicHash::hash((ui->Haslo->text()+salt)
.toUtf8(),QCryptographicHash::Md5).toHex()));

    if( ui->KurierButton->isChecked() &&  ui->kodEdit->text() == kod_1  )
    {
        typ = "kurier";
        qry.prepare("INSERT INTO users (email_klienta,hasło_klienta,login_klienta, typ_uzytkownika)"
                    " VALUES (:email, :password, :username, :typ)");
        qry.bindValue(":email", email);
        qry.bindValue(":password",password);
        qry.bindValue(":username",username);
        qry.bindValue(":typ", typ);
              if(qry.exec())
              {
                  qDebug() <<qry.lastQuery();
                  QMessageBox::information(this,"Rejestracja","You make account");
              }
                  else{
               QMessageBox::information(this,"Błąd", "Query error ");
      qDebug() << database.lastError();
             qDebug()<<  qry.lastQuery();
               qDebug()<<  email;

              }

    }
    if( ui->MagazynierButton->isChecked() && ui->kodEdit->text() == kod_2 )
    {
        typ = "magazynier";
        qry.prepare("INSERT INTO users (email_klienta,hasło_klienta,login_klienta, typ_uzytkownika)"
                    " VALUES (:email, :password, :username, :typ)");
        qry.bindValue(":email", email);
        qry.bindValue(":password",password);
        qry.bindValue(":username",username);
        qry.bindValue(":typ", typ);
              if(qry.exec())
              {
                  qDebug() <<qry.lastQuery();
                  QMessageBox::information(this,"Rejestracja","You make account");
              }
                  else{
               QMessageBox::information(this,"Błąd", "Query error or wrong code try again");
      qDebug() << database.lastError();
             qDebug()<<  qry.lastQuery();
               qDebug()<<  email;

              }

    }
    if( ui->KlientButton->isChecked() )
    {
        typ = "klient";
        qry.prepare("INSERT INTO users (email_klienta,hasło_klienta,login_klienta, typ_uzytkownika)"
                    " VALUES (:email, :password, :username, :typ)");
        qry.bindValue(":email", email);
        qry.bindValue(":password",password);
        qry.bindValue(":username",username);
        qry.bindValue(":typ", typ);
              if(qry.exec())
              {
                  qDebug() <<qry.lastQuery();
                  QMessageBox::information(this,"Rejestracja","Success");
              }
                  else{
               QMessageBox::information(this,"Błąd", "Query error or wrong code ");
      qDebug() << database.lastError();
             qDebug()<<  qry.lastQuery();
               qDebug()<<  email;

              }

    }
    if( (ui->MagazynierButton->isChecked() && ui->kodEdit->text() != kod_2 ) || (ui->KurierButton->isChecked() &&  ui->kodEdit->text() != kod_1)) {
     QMessageBox::information(this,"Błąd", " Wrong code ");
    }



        }
else if(valid <1 )
{
QMessageBox::information(this,"Błąd", "Incorrect email or password! ");
}
else if (User_Searched(username, email)==true)
{
   QMessageBox::information(this,"Błąd", "User with the same username or email already exist! ");
}
}



void MainWindow::on_LoginBtn_clicked()
{

    QSqlDatabase::drivers();
database = QSqlDatabase::addDatabase("QMYSQL", "MyConnect");
database.setHostName("127.0.0.1");
database.setUserName("root");
  database.setPort(3306);
database.setDatabaseName("projektsklep");
database.setPassword("");
if(!database.open()){
    QMessageBox::critical(this, "Error",database.lastError().text());
       return;
   }
   username = ui->Username2->text();
   QString  password = ui->Haslo2->text();
   password = QString(QCryptographicHash::hash((password+salt).toUtf8(),QCryptographicHash::Md5).toHex());
    QSqlQuery query(QSqlDatabase::database("MyConnect"));
    query.prepare(QString("SELECT typ_uzytkownika FROM "
                          "users WHERE login_klienta = :username AND hasło_klienta = :password"));
    query.bindValue(":username", username);
    query.bindValue(":password", password);

    query.exec();
    query.first();
    qDebug() <<query.lastQuery();
    qDebug() << database.lastError();
    QString typp =  query.value(0).toString();
    qDebug()<< "typ to:" +typp;
   if(typp == "klient")
     {

          hide();
          Sklep sklepDialog;

          sklepDialog.setModal(true);
          sklepDialog.login(username);
          sklepDialog.exec();
      }
    else if (  typp=="magazynier")
        {
           hide();
           Magazynier magazynieDdialog;
           magazynieDdialog.setModal(true);
           magazynieDdialog.exec();
        }
   else if (  typp=="kurier")
           {
              hide();
            KurierPanel kurrierdialog;
               kurrierdialog.login(username);
              kurrierdialog.setModal(true);
              kurrierdialog.exec();
           }


   else{QMessageBox::information(this,"Blad","Incorrect credentials");}


         }


void MainWindow::on_MagazynierButton_clicked()
{


   if(ui->MagazynierButton->isChecked())
   {

 ui->groupBox_2->setHidden(false);
   }
}

void MainWindow::on_KurierButton_clicked()
{
    if(ui->KurierButton->isChecked())
    {

  ui->groupBox_2->setHidden(false);
    }
}

void MainWindow::on_KlientButton_clicked()
{
    if(ui->KlientButton->isChecked())
    {

  ui->groupBox_2->setHidden(true);
    }
}


bool MainWindow::User_Searched(QString userx, QString emailx){
        QSqlQuery query;

        query.prepare("select * from users where login_klienta = :user");
        query.bindValue(":user", userx);
        query.exec();
        QSqlQuery query2;

        query2.prepare("select * from users where email_klienta = :email");
        query2.bindValue(":email", emailx);
        query2.exec();

        while(query.next()){
                return true;
        }
        while(query2.next())
        {
            return true;
        }
        return false;
}
