/********************************************************************************
** Form generated from reading UI file 'siirrarahaa.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIIRRARAHAA_H
#define UI_SIIRRARAHAA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_siirrarahaa
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QCheckBox *checkBox;
    QLabel *label_4;
    QPushButton *pushButton_2;

    void setupUi(QDialog *siirrarahaa)
    {
        if (siirrarahaa->objectName().isEmpty())
            siirrarahaa->setObjectName(QStringLiteral("siirrarahaa"));
        siirrarahaa->resize(400, 300);
        siirrarahaa->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 127)"));
        pushButton = new QPushButton(siirrarahaa);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 75, 23));
        label = new QLabel(siirrarahaa);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 50, 101, 51));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        lineEdit = new QLineEdit(siirrarahaa);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(50, 140, 301, 20));
        label_2 = new QLabel(siirrarahaa);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 100, 171, 21));
        QFont font1;
        font1.setPointSize(10);
        label_2->setFont(font1);
        label_3 = new QLabel(siirrarahaa);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 170, 171, 21));
        label_3->setFont(font1);
        lineEdit_2 = new QLineEdit(siirrarahaa);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(50, 200, 301, 20));
        checkBox = new QCheckBox(siirrarahaa);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(50, 260, 70, 17));
        label_4 = new QLabel(siirrarahaa);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 230, 171, 21));
        label_4->setFont(font1);
        pushButton_2 = new QPushButton(siirrarahaa);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 250, 75, 23));

        retranslateUi(siirrarahaa);

        QMetaObject::connectSlotsByName(siirrarahaa);
    } // setupUi

    void retranslateUi(QDialog *siirrarahaa)
    {
        siirrarahaa->setWindowTitle(QApplication::translate("siirrarahaa", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("siirrarahaa", "<-", Q_NULLPTR));
        label->setText(QApplication::translate("siirrarahaa", "Rahansiirto", Q_NULLPTR));
        label_2->setText(QApplication::translate("siirrarahaa", "Sy\303\266ta tilinumero", Q_NULLPTR));
        label_3->setText(QApplication::translate("siirrarahaa", "Sy\303\266ta summa", Q_NULLPTR));
        checkBox->setText(QApplication::translate("siirrarahaa", "Pankkitili", Q_NULLPTR));
        label_4->setText(QApplication::translate("siirrarahaa", "Valitse tili", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("siirrarahaa", "L\303\244het\303\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class siirrarahaa: public Ui_siirrarahaa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIIRRARAHAA_H
