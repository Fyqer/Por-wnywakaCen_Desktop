#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql/QSqlDatabase>
#include<QMessageBox>
#include "sklep.h"
#include "magazynier.h"
#include "kurierpanel.h"



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QString salt = "Bardzodlugasol";
    QString typ;
    int valid = 0;
    QString username;
    
// CODES FOR TYPES OF USERS:
    QString kod_1 = "KWar01";
    QString kod_2 = "MWar01";
     
     
int valid2 = 0;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_ZarejestrujBtn_clicked();

    void on_LoginBtn_clicked();

    bool  User_Searched(QString user, QString email);

    void on_MagazynierButton_clicked();

    void on_KurierButton_clicked();

    void on_KlientButton_clicked();

private:

    Ui::MainWindow *ui;
    QSqlDatabase database;

//Sklep *sklepDialog;


};
#endif // MAINWINDOW_H
