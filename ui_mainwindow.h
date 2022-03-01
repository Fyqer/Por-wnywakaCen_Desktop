/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *RejestracjaForm;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLineEdit *Username;
    QLabel *label_4;
    QLineEdit *Haslo;
    QLabel *label_5;
    QLineEdit *Email;
    QPushButton *ZarejestrujBtn;
    QGroupBox *LogowanieForm;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_7;
    QLineEdit *Username2;
    QLabel *label_6;
    QLineEdit *Haslo2;
    QPushButton *LoginBtn;
    QWidget *widget;
    QLabel *label;
    QGroupBox *groupBox;
    QRadioButton *KlientButton;
    QRadioButton *MagazynierButton;
    QRadioButton *KurierButton;
    QPushButton *pushButton;
    QGroupBox *groupBox_2;
    QLabel *label_8;
    QLineEdit *kodEdit;
    QWidget *widget_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1000, 600);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1000, 600));
        MainWindow->setMaximumSize(QSize(1000, 600));
        MainWindow->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"border-image : url(:/obrazy/sklep.jpg);\n"
"\n"
"}\n"
"#RejestracjaForm{\n"
"background-color:rgb(170, 0, 255);\n"
"}\n"
"#LogowanieForm{\n"
"background-color:rgb(170, 0, 255);\n"
"\n"
"}\n"
"\n"
"\n"
"#groupBox_2{\n"
"background-color:rgb(170, 0, 255);\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        RejestracjaForm = new QGroupBox(centralwidget);
        RejestracjaForm->setObjectName(QString::fromUtf8("RejestracjaForm"));
        RejestracjaForm->setEnabled(true);
        RejestracjaForm->setGeometry(QRect(180, 180, 311, 321));
        QFont font;
        font.setPointSize(18);
        RejestracjaForm->setFont(font);
        verticalLayout_3 = new QVBoxLayout(RejestracjaForm);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(RejestracjaForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        Username = new QLineEdit(RejestracjaForm);
        Username->setObjectName(QString::fromUtf8("Username"));
        QFont font1;
        font1.setPointSize(14);
        Username->setFont(font1);

        verticalLayout_3->addWidget(Username);

        label_4 = new QLabel(RejestracjaForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_3->addWidget(label_4);

        Haslo = new QLineEdit(RejestracjaForm);
        Haslo->setObjectName(QString::fromUtf8("Haslo"));
        Haslo->setFont(font1);
        Haslo->setEchoMode(QLineEdit::Password);

        verticalLayout_3->addWidget(Haslo);

        label_5 = new QLabel(RejestracjaForm);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_3->addWidget(label_5);

        Email = new QLineEdit(RejestracjaForm);
        Email->setObjectName(QString::fromUtf8("Email"));
        Email->setFont(font1);

        verticalLayout_3->addWidget(Email);

        ZarejestrujBtn = new QPushButton(RejestracjaForm);
        ZarejestrujBtn->setObjectName(QString::fromUtf8("ZarejestrujBtn"));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        ZarejestrujBtn->setFont(font2);
        ZarejestrujBtn->setStyleSheet(QString::fromUtf8("#ZarejestrujBtn\n"
"{\n"
"background-color :rgb(0, 170, 255);\n"
"color :black;\n"
"border-style: outset;\n"
"}"));

        verticalLayout_3->addWidget(ZarejestrujBtn);

        LogowanieForm = new QGroupBox(centralwidget);
        LogowanieForm->setObjectName(QString::fromUtf8("LogowanieForm"));
        LogowanieForm->setGeometry(QRect(600, 180, 261, 241));
        LogowanieForm->setFont(font);
        verticalLayout_5 = new QVBoxLayout(LogowanieForm);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_7 = new QLabel(LogowanieForm);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_5->addWidget(label_7);

        Username2 = new QLineEdit(LogowanieForm);
        Username2->setObjectName(QString::fromUtf8("Username2"));
        Username2->setFont(font1);

        verticalLayout_5->addWidget(Username2);

        label_6 = new QLabel(LogowanieForm);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_5->addWidget(label_6);

        Haslo2 = new QLineEdit(LogowanieForm);
        Haslo2->setObjectName(QString::fromUtf8("Haslo2"));
        Haslo2->setFont(font1);
        Haslo2->setEchoMode(QLineEdit::Password);

        verticalLayout_5->addWidget(Haslo2);

        LoginBtn = new QPushButton(LogowanieForm);
        LoginBtn->setObjectName(QString::fromUtf8("LoginBtn"));
        LoginBtn->setFont(font2);
        LoginBtn->setStyleSheet(QString::fromUtf8("#LoginBtn\n"
"{\n"
"background-color :rgb(0, 170, 255);\n"
"color :black;\n"
"border-style: outset;\n"
"}"));

        verticalLayout_5->addWidget(LoginBtn);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 1001, 51));
        widget->setAutoFillBackground(false);
        widget->setStyleSheet(QString::fromUtf8("#widget{\n"
"background-color:rgba(85, 0, 255, 140);\n"
"}"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, -30, 721, 111));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Neue Haas Grotesk Text Pro Medi"));
        font3.setPointSize(16);
        label->setFont(font3);
        label->setAlignment(Qt::AlignCenter);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(180, 60, 571, 41));
        QFont font4;
        font4.setBold(true);
        font4.setWeight(75);
        groupBox->setFont(font4);
        groupBox->setStyleSheet(QString::fromUtf8("#groupBox{\n"
"background-color:rgb(170, 0, 255);\n"
"}"));
        KlientButton = new QRadioButton(groupBox);
        KlientButton->setObjectName(QString::fromUtf8("KlientButton"));
        KlientButton->setGeometry(QRect(280, 10, 82, 17));
        KlientButton->setChecked(true);
        MagazynierButton = new QRadioButton(groupBox);
        MagazynierButton->setObjectName(QString::fromUtf8("MagazynierButton"));
        MagazynierButton->setGeometry(QRect(90, 10, 82, 17));
        KurierButton = new QRadioButton(groupBox);
        KurierButton->setObjectName(QString::fromUtf8("KurierButton"));
        KurierButton->setGeometry(QRect(450, 10, 82, 17));
        KurierButton->setChecked(false);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 580, 16, 16));
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton\n"
"{\n"
"background-color:transparent;\n"
"}"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(550, 490, 241, 101));
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setWeight(75);
        groupBox_2->setFont(font5);
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 40, 101, 16));
        label_8->setFont(font5);
        kodEdit = new QLineEdit(groupBox_2);
        kodEdit->setObjectName(QString::fromUtf8("kodEdit"));
        kodEdit->setGeometry(QRect(110, 40, 113, 20));
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(10, 110, 1011, 51));
        widget_2->setAutoFillBackground(false);
        widget_2->setStyleSheet(QString::fromUtf8("#widget{\n"
"background-color:rgba(85, 0, 255, 140);\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
#if QT_CONFIG(shortcut)
        label_2->setBuddy(label_2);
        label_4->setBuddy(label_2);
        label_5->setBuddy(label_2);
        label_7->setBuddy(label_2);
        label_6->setBuddy(label_2);
#endif // QT_CONFIG(shortcut)

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "ProjektSklep", nullptr));
        RejestracjaForm->setTitle(QCoreApplication::translate("MainWindow", "Register", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">ID</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">Password</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">Email</span></p></body></html>", nullptr));
        ZarejestrujBtn->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        LogowanieForm->setTitle(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">ID</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">Password</span></p></body></html>", nullptr));
        LoginBtn->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>&quot;Application for comparing prices&quot;</p></body></html>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Choose type of account", nullptr));
        KlientButton->setText(QCoreApplication::translate("MainWindow", "Klient", nullptr));
        MagazynierButton->setText(QCoreApplication::translate("MainWindow", "Magazynier", nullptr));
        KurierButton->setText(QCoreApplication::translate("MainWindow", "Kurier", nullptr));
        pushButton->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Activation code ", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "code:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
