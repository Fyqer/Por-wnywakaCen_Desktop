/********************************************************************************
** Form generated from reading UI file 'sklep.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKLEP_H
#define UI_SKLEP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sklep
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QPushButton *TescoButton;
    QPushButton *LidlButton;
    QPushButton *BiedronkaButton;
    QLabel *label_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *tescoImage;
    QWidget *LidlImage;
    QWidget *BiedronkaImage;
    QLabel *SredniaTesco;
    QLabel *SredniaLidl;
    QLabel *SredniaBiedronka;

    void setupUi(QDialog *Sklep)
    {
        if (Sklep->objectName().isEmpty())
            Sklep->setObjectName(QString::fromUtf8("Sklep"));
        Sklep->resize(730, 413);
        Sklep->setMinimumSize(QSize(730, 413));
        Sklep->setMaximumSize(QSize(730, 413));
        Sklep->setStyleSheet(QString::fromUtf8("#Sklep{\n"
"\n"
"background-color:rgb(170, 0, 255);\n"
"\n"
"\n"
"}"));
        pushButton = new QPushButton(Sklep);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(650, 390, 71, 21));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton\n"
"{\n"
"background-color :rgb(0, 170, 255);\n"
"color :black;\n"
"border-style: outset;\n"
"}"));
        label = new QLabel(Sklep);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 60, 341, 41));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("\n"
"#label{\n"
"color :rgb(0, 170, 255);\n"
"}"));
        label_2 = new QLabel(Sklep);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 100, 501, 41));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("#label_2\n"
"{\n"
"color :rgb(0, 170, 255);\n"
"\n"
"}"));
        TescoButton = new QPushButton(Sklep);
        TescoButton->setObjectName(QString::fromUtf8("TescoButton"));
        TescoButton->setGeometry(QRect(30, 240, 201, 31));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        TescoButton->setFont(font3);
        TescoButton->setCursor(QCursor(Qt::PointingHandCursor));
        TescoButton->setStyleSheet(QString::fromUtf8("#TescoButton{\n"
"\n"
"background-color :rgb(0, 170, 255);\n"
"color : black;\n"
"border-style: bold;\n"
"}\n"
""));
        TescoButton->setFlat(false);
        LidlButton = new QPushButton(Sklep);
        LidlButton->setObjectName(QString::fromUtf8("LidlButton"));
        LidlButton->setGeometry(QRect(250, 240, 201, 31));
        LidlButton->setFont(font3);
        LidlButton->setCursor(QCursor(Qt::PointingHandCursor));
        LidlButton->setStyleSheet(QString::fromUtf8("#LidlButton{\n"
"\n"
"background-color :rgb(0, 170, 255);\n"
"color : black;\n"
"border-style: outset;\n"
"}"));
        BiedronkaButton = new QPushButton(Sklep);
        BiedronkaButton->setObjectName(QString::fromUtf8("BiedronkaButton"));
        BiedronkaButton->setGeometry(QRect(480, 240, 201, 31));
        BiedronkaButton->setFont(font3);
        BiedronkaButton->setCursor(QCursor(Qt::SplitHCursor));
        BiedronkaButton->setAutoFillBackground(false);
        BiedronkaButton->setStyleSheet(QString::fromUtf8("#BiedronkaButton{\n"
"\n"
"background-color :rgb(0, 170, 255);\n"
"color : black;\n"
"border-style: outset;\n"
"}"));
        label_5 = new QLabel(Sklep);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(70, 70, 341, 31));
        pushButton_2 = new QPushButton(Sklep);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 380, 131, 31));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("#pushButton_2\n"
"{\n"
"background-color :rgb(0, 170, 255);\n"
"color :black;\n"
"border-style: outset;\n"
"}"));
        pushButton_3 = new QPushButton(Sklep);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(100, 380, 131, 31));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("#pushButton_3\n"
"{\n"
"background-color :rgb(0, 170, 255);\n"
"color :black;\n"
"border-style: outset;\n"
"}"));
        tescoImage = new QWidget(Sklep);
        tescoImage->setObjectName(QString::fromUtf8("tescoImage"));
        tescoImage->setGeometry(QRect(30, 150, 199, 79));
        tescoImage->setStyleSheet(QString::fromUtf8("#tescoImage\n"
"{\n"
"border-image : url(:/obrazy/tesco.jpg);\n"
"}"));
        LidlImage = new QWidget(Sklep);
        LidlImage->setObjectName(QString::fromUtf8("LidlImage"));
        LidlImage->setGeometry(QRect(250, 150, 199, 79));
        LidlImage->setStyleSheet(QString::fromUtf8("#LidlImage\n"
"{\n"
"border-image : url(:/obrazy/lidl.jpg);\n"
"}"));
        BiedronkaImage = new QWidget(Sklep);
        BiedronkaImage->setObjectName(QString::fromUtf8("BiedronkaImage"));
        BiedronkaImage->setGeometry(QRect(480, 150, 199, 79));
        BiedronkaImage->setStyleSheet(QString::fromUtf8("#BiedronkaImage\n"
"{\n"
"border-image : url(:/obrazy/biedra.jpg);\n"
"}"));
        SredniaTesco = new QLabel(Sklep);
        SredniaTesco->setObjectName(QString::fromUtf8("SredniaTesco"));
        SredniaTesco->setGeometry(QRect(100, 295, 531, 16));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        SredniaTesco->setFont(font4);
        SredniaLidl = new QLabel(Sklep);
        SredniaLidl->setObjectName(QString::fromUtf8("SredniaLidl"));
        SredniaLidl->setGeometry(QRect(100, 320, 531, 21));
        SredniaLidl->setFont(font4);
        SredniaBiedronka = new QLabel(Sklep);
        SredniaBiedronka->setObjectName(QString::fromUtf8("SredniaBiedronka"));
        SredniaBiedronka->setGeometry(QRect(100, 350, 531, 21));
        SredniaBiedronka->setFont(font4);

        retranslateUi(Sklep);

        TescoButton->setDefault(false);


        QMetaObject::connectSlotsByName(Sklep);
    } // setupUi

    void retranslateUi(QDialog *Sklep)
    {
        Sklep->setWindowTitle(QCoreApplication::translate("Sklep", "WyborSklepu", nullptr));
        pushButton->setText(QCoreApplication::translate("Sklep", "Logout", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("Sklep", "Choose store and compare prices!", nullptr));
        TescoButton->setText(QCoreApplication::translate("Sklep", "Show items", nullptr));
        LidlButton->setText(QCoreApplication::translate("Sklep", "Show items", nullptr));
        BiedronkaButton->setText(QCoreApplication::translate("Sklep", "Show items", nullptr));
        label_5->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("Sklep", "Change password", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Sklep", "Change email", nullptr));
        SredniaTesco->setText(QString());
        SredniaLidl->setText(QString());
        SredniaBiedronka->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Sklep: public Ui_Sklep {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKLEP_H
