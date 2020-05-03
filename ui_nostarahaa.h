/********************************************************************************
** Form generated from reading UI file 'nostarahaa.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOSTARAHAA_H
#define UI_NOSTARAHAA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_nostarahaa
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_9;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *nostarahaa)
    {
        if (nostarahaa->objectName().isEmpty())
            nostarahaa->setObjectName(QStringLiteral("nostarahaa"));
        nostarahaa->resize(400, 300);
        nostarahaa->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 127)"));
        label = new QLabel(nostarahaa);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 60, 250, 21));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(nostarahaa);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 62, 105, 16));
        label_2->setFont(font);
        label_3 = new QLabel(nostarahaa);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(46, 100, 301, 20));
        QFont font1;
        font1.setPointSize(10);
        label_3->setFont(font1);
        pushButton_9 = new QPushButton(nostarahaa);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(10, 10, 75, 23));
        widget = new QWidget(nostarahaa);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 200, 327, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(50);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        horizontalLayout->addWidget(pushButton_6);

        widget1 = new QWidget(nostarahaa);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(40, 140, 327, 34));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(50);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget1);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_2->addWidget(pushButton_3);


        retranslateUi(nostarahaa);

        QMetaObject::connectSlotsByName(nostarahaa);
    } // setupUi

    void retranslateUi(QDialog *nostarahaa)
    {
        nostarahaa->setWindowTitle(QApplication::translate("nostarahaa", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("nostarahaa", "<nimi>", Q_NULLPTR));
        label_2->setText(QApplication::translate("nostarahaa", "<saldo>", Q_NULLPTR));
        label_3->setText(QApplication::translate("nostarahaa", "Valitse nostettavan rahasumman m\303\244\303\244r\303\244:", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("nostarahaa", "<-", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("nostarahaa", "40", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("nostarahaa", "100", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("nostarahaa", "500", Q_NULLPTR));
        pushButton->setText(QApplication::translate("nostarahaa", "20", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("nostarahaa", "60", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("nostarahaa", "200", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class nostarahaa: public Ui_nostarahaa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTARAHAA_H
