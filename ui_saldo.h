/********************************************************************************
** Form generated from reading UI file 'saldo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALDO_H
#define UI_SALDO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_saldo
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label_3;
    QTableView *tableView;

    void setupUi(QDialog *saldo)
    {
        if (saldo->objectName().isEmpty())
            saldo->setObjectName(QStringLiteral("saldo"));
        saldo->resize(400, 300);
        saldo->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 127)"));
        label = new QLabel(saldo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 50, 61, 51));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label_2 = new QLabel(saldo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 100, 1000, 51));
        label_2->setFont(font);
        pushButton = new QPushButton(saldo);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 75, 23));
        label_3 = new QLabel(saldo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 140, 71, 51));
        label_3->setFont(font);
        tableView = new QTableView(saldo);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 190, 361, 91));

        retranslateUi(saldo);

        QMetaObject::connectSlotsByName(saldo);
    } // setupUi

    void retranslateUi(QDialog *saldo)
    {
        saldo->setWindowTitle(QApplication::translate("saldo", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("saldo", "Saldosi", Q_NULLPTR));
        label_2->setText(QApplication::translate("saldo", "<tiedot>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("saldo", "<-", Q_NULLPTR));
        label_3->setText(QApplication::translate("saldo", "<saldo>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class saldo: public Ui_saldo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALDO_H
