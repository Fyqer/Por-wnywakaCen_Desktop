/********************************************************************************
** Form generated from reading UI file 'zmiana.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZMIANA_H
#define UI_ZMIANA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Zmiana
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *haslopotwierdz;
    QLineEdit *hasloedit;
    QLineEdit *emailedit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *aktual;

    void setupUi(QWidget *Zmiana)
    {
        if (Zmiana->objectName().isEmpty())
            Zmiana->setObjectName(QString::fromUtf8("Zmiana"));
        Zmiana->resize(244, 311);
        Zmiana->setStyleSheet(QString::fromUtf8("#Zmiana{\n"
"\n"
"background-color:rgb(170, 0, 255);\n"
"\n"
"\n"
"}"));
        label = new QLabel(Zmiana);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 240, 191, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(Zmiana);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 80, 101, 16));
        label_2->setFont(font);
        label_3 = new QLabel(Zmiana);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 150, 91, 16));
        label_3->setFont(font);
        label_4 = new QLabel(Zmiana);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 0, 241, 31));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        label_4->setFont(font1);
        haslopotwierdz = new QLineEdit(Zmiana);
        haslopotwierdz->setObjectName(QString::fromUtf8("haslopotwierdz"));
        haslopotwierdz->setGeometry(QRect(60, 270, 113, 20));
        hasloedit = new QLineEdit(Zmiana);
        hasloedit->setObjectName(QString::fromUtf8("hasloedit"));
        hasloedit->setGeometry(QRect(10, 110, 113, 20));
        emailedit = new QLineEdit(Zmiana);
        emailedit->setObjectName(QString::fromUtf8("emailedit"));
        emailedit->setGeometry(QRect(10, 180, 113, 20));
        pushButton = new QPushButton(Zmiana);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 110, 75, 23));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton\n"
"{\n"
"background-color :rgb(0, 170, 255);\n"
"color :black;\n"
"border-style: outset;\n"
"}"));
        pushButton_2 = new QPushButton(Zmiana);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 180, 75, 23));
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("#pushButton_2\n"
"{\n"
"background-color :rgb(0, 170, 255);\n"
"color :black;\n"
"border-style: outset;\n"
"}"));
        aktual = new QLabel(Zmiana);
        aktual->setObjectName(QString::fromUtf8("aktual"));
        aktual->setGeometry(QRect(90, 60, 47, 13));

        retranslateUi(Zmiana);

        QMetaObject::connectSlotsByName(Zmiana);
    } // setupUi

    void retranslateUi(QWidget *Zmiana)
    {
        Zmiana->setWindowTitle(QCoreApplication::translate("Zmiana", "Form", nullptr));
        label->setText(QCoreApplication::translate("Zmiana", "Current password:", nullptr));
        label_2->setText(QCoreApplication::translate("Zmiana", "New password", nullptr));
        label_3->setText(QCoreApplication::translate("Zmiana", "New email:", nullptr));
        label_4->setText(QCoreApplication::translate("Zmiana", "Account options", nullptr));
        pushButton->setText(QCoreApplication::translate("Zmiana", "Change", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Zmiana", "Change", nullptr));
        aktual->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Zmiana: public Ui_Zmiana {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZMIANA_H
