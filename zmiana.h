#ifndef ZMIANA_H
#define ZMIANA_H

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
class Zmiana;
}

class Zmiana : public QDialog
{
    Q_OBJECT

public:
     QString salt = "Bardzodlugasol";
    QString aktualne;
   QString nowe;
   QString noweh;
   void Login(QString a );
     QString juzer;
    explicit Zmiana(QWidget *parent = nullptr);
    ~Zmiana();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Zmiana *ui;
     QSqlDatabase Pdatabase;
};

#endif // ZMIANA_H
