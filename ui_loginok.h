/********************************************************************************
** Form generated from reading UI file 'loginok.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINOK_H
#define UI_LOGINOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_loginOk
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label;

    void setupUi(QDialog *loginOk)
    {
        if (loginOk->objectName().isEmpty())
            loginOk->setObjectName(QStringLiteral("loginOk"));
        loginOk->resize(400, 300);
        loginOk->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 127)"));
        pushButton = new QPushButton(loginOk);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 70, 141, 51));
        pushButton->setStyleSheet(QStringLiteral("pushButton-color: #ffaa00"));
        pushButton_2 = new QPushButton(loginOk);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 160, 141, 51));
        pushButton_3 = new QPushButton(loginOk);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(230, 70, 141, 51));
        pushButton_4 = new QPushButton(loginOk);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(230, 160, 141, 51));
        pushButton_5 = new QPushButton(loginOk);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(130, 240, 141, 41));
        label = new QLabel(loginOk);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 0, 151, 41));
        QFont font;
        font.setFamily(QStringLiteral("Fixedsys"));
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        retranslateUi(loginOk);

        QMetaObject::connectSlotsByName(loginOk);
    } // setupUi

    void retranslateUi(QDialog *loginOk)
    {
        loginOk->setWindowTitle(QApplication::translate("loginOk", "Pankkiautomaatti", Q_NULLPTR));
        pushButton->setText(QApplication::translate("loginOk", "Nosta rahaa", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("loginOk", "Selaa tilitapahtumia", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("loginOk", "N\303\244yt\303\244 saldo", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("loginOk", "Siirr\303\244 rahaa", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("loginOk", "Kirjaudu ulos", Q_NULLPTR));
        label->setText(QApplication::translate("loginOk", "Tervetuloa !", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class loginOk: public Ui_loginOk {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINOK_H
