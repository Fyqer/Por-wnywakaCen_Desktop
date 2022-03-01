/********************************************************************************
** Form generated from reading UI file 'magazynier.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAGAZYNIER_H
#define UI_MAGAZYNIER_H

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

class Ui_Magazynier
{
public:
    QLabel *label;
    QTableView *ProduktyView;
    QGroupBox *groupBox;
    QLabel *label_4;
    QLineEdit *KodEdit_2;
    QPushButton *Usunbutton;
    QGroupBox *groupBox_2;
    QLabel *label_5;
    QLineEdit *nazwa;
    QLabel *label_6;
    QLineEdit *cenaEdit;
    QLabel *label_7;
    QLineEdit *iloscEdit;
    QLabel *label_8;
    QLineEdit *firma;
    QPushButton *dodajButton;
    QGroupBox *groupBox_3;
    QLabel *label_2;
    QLineEdit *KodEdit;
    QLabel *label_3;
    QLineEdit *IDEdit;
    QPushButton *sprawdzButton;

    void setupUi(QDialog *Magazynier)
    {
        if (Magazynier->objectName().isEmpty())
            Magazynier->setObjectName(QString::fromUtf8("Magazynier"));
        Magazynier->resize(1043, 526);
        Magazynier->setStyleSheet(QString::fromUtf8("#Magazynier\n"
"{\n"
"background-color:rgb(0, 170, 255);\n"
"}\n"
"\n"
"#groupBox{\n"
"background-color:rgb(170, 0, 255);\n"
"}\n"
"#groupBox_2{\n"
"background-color:rgb(170, 0, 255);\n"
"}\n"
"#groupBox_3{\n"
"background-color:rgb(170, 0, 255);\n"
"}"));
        label = new QLabel(Magazynier);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(390, -40, 431, 111));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        ProduktyView = new QTableView(Magazynier);
        ProduktyView->setObjectName(QString::fromUtf8("ProduktyView"));
        ProduktyView->setGeometry(QRect(10, 110, 701, 381));
        groupBox = new QGroupBox(Magazynier);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(760, 170, 261, 111));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        groupBox->setFont(font1);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 20, 81, 20));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        label_4->setFont(font2);
        KodEdit_2 = new QLineEdit(groupBox);
        KodEdit_2->setObjectName(QString::fromUtf8("KodEdit_2"));
        KodEdit_2->setGeometry(QRect(100, 20, 73, 20));
        Usunbutton = new QPushButton(groupBox);
        Usunbutton->setObjectName(QString::fromUtf8("Usunbutton"));
        Usunbutton->setGeometry(QRect(50, 80, 131, 26));
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        Usunbutton->setFont(font3);
        Usunbutton->setStyleSheet(QString::fromUtf8("#Usunbutton\n"
"{\n"
"background-color :rgb(0, 170, 255);\n"
"color :black;\n"
"border-style: outset;\n"
"}"));
        groupBox_2 = new QGroupBox(Magazynier);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(720, 300, 301, 211));
        groupBox_2->setFont(font1);
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 30, 91, 16));
        label_5->setFont(font2);
        nazwa = new QLineEdit(groupBox_2);
        nazwa->setObjectName(QString::fromUtf8("nazwa"));
        nazwa->setGeometry(QRect(140, 30, 101, 20));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 60, 91, 16));
        label_6->setFont(font2);
        cenaEdit = new QLineEdit(groupBox_2);
        cenaEdit->setObjectName(QString::fromUtf8("cenaEdit"));
        cenaEdit->setGeometry(QRect(140, 60, 101, 20));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 90, 91, 16));
        label_7->setFont(font2);
        iloscEdit = new QLineEdit(groupBox_2);
        iloscEdit->setObjectName(QString::fromUtf8("iloscEdit"));
        iloscEdit->setGeometry(QRect(140, 90, 101, 20));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 120, 91, 16));
        label_8->setFont(font2);
        firma = new QLineEdit(groupBox_2);
        firma->setObjectName(QString::fromUtf8("firma"));
        firma->setGeometry(QRect(140, 120, 101, 20));
        dodajButton = new QPushButton(groupBox_2);
        dodajButton->setObjectName(QString::fromUtf8("dodajButton"));
        dodajButton->setGeometry(QRect(70, 160, 151, 41));
        dodajButton->setFont(font3);
        dodajButton->setStyleSheet(QString::fromUtf8("#dodajButton\n"
"{\n"
"background-color :rgb(0, 170, 255);\n"
"color :black;\n"
"border-style: outset;\n"
"}"));
        groupBox_3 = new QGroupBox(Magazynier);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(180, 40, 641, 61));
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setWeight(75);
        groupBox_3->setFont(font4);
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 0, 95, 59));
        label_2->setFont(font1);
        KodEdit = new QLineEdit(groupBox_3);
        KodEdit->setObjectName(QString::fromUtf8("KodEdit"));
        KodEdit->setGeometry(QRect(130, 20, 91, 21));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(240, 0, 83, 59));
        label_3->setFont(font1);
        IDEdit = new QLineEdit(groupBox_3);
        IDEdit->setObjectName(QString::fromUtf8("IDEdit"));
        IDEdit->setGeometry(QRect(330, 20, 71, 21));
        sprawdzButton = new QPushButton(groupBox_3);
        sprawdzButton->setObjectName(QString::fromUtf8("sprawdzButton"));
        sprawdzButton->setGeometry(QRect(440, 20, 141, 31));
        sprawdzButton->setFont(font3);
        sprawdzButton->setStyleSheet(QString::fromUtf8("#sprawdzButton\n"
"{\n"
"background-color :rgb(0, 170, 255);\n"
"color :black;\n"
"border-style: outset;\n"
"}"));

        retranslateUi(Magazynier);

        QMetaObject::connectSlotsByName(Magazynier);
    } // setupUi

    void retranslateUi(QDialog *Magazynier)
    {
        Magazynier->setWindowTitle(QCoreApplication::translate("Magazynier", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Magazynier", "Warehouseman Panel", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Magazynier", "Delete product", nullptr));
        label_4->setText(QCoreApplication::translate("Magazynier", "ID :", nullptr));
        Usunbutton->setText(QCoreApplication::translate("Magazynier", "Delete", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Magazynier", "Add new item", nullptr));
        label_5->setText(QCoreApplication::translate("Magazynier", "Name:", nullptr));
        label_6->setText(QCoreApplication::translate("Magazynier", "Price:", nullptr));
        label_7->setText(QCoreApplication::translate("Magazynier", "Amount:", nullptr));
        label_8->setText(QCoreApplication::translate("Magazynier", "Producer:", nullptr));
        dodajButton->setText(QCoreApplication::translate("Magazynier", "Add", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Magazynier", "Verification", nullptr));
        label_2->setText(QCoreApplication::translate("Magazynier", "Store code:", nullptr));
        label_3->setText(QCoreApplication::translate("Magazynier", "Store id:", nullptr));
        sprawdzButton->setText(QCoreApplication::translate("Magazynier", "See products", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Magazynier: public Ui_Magazynier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAGAZYNIER_H
