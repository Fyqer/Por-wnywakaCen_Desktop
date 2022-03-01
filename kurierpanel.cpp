#include "kurierpanel.h"
#include "ui_kurierpanel.h"
#include<QSqlTableModel>
#include "mainwindow.h"
#include <QMessageBox>
#include <QSqlError>
#include <QDebug>
#include <QSqlQuery>


KurierPanel::KurierPanel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::KurierPanel)
{
                     //polaczenie z baza %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
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
                     // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%WIDOK Z TABELI

    mModel = new QSqlTableModel(this);
    mModel->setTable("wolnezamowienia");
    mModel->select();
    ui->tableView->setModel(mModel);
    mModel->select();
    QSqlQuery qqr;
QSqlQuery qqr2;
           qqr.prepare("SELECT ID, Adres_dostawy, Koszt_zamowienia, Miasto, Nazwisko_klienta, Imie_klienta, Data FROM zamowienie WHERE Kurier = :login ");
           qqr.bindValue(":login", juzer);
               qqr.exec();
               qDebug() <<qqr.lastQuery();
               qDebug() << database.lastError();
           qqr2.prepare("SELECT ID, KlientID, Data FROM zamowienie WHERE Kurier = :login");
            qqr2.bindValue(":login", juzer);
                qqr2.exec();
                qDebug() <<qqr2.lastQuery();
                qDebug() << database.lastError();
                qDebug()<< "juzer to "+juzer;

            this-> m3Model = new QSqlQueryModel();
           this-> m2Model = new QSqlQueryModel();
                       m2Model->setQuery(qqr);
                        m3Model->setQuery(qqr2);
                       ui->aktualne->setModel(m2Model);
                       ui->aktualne->show();
                       ui->zakonczone->setModel(m3Model);
                       ui->zakonczone->show();


}
// POBIERNIE NAZYWY %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
void KurierPanel::login(QString xx)
{
    juzer = xx;


}
// DESTRUKTOR %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
KurierPanel::~KurierPanel()
{
    delete ui;
}

void KurierPanel::on_pushButton_clicked()
{
           QSqlQuery qqr;
           QSqlQuery qqr2;
           qqr.prepare("SELECT ID, Status, Adres_dostawy, Koszt_zamowienia, Miasto, "
                       "Nazwisko_klienta, Imie_klienta, Data FROM zamowienie WHERE Kurier = :login AND Status not like 'Zakończone'");
           qqr.bindValue(":login", juzer); qqr.exec();
           qqr2.prepare("SELECT ID, KlientID,Nazwisko_klienta, Data, Status"
                        " FROM zamowienie WHERE Kurier = :login AND Status = 'Zakończone'");
           qqr2.bindValue(":login", juzer); qqr2.exec();

            this-> m3Model = new QSqlQueryModel();
            this-> m2Model = new QSqlQueryModel();
            m2Model->setQuery(qqr);
            m3Model->setQuery(qqr2);
            ui->aktualne->setModel(m2Model);
            ui->aktualne->show();
            ui->zakonczone->setModel(m3Model);
            ui->zakonczone->show();
}

void KurierPanel::on_zakonczoneButton_clicked()
{
  QString ID = ui->IDEdit->text();
  QSqlQuery zak;
  zak.prepare("UPDATE zamowienie SET Status = 'Zakończone' where id = :id AND Kurier = :login");
  zak.bindValue(":id", ID);
  zak.bindValue(":login", juzer);
  zak.exec();
}

void KurierPanel::on_ProduktyButton_clicked()
{
     QString ID = ui->IDEdit->text();
     QSqlQuery prod;
     prod.prepare("SELECT Zakupione_produkty FROM zamowienie WHERE id = :id AND Kurier = :login");
     prod.bindValue(":id", ID);
     prod.bindValue(":login", juzer);
     prod.exec();
     this-> m2Model = new QSqlQueryModel();
     m2Model->setQuery(prod);
     ui->ProduktyView ->setModel(m2Model);
     ui-> ProduktyView  ->show();
}

