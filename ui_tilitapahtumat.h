/********************************************************************************
** Form generated from reading UI file 'tilitapahtumat.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TILITAPAHTUMAT_H
#define UI_TILITAPAHTUMAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tilitapahtumat
{
public:
    QLabel *label;
    QTableView *tableView;
    QPushButton *pushButton_9;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *tilitapahtumat)
    {
        if (tilitapahtumat->objectName().isEmpty())
            tilitapahtumat->setObjectName(QStringLiteral("tilitapahtumat"));
        tilitapahtumat->resize(400, 300);
        tilitapahtumat->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 127)"));
        label = new QLabel(tilitapahtumat);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 0, 131, 41));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        tableView = new QTableView(tilitapahtumat);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(25, 111, 351, 181));
        pushButton_9 = new QPushButton(tilitapahtumat);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(10, 10, 75, 23));
        widget = new QWidget(tilitapahtumat);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 70, 387, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(70);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);


        retranslateUi(tilitapahtumat);

        QMetaObject::connectSlotsByName(tilitapahtumat);
    } // setupUi

    void retranslateUi(QDialog *tilitapahtumat)
    {
        tilitapahtumat->setWindowTitle(QApplication::translate("tilitapahtumat", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("tilitapahtumat", "Tilitapahtumat", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("tilitapahtumat", "<-", Q_NULLPTR));
        pushButton->setText(QApplication::translate("tilitapahtumat", "Menot", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("tilitapahtumat", "Tulot", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("tilitapahtumat", "Molemmat", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class tilitapahtumat: public Ui_tilitapahtumat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TILITAPAHTUMAT_H
