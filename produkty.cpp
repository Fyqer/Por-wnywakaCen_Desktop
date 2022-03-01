#include "produkty.h"
#include "ui_produkty.h"
#include "sklep.h"
#include "ui_sklep.h"
#include<QSqlTableModel>
#include "mainwindow.h"
#include <bits/stdc++.h>
#include <QMessageBox>
#include <QSqlError>
#include <QDebug>
#include <QSqlQuery>



Produkty::wybor Produkty::sprawdz(int liczba )
{


    if( liczba == 1 )
    {
       ui->ProduktyLabel->setText("Items for  Netto" );
        ui->CenaLabel1->setText("Price for Lidl:");
          ui->CenaLabel2->setText("Price for  Biedronka:");
        mModel = new QSqlTableModel(this);
        mModel->setTable("tesco_produkty");
        mModel->select();
        ui->tableView->setModel(mModel);
        mModel->select();
        sklep =1;
        NazwaSklepu = "Netto";



return wybrana2;
    }
        else
          if( liczba == 2 )
          {
              ui->ProduktyLabel->setText("Items for  Lidl");
              ui->CenaLabel1->setText("Price for Netto:");
                ui->CenaLabel2->setText("Price for Biedronka:");
              mModel = new QSqlTableModel(this);
              mModel->setTable("lidl_produkty");
              mModel->select();
              ui->tableView->setModel(mModel);
              mModel->select();
              sklep =2;
                NazwaSklepu = "Lidl";
              return wybrana2;
          }


          else if (liczba ==3)
          {
               ui->ProduktyLabel->setText("Items for  Biedronka");
               ui->CenaLabel1->setText("Price for Netto:");
                 ui->CenaLabel2->setText("Price for  Lidl:");
              mModel = new QSqlTableModel(this);
                           mModel->setTable("biedronka_produkty");
                           mModel->select();
                           ui->tableView->setModel(mModel);
                           mModel->select();
                           sklep =3;
                             NazwaSklepu = "Biedronka";

          return wybrana3;
          }
}


Produkty::Produkty(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Produkty)
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

Produkty::~Produkty()
{
    delete ui;

}

void Produkty::on_WyszkajButton_clicked( )
{
    if(sklep ==1)
    {
        QString nazwa = ui->WyszukajNazwa->text();
        QString firma = ui->WyszkuajFirma->text();
        QString miasto = ui->WyszukajMiasto->text();
        QSqlQuery qqr;
        QSqlQuery qqr2;
        QSqlQuery baza;
QSqlQuery a;
QSqlQuery b;

qqr2.prepare("SELECT cena_produktu as ' ' FROM lidl_produkty WHERE nazwa_produktu ="
             " :nazwa and firma_produktu = :firma and Miasto = :miasto");

qqr.prepare("SELECT cena_produktu as ' ' FROM biedronka_produkty WHERE nazwa_produktu ="
            " :nazwa and firma_produktu = :firma and Miasto = :miasto");

baza.prepare("SELECT cena_produktu FROM tesco_produkty WHERE nazwa_produktu ="
             " :nazwa and firma_produktu = :firma and Miasto = :miasto");

          qqr.bindValue(":nazwa", nazwa);
          qqr.bindValue(":firma",firma);
          qqr.bindValue(":miasto",miasto);
          qqr2.bindValue(":nazwa", nazwa);
          qqr2.bindValue(":firma",firma);
          qqr2.bindValue(":miasto",miasto);
          baza.bindValue(":nazwa", nazwa);
          baza.bindValue(":firma",firma);
          baza.bindValue(":miasto",miasto);
          qqr.exec();
          baza.exec();


       this-> nModel = new QSqlQueryModel();
                   nModel->setQuery(qqr);

                  if(qqr.next())
                  {



                       ui->tableView_2->setModel(nModel);
                       ui->tableView_2->show();

                   }
                      else{QMessageBox::information(this,"","No item available in biedronka");
                      qDebug() << Pdatabase.lastError();
                             qDebug()<<  qqr.lastQuery();

                  }

                  // ----------------------------------------------------------------




                       qqr2.exec();
               this-> n2Model = new QSqlQueryModel();
                           n2Model->setQuery(qqr2);

                          if(qqr2.next())
                          {
                               ui->tableView_3->setModel(n2Model);
                               ui->tableView_3->show();

                           }
                              else{QMessageBox::information(this,"Error","No item");
                          }

                          if (baza.next())
                          {
                              cenaTesc = baza.value(0).toDouble();
                              cenaLidl = qqr2.value(0).toDouble();
                              cenaBiedronka = qqr.value(0).toDouble();
                             najmniejsza = QString::number(std::min({cenaTesc, cenaLidl,  cenaBiedronka}));
                             if(cenaTesc == std::min({cenaTesc, cenaLidl,  cenaBiedronka}))
                             {
                                 najtanszysklep = "Netto";
                                 roznicaOdLidl =  QString::number(cenaLidl - cenaTesc);

                                 roznicaOdBiedronki = QString::number(cenaBiedronka - cenaTesc);
                                 Produkty::ui->Podsumowanie->setText("The lowest price :" +  najmniejsza + "zł from"
                                                                                                           " "
                                  + najtanszysklep + ", cheaper by " + roznicaOdLidl + "zł from the price of the lidl network and cheaper by " + roznicaOdBiedronki + "zł than Biedronka price " );
                             }

                             else if (cenaLidl == std::min({cenaTesc, cenaLidl,  cenaBiedronka}))
                             {
                                 najtanszysklep = "Lidl";
                                 roznicaOdTesco =  QString::number(cenaTesc - cenaLidl);

                                 roznicaOdBiedronki = QString::number(cenaBiedronka - cenaLidl);
                                 Produkty::ui->Podsumowanie->setText("The lowest price :" +  najmniejsza + "zł from "
                                  + najtanszysklep + ", cheaper by " + roznicaOdTesco + "zł from the price of the Netto network and cheaper by " + roznicaOdBiedronki + "zł than Biedronka price" );


                             }

                             else if (cenaBiedronka == std::min({cenaTesc, cenaLidl,  cenaBiedronka}))
                             {
                                najtanszysklep = "Biedronka";
                                roznicaOdTesco =  QString::number(cenaTesc - cenaBiedronka);

                                roznicaOdLidl = QString::number(cenaLidl - cenaBiedronka);
                                Produkty::ui->Podsumowanie->setText("The lowest price :" +  najmniejsza + "zł from "
                                 + najtanszysklep + ", cheaper by " + roznicaOdTesco + "zł from the price of the Netto network and cheaper by " + roznicaOdLidl + "zł than Lidl Price" );


                             }

                          }



    }
    else if (sklep == 2)
    {
        QString nazwa = ui->WyszukajNazwa->text();
        QString firma = ui->WyszkuajFirma->text();
         QString miasto = ui->WyszukajMiasto->text();
        QSqlQuery qqr;
        QSqlQuery qqr2;
        QSqlQuery baza;
          qqr2.prepare("SELECT cena_produktu as ' ' FROM tesco_produkty WHERE nazwa_produktu = :nazwa and firma_produktu = :firma and Miasto = :miasto");
          qqr.prepare("SELECT cena_produktu as ' ' FROM biedronka_produkty WHERE nazwa_produktu = :nazwa and firma_produktu = :firma and Miasto = :miasto");
          baza.prepare("SELECT cena_produktu FROM lidl_produkty WHERE nazwa_produktu = :nazwa and firma_produktu = :firma and Miasto = :miasto");
          qqr.bindValue(":nazwa", nazwa);
          qqr.bindValue(":firma",firma);
          qqr2.bindValue(":nazwa", nazwa);
          qqr2.bindValue(":firma",firma);
          qqr.bindValue(":miasto", miasto);
          qqr2.bindValue(":miasto",miasto);
          baza.bindValue(":nazwa", nazwa);
          baza.bindValue(":firma",firma);
          baza.bindValue(":miasto", miasto);

               qqr.exec();
               baza.exec();
       this-> nModel = new QSqlQueryModel();
                   nModel->setQuery(qqr);

                  if(qqr.next())
                  {
                       ui->tableView_2->setModel(nModel);
                       ui->tableView_2->show();

                  }
                      else
                         {QMessageBox::information(this,"blad","Item no available in biedronka!");
                      qDebug() << Pdatabase.lastError();
                             qDebug()<<  qqr.lastQuery();

                         }

                  qqr2.exec();
          this-> n2Model = new QSqlQueryModel();
                      n2Model->setQuery(qqr2);

                     if(qqr2.next())
                      {
                          ui->tableView_3->setModel(n2Model);
                          ui->tableView_3->show();
                      }
                         else{QMessageBox::information(this,"blad","Item no available in netto!");
                     }


                     if (baza.next())
                     {
                         cenaLidl = baza.value(0).toDouble();
                         cenaTesc = qqr2.value(0).toDouble();
                         cenaBiedronka = qqr.value(0).toDouble();
                        najmniejsza = QString::number(std::min({cenaTesc, cenaLidl,  cenaBiedronka}));
                        if(cenaTesc == std::min({cenaTesc, cenaLidl,  cenaBiedronka}))
                        {
                            najtanszysklep = "Netto";
                            roznicaOdLidl =  QString::number(cenaLidl - cenaTesc);
                            roznicaOdBiedronki = QString::number(cenaBiedronka - cenaTesc);

                            Produkty::ui->Podsumowanie->setText("The lowest price :" +  najmniejsza + "zł from"
                                                                                                      " "
                             + najtanszysklep + ", cheaper by " + roznicaOdLidl + "zł from the price of the lidl network and cheaper by " + roznicaOdBiedronki + "zł than Biedronka price " );
                        }

                        }

                        else if (cenaLidl == std::min({cenaTesc, cenaLidl,  cenaBiedronka}))
                        {
                            najtanszysklep = "Lidl";
                            roznicaOdTesco =  QString::number(cenaTesc - cenaLidl);
                            roznicaOdBiedronki = QString::number(cenaBiedronka - cenaLidl);

                            Produkty::ui->Podsumowanie->setText("The lowest price :" +  najmniejsza + "zł from "
                             + najtanszysklep + ", cheaper by " + roznicaOdTesco + "zł from the price of the Netto network and cheaper by " + roznicaOdBiedronki + "zł than Biedronka price" );

                        }

                        else if (cenaBiedronka == std::min({cenaTesc, cenaLidl,  cenaBiedronka}))
                        {
                           najtanszysklep = "Biedronka";
                           roznicaOdTesco =  QString::number(cenaTesc - cenaBiedronka);
                           roznicaOdLidl = QString::number(cenaLidl - cenaBiedronka);
                           Produkty::ui->Podsumowanie->setText("The lowest price :" +  najmniejsza + "zł from "
                            + najtanszysklep + ", cheaper by " + roznicaOdTesco + "zł from the price of the Netto network and cheaper by " + roznicaOdLidl + "zł than Lidl Price" );

                        }



    }
    else if (sklep ==3)
    {
        QString nazwa = ui->WyszukajNazwa->text();
        QString firma = ui->WyszkuajFirma->text();
         QString miasto = ui->WyszukajMiasto->text();
        QSqlQuery qqr;
        QSqlQuery qqr2;
        QSqlQuery baza;

          qqr2.prepare("SELECT cena_produktu as ' ' FROM tesco_produkty WHERE nazwa_produktu = :nazwa and firma_produktu = :firma  and Miasto = :miasto");
          qqr.prepare("SELECT cena_produktu as ' ' FROM lidl_produkty WHERE nazwa_produktu = :nazwa and firma_produktu = :firma  and Miasto = :miasto");
          baza.prepare("SELECT cena_produktu as ' ' FROM biedronka_produkty WHERE nazwa_produktu = :nazwa and firma_produktu = :firma  and Miasto = :miasto");

          qqr.bindValue(":nazwa", nazwa);
          qqr.bindValue(":firma",firma);
          qqr2.bindValue(":nazwa", nazwa);
          qqr2.bindValue(":firma",firma);
          qqr.bindValue(":miasto", miasto);
          qqr2.bindValue(":miasto",miasto);
          baza.bindValue(":nazwa", nazwa);
          baza.bindValue(":firma",firma);
          baza.bindValue(":miasto", miasto);
               qqr.exec();
               baza.exec();
                   this-> nModel = new QSqlQueryModel();
                   nModel->setQuery(qqr);

                  if(qqr.next())
                  {
                       ui->tableView_2->setModel(nModel);
                       ui->tableView_2->show();

                   }
                      else{QMessageBox::information(this,"blad","Item no available in lidl!!");
                      qDebug() << Pdatabase.lastError();
                             qDebug()<<  qqr.lastQuery();

                  }


                      qqr2.exec();
                      this-> n2Model = new QSqlQueryModel();
                      n2Model->setQuery(qqr2);

                     if(qqr2.next())
                     {
                          ui->tableView_3->setModel(n2Model);
                          ui->tableView_3->show();

                      }
                         else{QMessageBox::information(this,"blad","Item no available in netto!");
                     }

                     if (baza.next())
                     {
                         cenaBiedronka = baza.value(0).toDouble();
                         cenaTesc = qqr2.value(0).toDouble();
                         cenaLidl = qqr.value(0).toDouble();
                        najmniejsza = QString::number(std::min({cenaTesc, cenaLidl,  cenaBiedronka}));
                        if(cenaTesc == std::min({cenaTesc, cenaLidl,  cenaBiedronka}))
                        {
                            najtanszysklep = "Tesco";
                            roznicaOdLidl =  QString::number(cenaLidl - cenaTesc);
                            roznicaOdBiedronki = QString::number(cenaBiedronka - cenaTesc);

                            Produkty::ui->Podsumowanie->setText("The lowest price :" +  najmniejsza + "zł from"
                                                                                                      " "
                             + najtanszysklep + ", cheaper by " + roznicaOdLidl + "zł from the price of the lidl network and cheaper by " + roznicaOdBiedronki + "zł than Biedronka price " );
                        }

                        else if (cenaLidl == std::min({cenaTesc, cenaLidl,  cenaBiedronka}))
                        {
                            najtanszysklep = "Lidl";
                            roznicaOdTesco =  QString::number(cenaTesc - cenaLidl);
                            roznicaOdBiedronki = QString::number(cenaBiedronka - cenaLidl);

                            Produkty::ui->Podsumowanie->setText("The lowest price :" +  najmniejsza + "zł from "
                             + najtanszysklep + ", cheaper by " + roznicaOdTesco + "zł from the price of the Netto network and cheaper by " + roznicaOdBiedronki + "zł than Biedronka price" );



                        }

                        else if (cenaBiedronka == std::min({cenaTesc, cenaLidl,  cenaBiedronka}))
                        {
                           najtanszysklep = "Biedronka";
                           roznicaOdTesco =  QString::number(cenaTesc - cenaBiedronka);
                           roznicaOdLidl = QString::number(cenaLidl - cenaBiedronka);

                           Produkty::ui->Podsumowanie->setText("The lowest price :" +  najmniejsza + "zł from "
                            + najtanszysklep + ", cheaper by " + roznicaOdTesco + "zł from the price of the Netto network and cheaper by " + roznicaOdLidl + "zł than Lidl Price" );


                        }

                     }
                 }
             }

void Produkty::on_ZamowButton_clicked()
{

if( ui->IloscEdit->text().toInt() <=0 || ui->IloscEdit->text().toInt()> 50 )
{
    QMessageBox::information(0,"Blad ", "Amount cant be less than 0 and above 50");
     valid =0;
}
else
{
    valid =1;
}
if(valid==1)
{
    QString nazwa = Produkty::ui->WyszukajNazwa->text();
    QString firma = Produkty::ui->WyszkuajFirma->text();
    IloscZamowionego = ui->IloscEdit->text().toInt();
    ZakupioneProdukty = ZakupioneProdukty +ui->IloscEdit->text()+ ui->WyszukajNazwa->text()+ui->WyszkuajFirma->text()+ "    ";
    qDebug()<<  ZakupioneProdukty;
    QSqlQuery query;
    QString wyborSklepu;
        if(sklep == 1)
        {
             query.prepare("SELECT cena_produktu FROM tesco_produkty WHERE nazwa_produktu = :nazwa and firma_produktu = :firma");

            query.bindValue(":nazwa", nazwa);
            query.bindValue(":firma",firma);

        }
    else if (sklep == 2)
    {
        query.prepare("SELECT cena_produktu FROM lidl_produkty WHERE nazwa_produktu = :nazwa and firma_produktu = :firma");

       query.bindValue(":nazwa", nazwa);
       query.bindValue(":firma",firma);
    }

else if (sklep ==3)
{


        query.prepare("SELECT cena_produktu FROM biedronka_produkty WHERE nazwa_produktu = :nazwa and firma_produktu = :firma");


        query.bindValue(":nazwa", nazwa);
        query.bindValue(":firma",firma);
}

        query.exec();
        query.first();
        cena = query.value(0).toString();

          nowacena = cena.toDouble()* IloscZamowionego  + nowacena;
          QString nowacenalabel = QString::number(nowacena);
            Produkty::ui->label_3->setText(nowacenalabel);
            if(!query.isActive()) {
           qDebug()<< wyborSklepu;
           qDebug() << Pdatabase.lastError();
                  qDebug()<<  query.lastQuery();
        QMessageBox::information(0,"Blad ", "No items in database");

             }
        }
    }
double Zamowienie(double nowacena)
{
   return nowacena;

}


void Produkty::on_ZamowButtn2_clicked()
{
    Adres =ui->AdresEdit->text();
    NazwiskoKlienta =ui->Nazwiskoedit->text();
    ImieKlienta = ui->ImieEdit->text();
    miasto =ui->MiastoEdit->text();
     QSqlQuery query11;
     QSqlQuery query2;
     query2.prepare("SELECT ID FROM users WHERE login_klienta = :nazwa");
     query2.bindValue(":nazwa", juzer);
     query2.exec();
     query2.first();
     KlientID = query2.value(0).toInt();
     QSqlQuery queryzaamow;
     queryzaamow.prepare("INSERT INTO zamowienie (KlientID,Koszt_zamowienia"
           ",Adres_dostawy,Sklep,Nazwisko_klienta,Imie_klienta,Status,Zakupione_produkty,Miasto)"
           " VALUES (:ID, :cena, :adres, :nazwas, :nazwisko, :imie, :status, :produkty, :miasto)");

         queryzaamow.bindValue(":login" , juzer);
         queryzaamow.bindValue(":ID", KlientID);
         queryzaamow.bindValue(":cena",nowacena);
         queryzaamow.bindValue(":adres",Adres);
         queryzaamow.bindValue(":nazwas",NazwaSklepu);
         queryzaamow.bindValue(":nazwisko",NazwiskoKlienta);
         queryzaamow.bindValue(":imie",ImieKlienta);
         queryzaamow.bindValue(":status",Status);
         queryzaamow.bindValue(":produkty", ZakupioneProdukty);
         queryzaamow.bindValue(":miasto", miasto);
          if( queryzaamow.exec())
          {
              qDebug() << queryzaamow.lastQuery();
              QMessageBox::information(this,"Succes","You make a order");
          }
              else{
           QMessageBox::information(this,"", "Error serwera,przepraszamy");
         qDebug() << Pdatabase.lastError();
         qDebug()<<   queryzaamow.lastQuery();
                  }
}
