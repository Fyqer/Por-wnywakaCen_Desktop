#ifndef MAGAZYNIER_H
#define MAGAZYNIER_H
#include <QWidget>
#include <QDialog>
#include <QtSql/QSqlDatabase>
#include<QMessageBox>
#include <QtCore>
#include <QtGui>
#include<QSqlQueryModel>
#include "mainwindow.h"
namespace Ui {
class Magazynier;
}

class Magazynier : public QDialog
{
    Q_OBJECT

public:
    QString sklepIDD = 0;
    QString nazwa;
     double cena;
      QString firma;
      QString miasto;
      int ilosc;
  QString  kodSkl;
    explicit Magazynier(QWidget *parent = nullptr);
    ~Magazynier();

 QSqlTableModel *mModel;
private slots:
 void on_sprawdzButton_clicked();
bool Check();
 void on_dodajButton_clicked();

 void on_Usunbutton_clicked();

private:

    Ui::Magazynier *ui;
    QSqlDatabase Pdatabase;
     QSqlQueryModel *m2Model;
};

#endif // MAGAZYNIER_H
