/********************************************************************************
** Form generated from reading UI file 'kurierpanel.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KURIERPANEL_H
#define UI_KURIERPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_KurierPanel
{
public:
    QLabel *label;
    QTableView *tableView;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QTableView *aktualne;
    QTableView *zakonczone;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QLabel *ID;
    QLineEdit *IDEdit;
    QPushButton *zakonczoneButton;
    QPushButton *ProduktyButton;
    QTableView *ProduktyView;

    void setupUi(QDialog *KurierPanel)
    {
        if (KurierPanel->objectName().isEmpty())
            KurierPanel->setObjectName(QString::fromUtf8("KurierPanel"));
        KurierPanel->resize(1075, 515);
        KurierPanel->setStyleSheet(QString::fromUtf8("#KurierPanel{\n"
"background-color:rgb(170, 0, 255);\n"
"}"));
        label = new QLabel(KurierPanel);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(440, 10, 261, 51));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        tableView = new QTableView(KurierPanel);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(90, 100, 911, 191));
        tableView->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::SelectedClicked);
        label_2 = new QLabel(KurierPanel);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 300, 221, 31));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_3 = new QLabel(KurierPanel);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(390, 300, 251, 31));
        label_3->setFont(font1);
        label_4 = new QLabel(KurierPanel);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(210, 40, 841, 61));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        label_4->setFont(font2);
        aktualne = new QTableView(KurierPanel);
        aktualne->setObjectName(QString::fromUtf8("aktualne"));
        aktualne->setGeometry(QRect(20, 340, 311, 151));
        zakonczone = new QTableView(KurierPanel);
        zakonczone->setObjectName(QString::fromUtf8("zakonczone"));
        zakonczone->setGeometry(QRect(420, 340, 201, 151));
        pushButton = new QPushButton(KurierPanel);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 10, 131, 41));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        pushButton->setFont(font3);
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton{\n"
"\n"
"background-color :rgb(0, 170, 255);\n"
"color : black;\n"
"border-style: bold;\n"
"}"));
        groupBox = new QGroupBox(KurierPanel);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(660, 300, 381, 201));
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setWeight(75);
        groupBox->setFont(font4);
        ID = new QLabel(groupBox);
        ID->setObjectName(QString::fromUtf8("ID"));
        ID->setGeometry(QRect(20, 30, 141, 21));
        ID->setFont(font3);
        IDEdit = new QLineEdit(groupBox);
        IDEdit->setObjectName(QString::fromUtf8("IDEdit"));
        IDEdit->setGeometry(QRect(180, 30, 41, 21));
        zakonczoneButton = new QPushButton(groupBox);
        zakonczoneButton->setObjectName(QString::fromUtf8("zakonczoneButton"));
        zakonczoneButton->setGeometry(QRect(10, 60, 171, 31));
        QFont font5;
        font5.setPointSize(8);
        font5.setBold(true);
        font5.setWeight(75);
        zakonczoneButton->setFont(font5);
        zakonczoneButton->setStyleSheet(QString::fromUtf8("#zakonczoneButton{\n"
"\n"
"background-color :rgb(0, 170, 255);\n"
"color : black;\n"
"border-style: bold;\n"
"}"));
        ProduktyButton = new QPushButton(groupBox);
        ProduktyButton->setObjectName(QString::fromUtf8("ProduktyButton"));
        ProduktyButton->setGeometry(QRect(190, 60, 191, 31));
        QFont font6;
        font6.setBold(true);
        font6.setWeight(75);
        ProduktyButton->setFont(font6);
        ProduktyButton->setStyleSheet(QString::fromUtf8("#ProduktyButton{\n"
"\n"
"background-color :rgb(0, 170, 255);\n"
"color : black;\n"
"border-style: bold;\n"
"}"));
        ProduktyView = new QTableView(groupBox);
        ProduktyView->setObjectName(QString::fromUtf8("ProduktyView"));
        ProduktyView->setGeometry(QRect(30, 100, 241, 71));

        retranslateUi(KurierPanel);

        QMetaObject::connectSlotsByName(KurierPanel);
    } // setupUi

    void retranslateUi(QDialog *KurierPanel)
    {
        KurierPanel->setWindowTitle(QCoreApplication::translate("KurierPanel", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("KurierPanel", "Courier Panel", nullptr));
        label_2->setText(QCoreApplication::translate("KurierPanel", "Your active orders:", nullptr));
        label_3->setText(QCoreApplication::translate("KurierPanel", "Your completed orders:", nullptr));
        label_4->setText(QCoreApplication::translate("KurierPanel", "Enter your login in the \"courier\" column and change the status to \"assigned\" to assign the delivery", nullptr));
        pushButton->setText(QCoreApplication::translate("KurierPanel", "Refresh", nullptr));
        groupBox->setTitle(QCoreApplication::translate("KurierPanel", "Additional options", nullptr));
        ID->setText(QCoreApplication::translate("KurierPanel", "ID of order:", nullptr));
        zakonczoneButton->setText(QCoreApplication::translate("KurierPanel", "Make order status 'completed'", nullptr));
        ProduktyButton->setText(QCoreApplication::translate("KurierPanel", "See products ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KurierPanel: public Ui_KurierPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KURIERPANEL_H
