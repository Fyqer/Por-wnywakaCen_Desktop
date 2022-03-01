#include "sklep.h"
#include "ui_sklep.h"
#include "mainwindow.h"
#include<QSqlTableModel>
#include "mainwindow.h"
#include<QSqlTableModel>
#include <QMessageBox>
#include <QSqlError>
#include <QDebug>
#include <QSqlQuery>
#include <QApplication>
#include <zmiana.h>

Sklep::Sklep(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sklep)

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

QSqlQuery biedrqqr;
QSqlQuery lidlqqr;
QSqlQuery tesqqr;

biedrqqr.prepare("SELECT AVG(cena_produktu) from biedronka_produkty");
lidlqqr.prepare("SELECT AVG(cena_produktu) from lidl_produkty");
tesqqr.prepare("SELECT AVG(cena_produktu) from tesco_produkty");
biedrqqr.exec();
lidlqqr.exec();
tesqqr.exec();
if(lidlqqr.next() && biedrqqr.next() && tesqqr.next() )
{
double AvgB = biedrqqr.value(0).toDouble();
double AvgL = lidlqqr.value(0).toDouble();
double AvgT = tesqqr.value(0).toDouble();

QString SAvgB = QString::number(AvgB);
QString SAvgL= QString::number(AvgL);
QString SAvgT= QString::number(AvgT);
Sklep::ui->SredniaBiedronka->setText("Average prices of the Biedronka network in Poland: " + SAvgB+ "zł" );
Sklep::ui->SredniaLidl->setText("Average prices of the Lidl network in Poland: " + SAvgL +"zł");
Sklep::ui->SredniaTesco->setText("Average prices of the Netto network in Poland: " + SAvgT+"zł" );
}


}

Sklep::~Sklep()
{
    delete ui;
}



void Sklep::on_TescoButton_clicked()
{
    Produkty ProduktyDialog;
     ProduktyDialog.setModal(true);
wczytana =1 ;
ProduktyDialog.juzer = juzer;
  ProduktyDialog.sprawdz(wczytana);
 ProduktyDialog.exec();
}

void Sklep::on_LidlButton_clicked()
{
    Produkty ProduktyDialog;
     ProduktyDialog.setModal(true);
    wczytana=2;

ProduktyDialog.juzer = juzer;
       ProduktyDialog.sprawdz(wczytana);
        ProduktyDialog.exec();
}

void Sklep::on_BiedronkaButton_clicked()
{
    wczytana =3;

    Produkty ProduktyDialog;
     ProduktyDialog.setModal(true);

ProduktyDialog.juzer = juzer;
      ProduktyDialog.sprawdz(wczytana);
         ProduktyDialog.exec();



}
void Sklep::login(QString xx)
{
    juzer = xx;

    Sklep::ui->label->setText("Witaj  "+ juzer);
}




void Sklep::on_pushButton_clicked()
{
   MainWindow windowdialog;


   windowdialog.show();

}

void Sklep::on_pushButton_3_clicked()
{
    Zmiana z;
    z.setModal(true);
    z.Login(juzer);
   z.exec();


}


void Sklep::on_pushButton_2_clicked()
{
    Zmiana z;
    z.setModal(true);
    z.Login(juzer);
   z.exec();

}
