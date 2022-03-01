#include "magazynier.h"
#include "ui_magazynier.h"
#include<QSqlTableModel>
#include "mainwindow.h"
#include <QMessageBox>
#include <QSqlError>
#include <QDebug>
#include <QSqlQuery>

Magazynier::Magazynier(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Magazynier)
{
    ui->setupUi(this);
    QSqlDatabase::drivers();
Pdatabase = QSqlDatabase::addDatabase("QMYSQL");
Pdatabase.setHostName("127.0.0.1");
Pdatabase.setUserName("root");
Pdatabase.setPort(3306);
Pdatabase.setDatabaseName("projektsklep");
Pdatabase.setPassword("");
}

Magazynier::~Magazynier()
{
    delete ui;
}




bool Magazynier::Check()
{

    QSqlQuery query(QSqlDatabase::database("MyConnect"));
    kodSkl = ui-> KodEdit ->text();
    QString IDSkl = ui->IDEdit->text();
    QSqlQuery prod;

    query.prepare(QString("SELECT ID, Kod_sklepu, Miejscowosc_sklepu from sklep WHERE Kod_sklepu = :kod"));
    query.bindValue(":kod", kodSkl);

query.exec();
query.first();
qDebug() <<query.lastQuery();
QString SklepID =  query.value(0).toString();
QString KodSkl2 =  query.value(1).toString();
    if(SklepID==IDSkl && kodSkl == KodSkl2 )
    {

        return true;
    }
    return false;

}





// ############################BUTTON CHECK##############
void Magazynier::on_sprawdzButton_clicked()
{
    QSqlQuery query(QSqlDatabase::database("MyConnect"));
    kodSkl = ui-> KodEdit ->text();
    QString IDSkl = ui->IDEdit->text();
    QSqlQuery prod;
    query.prepare(QString("SELECT ID, Kod_sklepu, Miejscowosc_sklepu from sklep WHERE Kod_sklepu = :kod"));
    query.bindValue(":kod", kodSkl);
        query.exec();
        query.first();
        qDebug() <<query.lastQuery();
        QString SklepID =  query.value(0).toString();
        QString KodSkl2 =  query.value(1).toString();
// ###########################CHECK STORE CODE#################
if(SklepID==IDSkl && kodSkl == KodSkl2 )
{
      sklepIDD =  query.value(0).toString();
      QSqlQuery prod(QSqlDatabase::database("MyConnect"));
      prod.prepare("SELECT * FROM produkt WHERE  SklepID = :id ");
      prod.bindValue(":id", IDSkl);
      prod.exec();
 this-> m2Model = new QSqlQueryModel();
 m2Model->setQuery(prod);
 ui->ProduktyView ->setModel(m2Model);
 ui-> ProduktyView  ->show();
}
else
    QMessageBox::information(this,"BŁAD","Wrongs code or ID ");

 SklepID = "protekcja";
}



void Magazynier::on_dodajButton_clicked()
{
    kodSkl = ui-> KodEdit ->text();
    QSqlQuery mias(QSqlDatabase::database("MyConnect"));
    mias.prepare("SELECT Miejscowosc_sklepu from sklep WHERE Kod_sklepu = :kod");
    mias.bindValue(":kod", kodSkl);
        mias.exec();
        mias.first();
        miasto =  mias.value(0).toString();
        qDebug()<<  mias.lastQuery();
QSqlQuery qry(QSqlDatabase::database("MyConnect"));
cena = ui->cenaEdit->text().toDouble();
ilosc = ui->iloscEdit->text().toInt();
nazwa = ui->nazwa->text();
firma = ui->firma->text();

if(cena <=0 )
{
    QMessageBox::information(this,"Blad","Incorrect value price must be >0");
}
else if(ilosc <=0 )
{
    QMessageBox::information(this,"Blad","Incorrect value - amount must be >0");
}
else if (miasto ==  "" )
{
    QMessageBox::information(this,"Blad","Grant access by write access code and store id!");

}
else {
    qry.prepare("INSERT INTO produkt (nazwa_produktu,cena_produktu,firma_produktu, Ilosc, sklepID, Miasto)"
                " VALUES (:nazwa, :cena, :firma, :ilosc, :IDskl, :miasto)");
    qry.bindValue(":nazwa", nazwa);
    qry.bindValue(":cena",cena);
    qry.bindValue(":miasto",miasto);
    qry.bindValue(":firma",firma);
    qry.bindValue(":ilosc", ilosc);
    qry.bindValue(":IDskl",sklepIDD);
          if(qry.exec())
          {
              QMessageBox::information(this,"Potwierdzenie","New item added");
          }
              else{
           QMessageBox::information(this,"Błąd", "Error no server availabe ");
                  }
        }
}

void Magazynier::on_Usunbutton_clicked()
{
     QSqlQuery del(QSqlDatabase::database("MyConnectdel"));
     int kodEdit2 = ui->KodEdit_2->text().toInt();
    if (Pdatabase.open())
        {
        if( sklepIDD !=0)
     del.prepare("DELETE FROM produkt WHERE ID = :id AND sklepID = :IDskl");

     del.bindValue(":id",kodEdit2);
     del.bindValue(":IDskl",sklepIDD);

     if(del.exec())
     {
         QMessageBox::information(this,"Potwierdzenie","You deleted item");
     }
     else
          QMessageBox::information(this,"Blad","Wrong code ");

        }
         else{

      QMessageBox::information(this,"Błąd", "Server error");
      qDebug() << Pdatabase.lastError();
             qDebug()<<  del.lastQuery();


}
}
