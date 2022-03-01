#ifndef KURIERPANEL_H
#define KURIERPANEL_H

#include <QDialog>
#include <QWidget>
#include <QDialog>
#include <QtSql/QSqlDatabase>
#include<QMessageBox>
#include <QtCore>
#include <QtGui>
#include<QSqlQueryModel>
#include "mainwindow.h"
#include<QSqlQueryModel>
namespace Ui {
class KurierPanel;
}

class KurierPanel : public QDialog
{
    Q_OBJECT

public:
    QString juzer;
    explicit KurierPanel(QWidget *parent = nullptr);
    ~KurierPanel();

void login( QString xx );
    QSqlDatabase database;
     QSqlTableModel *mModel;


     QSqlQueryModel *m2Model;
          QSqlQueryModel *m3Model;
            QSqlQueryModel *m4Model;
private slots:
     void on_pushButton_clicked();

     void on_zakonczoneButton_clicked();

     void on_ProduktyButton_clicked();

private:
    Ui::KurierPanel *ui;
    QSqlDatabase Pdatabase;
};

#endif // KURIERPANEL_H
