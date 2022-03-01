/********************************************************************************
** Form generated from reading UI file 'produkty.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUKTY_H
#define UI_PRODUKTY_H

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

class Ui_Produkty
{
public:
    QTableView *tableView;
    QLabel *ProduktyLabel;
    QGroupBox *groupBox;
    QLabel *CenaLabel2;
    QLabel *CenaLabel1;
    QTableView *tableView_2;
    QTableView *tableView_3;
    QPushButton *ZamowButton;
    QGroupBox *groupBox_2;
    QLabel *label_4;
    QLabel *label_3;
    QPushButton *ZamowButtn2;
    QLineEdit *AdresEdit;
    QLabel *label_5;
    QLineEdit *Nazwiskoedit;
    QLineEdit *ImieEdit;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *MiastoEdit;
    QLabel *Podsumowanie_3;
    QLabel *label_6;
    QLineEdit *IloscEdit;
    QGroupBox *WyszukajProdukt;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *WyszukajNazwa;
    QLineEdit *WyszkuajFirma;
    QPushButton *WyszkajButton;
    QLabel *label_11;
    QLineEdit *WyszukajMiasto;
    QLabel *label_10;
    QLabel *Podsumowanie;

    void setupUi(QDialog *Produkty)
    {
        if (Produkty->objectName().isEmpty())
            Produkty->setObjectName(QString::fromUtf8("Produkty"));
        Produkty->resize(1000, 700);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Produkty->sizePolicy().hasHeightForWidth());
        Produkty->setSizePolicy(sizePolicy);
        Produkty->setMinimumSize(QSize(1000, 700));
        Produkty->setMaximumSize(QSize(1000, 700));
        Produkty->setAutoFillBackground(false);
        Produkty->setStyleSheet(QString::fromUtf8("#Produkty\n"
"{\n"
"background-color:rgb(0, 170, 255);\n"
"}\n"
""));
        tableView = new QTableView(Produkty);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 40, 461, 221));
        tableView->setStyleSheet(QString::fromUtf8("#tableView{\n"
"background-color:rgb(170, 0, 255);\n"
"}"));
        tableView->setFrameShadow(QFrame::Raised);
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ProduktyLabel = new QLabel(Produkty);
        ProduktyLabel->setObjectName(QString::fromUtf8("ProduktyLabel"));
        ProduktyLabel->setGeometry(QRect(200, 0, 361, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        ProduktyLabel->setFont(font);
        groupBox = new QGroupBox(Produkty);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(60, 500, 811, 191));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        groupBox->setFont(font1);
        groupBox->setStyleSheet(QString::fromUtf8("#groupBox{\n"
"background-color:rgb(170, 0, 255);\n"
"}"));
        groupBox->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        CenaLabel2 = new QLabel(groupBox);
        CenaLabel2->setObjectName(QString::fromUtf8("CenaLabel2"));
        CenaLabel2->setGeometry(QRect(390, 40, 131, 21));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        CenaLabel2->setFont(font2);
        CenaLabel1 = new QLabel(groupBox);
        CenaLabel1->setObjectName(QString::fromUtf8("CenaLabel1"));
        CenaLabel1->setGeometry(QRect(390, 80, 131, 21));
        CenaLabel1->setFont(font2);
        tableView_2 = new QTableView(groupBox);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setGeometry(QRect(570, 40, 31, 21));
        tableView_2->horizontalHeader()->setVisible(false);
        tableView_2->verticalHeader()->setVisible(false);
        tableView_3 = new QTableView(groupBox);
        tableView_3->setObjectName(QString::fromUtf8("tableView_3"));
        tableView_3->setGeometry(QRect(570, 80, 31, 21));
        tableView_3->horizontalHeader()->setVisible(false);
        tableView_3->verticalHeader()->setVisible(false);
        ZamowButton = new QPushButton(groupBox);
        ZamowButton->setObjectName(QString::fromUtf8("ZamowButton"));
        ZamowButton->setGeometry(QRect(540, 140, 181, 41));
        ZamowButton->setFont(font);
        ZamowButton->setStyleSheet(QString::fromUtf8("#ZamowButton\n"
"{\n"
"\n"
"\n"
"background-color :rgb(0, 170, 255);\n"
"color : black;\n"
"border-style: outset;\n"
"}\n"
""));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 30, 261, 161));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        groupBox_2->setFont(font3);
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 20, 171, 21));
        QFont font4;
        font4.setBold(true);
        font4.setWeight(75);
        label_4->setFont(font4);
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(190, 20, 41, 21));
        label_3->setFont(font4);
        ZamowButtn2 = new QPushButton(groupBox_2);
        ZamowButtn2->setObjectName(QString::fromUtf8("ZamowButtn2"));
        ZamowButtn2->setGeometry(QRect(40, 120, 171, 31));
        ZamowButtn2->setFont(font4);
        ZamowButtn2->setStyleSheet(QString::fromUtf8("#ZamowButtn2\n"
"{\n"
"\n"
"background-color :rgb(0, 170, 255);\n"
"color : black;\n"
"border-style: outset;\n"
"}\n"
""));
        AdresEdit = new QLineEdit(groupBox_2);
        AdresEdit->setObjectName(QString::fromUtf8("AdresEdit"));
        AdresEdit->setGeometry(QRect(70, 80, 101, 16));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 80, 61, 20));
        label_5->setFont(font4);
        Nazwiskoedit = new QLineEdit(groupBox_2);
        Nazwiskoedit->setObjectName(QString::fromUtf8("Nazwiskoedit"));
        Nazwiskoedit->setGeometry(QRect(70, 60, 101, 16));
        ImieEdit = new QLineEdit(groupBox_2);
        ImieEdit->setObjectName(QString::fromUtf8("ImieEdit"));
        ImieEdit->setGeometry(QRect(70, 40, 101, 16));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 40, 47, 13));
        label_7->setFont(font4);
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 60, 61, 16));
        label_8->setFont(font4);
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 100, 61, 21));
        label_9->setFont(font4);
        MiastoEdit = new QLineEdit(groupBox_2);
        MiastoEdit->setObjectName(QString::fromUtf8("MiastoEdit"));
        MiastoEdit->setGeometry(QRect(70, 100, 101, 16));
        Podsumowanie_3 = new QLabel(groupBox_2);
        Podsumowanie_3->setObjectName(QString::fromUtf8("Podsumowanie_3"));
        Podsumowanie_3->setGeometry(QRect(100, -230, 771, 241));
        QFont font5;
        font5.setPointSize(18);
        font5.setBold(true);
        font5.setWeight(75);
        Podsumowanie_3->setFont(font5);
        Podsumowanie_3->setLayoutDirection(Qt::LeftToRight);
        Podsumowanie_3->setInputMethodHints(Qt::ImhNone);
        Podsumowanie_3->setLineWidth(1);
        Podsumowanie_3->setMidLineWidth(0);
        Podsumowanie_3->setTextFormat(Qt::AutoText);
        Podsumowanie_3->setScaledContents(true);
        Podsumowanie_3->setWordWrap(true);
        Podsumowanie_3->setMargin(2);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(330, 110, 71, 20));
        label_6->setFont(font2);
        IloscEdit = new QLineEdit(groupBox);
        IloscEdit->setObjectName(QString::fromUtf8("IloscEdit"));
        IloscEdit->setGeometry(QRect(340, 130, 31, 21));
        WyszukajProdukt = new QGroupBox(Produkty);
        WyszukajProdukt->setObjectName(QString::fromUtf8("WyszukajProdukt"));
        WyszukajProdukt->setGeometry(QRect(550, 40, 351, 221));
        QFont font6;
        font6.setPointSize(16);
        font6.setBold(true);
        font6.setWeight(75);
        WyszukajProdukt->setFont(font6);
        WyszukajProdukt->setStyleSheet(QString::fromUtf8("#WyszukajProdukt{\n"
"background-color:rgb(170, 0, 255);\n"
"}"));
        label = new QLabel(WyszukajProdukt);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 70, 141, 21));
        label->setFont(font3);
        label_2 = new QLabel(WyszukajProdukt);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 110, 161, 21));
        label_2->setFont(font3);
        WyszukajNazwa = new QLineEdit(WyszukajProdukt);
        WyszukajNazwa->setObjectName(QString::fromUtf8("WyszukajNazwa"));
        WyszukajNazwa->setGeometry(QRect(170, 70, 161, 21));
        WyszkuajFirma = new QLineEdit(WyszukajProdukt);
        WyszkuajFirma->setObjectName(QString::fromUtf8("WyszkuajFirma"));
        WyszkuajFirma->setGeometry(QRect(170, 110, 161, 21));
        WyszkajButton = new QPushButton(WyszukajProdukt);
        WyszkajButton->setObjectName(QString::fromUtf8("WyszkajButton"));
        WyszkajButton->setGeometry(QRect(80, 150, 191, 41));
        WyszkajButton->setFont(font4);
        WyszkajButton->setStyleSheet(QString::fromUtf8("#WyszkajButton{\n"
"\n"
"background-color :rgb(0, 170, 255);\n"
"color : black;\n"
"border-style: outset;\n"
"}"));
        label_11 = new QLabel(WyszukajProdukt);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 30, 131, 21));
        label_11->setFont(font3);
        label_11->setStyleSheet(QString::fromUtf8("#label_11{\n"
"color : rgb(255, 255, 0)\n"
"}"));
        WyszukajMiasto = new QLineEdit(WyszukajProdukt);
        WyszukajMiasto->setObjectName(QString::fromUtf8("WyszukajMiasto"));
        WyszukajMiasto->setGeometry(QRect(170, 30, 161, 21));
        label_10 = new QLabel(Produkty);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(390, 200, 47, 13));
        Podsumowanie = new QLabel(Produkty);
        Podsumowanie->setObjectName(QString::fromUtf8("Podsumowanie"));
        Podsumowanie->setGeometry(QRect(40, 270, 881, 131));
        Podsumowanie->setMaximumSize(QSize(16777215, 177));
        Podsumowanie->setFont(font6);
        Podsumowanie->setLayoutDirection(Qt::LeftToRight);
        Podsumowanie->setInputMethodHints(Qt::ImhNone);
        Podsumowanie->setLineWidth(1);
        Podsumowanie->setMidLineWidth(0);
        Podsumowanie->setTextFormat(Qt::AutoText);
        Podsumowanie->setScaledContents(true);
        Podsumowanie->setWordWrap(true);
        Podsumowanie->setMargin(2);

        retranslateUi(Produkty);

        QMetaObject::connectSlotsByName(Produkty);
    } // setupUi

    void retranslateUi(QDialog *Produkty)
    {
        Produkty->setWindowTitle(QCoreApplication::translate("Produkty", "Dialog", nullptr));
        ProduktyLabel->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("Produkty", "Summary", nullptr));
        CenaLabel2->setText(QString());
        CenaLabel1->setText(QString());
        ZamowButton->setText(QCoreApplication::translate("Produkty", "Add to cart", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Produkty", "Order details", nullptr));
        label_4->setText(QCoreApplication::translate("Produkty", "The total cost of order:", nullptr));
        label_3->setText(QString());
        ZamowButtn2->setText(QCoreApplication::translate("Produkty", "Order", nullptr));
        label_5->setText(QCoreApplication::translate("Produkty", "Address:", nullptr));
        label_7->setText(QCoreApplication::translate("Produkty", "Name:", nullptr));
        label_8->setText(QCoreApplication::translate("Produkty", "Surname:", nullptr));
        label_9->setText(QCoreApplication::translate("Produkty", "City:", nullptr));
        Podsumowanie_3->setText(QString());
        label_6->setText(QCoreApplication::translate("Produkty", "Amount:", nullptr));
#if QT_CONFIG(whatsthis)
        WyszukajProdukt->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        WyszukajProdukt->setTitle(QCoreApplication::translate("Produkty", "Search", nullptr));
        label->setText(QCoreApplication::translate("Produkty", "Product name :", nullptr));
        label_2->setText(QCoreApplication::translate("Produkty", "Producer:", nullptr));
        WyszkajButton->setText(QCoreApplication::translate("Produkty", "Check availability and price", nullptr));
        label_11->setText(QCoreApplication::translate("Produkty", "City:", nullptr));
        label_10->setText(QString());
        Podsumowanie->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Produkty: public Ui_Produkty {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUKTY_H
