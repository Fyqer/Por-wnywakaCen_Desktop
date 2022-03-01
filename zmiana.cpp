#include "zmiana.h"
#include "ui_zmiana.h"
#include "produkty.h"
#include "ui_produkty.h"
#include "sklep.h"
#include "ui_sklep.h"
#include<QSqlTableModel>
#include "mainwindow.h"
#include <QMessageBox>
#include <QSqlError>
#include <QDebug>
#include <QSqlQuery>


Zmiana::Zmiana(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Zmiana)
{
    ui->setupUi(this);

    QSqlDatabase::drivers();
Pdatabase = QSqlDatabase::addDatabase("QMYSQL");
Pdatabase.setHostName("127.0.0.1");
Pdatabase.setUserName("root");
 Pdatabase.setPort(3306);
Pdatabase.setDatabaseName("projektsklep");
Pdatabase.setPassword("");


if(!Pdatabase.open()){
    QMessageBox::critical(this, "Error",Pdatabase.lastError().text());
       return;
   }
}

Zmiana::~Zmiana()
{
    delete ui;
}

void Zmiana::on_pushButton_clicked()
{
      QSqlQuery q;
    aktualne;
    nowe;
    noweh = ui->hasloedit->text();
    QSqlQuery query2;
nowe = QString("%1").arg(QString(QCryptographicHash::hash((noweh+salt).toUtf8(),QCryptographicHash::Md5).toHex()));
     query2.prepare("SELECT hasło_klienta FROM users WHERE login_klienta = :nazwa");
     query2.bindValue(":nazwa", juzer);
     query2.exec();
     query2.next();
     aktualne = query2.value(0).toString();
     qDebug() <<  juzer;
    QString current =  QString("%1").arg(QString(QCryptographicHash::hash((ui->haslopotwierdz->text()+salt).toUtf8(),QCryptographicHash::Md5).toHex()));
 Zmiana::ui->aktual->setText("Witaj  "+ juzer);
     if(aktualne == current && noweh.length()>=7)
     {

         q.prepare("UPDATE users set hasło_klienta = :nowe WHERE login_klienta =:login");
         q.bindValue(":nowe", nowe);
         q.bindValue(":login", juzer);
         q.exec();
        q.next();
          qDebug() << q.lastQuery();
         if( q.exec())
         {


             qDebug() << Pdatabase.lastError();

     QMessageBox::information(this,"Sukces", "Success! ");

}
         else
         {
               QMessageBox::information(this,"Błąd", "Server error! ");
         }


     }
     else if (aktualne != ui->haslopotwierdz->text())
     {



       QMessageBox::information(this,"Bład", "Current password is incorrect! ");
     }
     else if (nowe.length()<7)
     {
       QMessageBox::information(this,"Bład", "Password is too short! ");
     }


}

void Zmiana::on_pushButton_2_clicked()
{
    int valid = 0 ;
    QSqlQuery q;
  aktualne;
  nowe;
  nowe = ui->emailedit->text();
  QSqlQuery query2;

   query2.prepare("SELECT hasło_klienta FROM users WHERE login_klienta = :nazwa");
   query2.bindValue(":nazwa", juzer);
   query2.exec();
   query2.next();
   aktualne = query2.value(0).toString();
   for(int i =0;i<nowe.length();i++)
   {
   if(nowe[i] == '@')
       valid =1;

   }
   if(valid==1 &&  aktualne == ui->haslopotwierdz->text() )
   {
       q.prepare("UPDATE users set email_klienta= :nowe WHERE login_klienta =:login");
       q.bindValue(":nowe", nowe);
       q.bindValue(":login", juzer);
       q.exec();
       q.next();
      if( q.exec())
       {
   QMessageBox::information(this,"Sukces", "Success! ");
       }
      else
       {
             QMessageBox::information(this,"Błąd", "!Server error ");
       }
   }
   else if (aktualne != ui->haslopotwierdz->text())
   {
     QMessageBox::information(this,"Bład", "Current password is incorrect! ");
   }

}
void Zmiana::Login(QString a)
{
juzer =a;

}
