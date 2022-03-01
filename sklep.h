#ifndef SKLEP_H
#define SKLEP_H

#include <QDialog>
#include "produkty.h"
#include<QSqlTableModel>
#include "mainwindow.h"
#include<QSqlTableModel>
#include <QMessageBox>
#include <QSqlError>
#include <QDebug>
#include <QSqlQuery>

namespace Ui {
class Sklep;
}

class Sklep : public QDialog
{
    Q_OBJECT

public:
QString juzer;
    int wczytana ;
    int cena;
    explicit Sklep(QWidget *parent = nullptr);
    ~Sklep();
     void DodajDoKoszyka(int x);
     void login( QString xx );

private slots:
    void on_TescoButton_clicked();

    void on_LidlButton_clicked();

    void on_BiedronkaButton_clicked();



    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:

    Ui::Sklep *ui;
     // Produkty *ProduktyDialog;
         QSqlDatabase Pdatabase;


};

#endif // SKLEP_H
