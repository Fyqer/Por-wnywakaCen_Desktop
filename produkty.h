#ifndef PRODUKTY_H
#define PRODUKTY_H
#include <QWidget>
#include <QDialog>
#include <QtSql/QSqlDatabase>
#include<QMessageBox>
#include <QtCore>
#include <QtGui>
#include "sklep.h"
#include<QSqlQueryModel>


namespace Ui {
class Produkty;
}
class QSqlTableModel;

class Produkty : public QDialog
{

    Q_OBJECT

public:
    QString najmniejsza = 0 ;
    double cenaTesc =0 ;
    int valid =0;
    double cenaLidl;
    double cenaBiedronka;
    double cenaTesco;
    QString roznicaOdBiedronki;
    QString roznicaOdTesco;
    QString roznicaOdLidl;
    QString najtanszysklep;
    QString miasto;
    QString juzer;
    void ZmianaCeny();
    double nowacena = 0;
    QString cena;
    int KlientID;
    QString Adres;
    QString Status = "Faza1";
    int IloscAktualna;
    int IloscZamowionego;
    double Zamowienie(double x);
    int sklep;
    QString NazwaSklepu;
    QString ZakupioneProdukty;
    QString NazwiskoKlienta;
    QString ImieKlienta;
    explicit Produkty(QWidget *parent = nullptr);
    ~Produkty();
    enum  wybor
     {
     wybrana =1,
        wybrana2 = 2,
        wybrana3 =3
     };


   wybor sprawdz(int  liczba );

private slots:
   void on_WyszkajButton_clicked();

   void on_ZamowButton_clicked();

   void on_ZamowButtn2_clicked();

private:
    Ui::Produkty *ui;
   QSqlTableModel *mModel;
   QSqlQueryModel *nModel;
     QSqlQueryModel *n2Model;
   QSqlDatabase Pdatabase;


};

#endif // PRODUKTY_H
