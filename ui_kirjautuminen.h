/********************************************************************************
** Form generated from reading UI file 'kirjautuminen.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KIRJAUTUMINEN_H
#define UI_KIRJAUTUMINEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_kirjautuminen
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *oikea_pin;
    QLabel *vaara_pin;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *panelButton_2;
    QPushButton *panelButton_5;
    QPushButton *panelButton_6;
    QPushButton *panelButton_0;
    QPushButton *panelButton_4;
    QPushButton *panelButton_1;
    QPushButton *panelButton_7;
    QPushButton *panelButton_3;
    QPushButton *panelButton_8;
    QPushButton *panelButton_9;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBox;

    void setupUi(QDialog *kirjautuminen)
    {
        if (kirjautuminen->objectName().isEmpty())
            kirjautuminen->setObjectName(QStringLiteral("kirjautuminen"));
        kirjautuminen->resize(317, 220);
        label = new QLabel(kirjautuminen);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 0, 101, 21));
        label_2 = new QLabel(kirjautuminen);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 0, 91, 21));
        oikea_pin = new QLabel(kirjautuminen);
        oikea_pin->setObjectName(QStringLiteral("oikea_pin"));
        oikea_pin->setEnabled(true);
        oikea_pin->setGeometry(QRect(120, 20, 121, 20));
        oikea_pin->setInputMethodHints(Qt::ImhNone);
        vaara_pin = new QLabel(kirjautuminen);
        vaara_pin->setObjectName(QStringLiteral("vaara_pin"));
        vaara_pin->setGeometry(QRect(116, 20, 201, 20));
        layoutWidget = new QWidget(kirjautuminen);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 80, 260, 141));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        panelButton_2 = new QPushButton(layoutWidget);
        panelButton_2->setObjectName(QStringLiteral("panelButton_2"));

        gridLayout->addWidget(panelButton_2, 0, 1, 1, 1);

        panelButton_5 = new QPushButton(layoutWidget);
        panelButton_5->setObjectName(QStringLiteral("panelButton_5"));

        gridLayout->addWidget(panelButton_5, 1, 1, 1, 1);

        panelButton_6 = new QPushButton(layoutWidget);
        panelButton_6->setObjectName(QStringLiteral("panelButton_6"));

        gridLayout->addWidget(panelButton_6, 1, 2, 1, 1);

        panelButton_0 = new QPushButton(layoutWidget);
        panelButton_0->setObjectName(QStringLiteral("panelButton_0"));

        gridLayout->addWidget(panelButton_0, 3, 1, 1, 1);

        panelButton_4 = new QPushButton(layoutWidget);
        panelButton_4->setObjectName(QStringLiteral("panelButton_4"));

        gridLayout->addWidget(panelButton_4, 1, 0, 1, 1);

        panelButton_1 = new QPushButton(layoutWidget);
        panelButton_1->setObjectName(QStringLiteral("panelButton_1"));

        gridLayout->addWidget(panelButton_1, 0, 0, 1, 1);

        panelButton_7 = new QPushButton(layoutWidget);
        panelButton_7->setObjectName(QStringLiteral("panelButton_7"));

        gridLayout->addWidget(panelButton_7, 2, 0, 1, 1);

        panelButton_3 = new QPushButton(layoutWidget);
        panelButton_3->setObjectName(QStringLiteral("panelButton_3"));

        gridLayout->addWidget(panelButton_3, 0, 2, 1, 1);

        panelButton_8 = new QPushButton(layoutWidget);
        panelButton_8->setObjectName(QStringLiteral("panelButton_8"));

        gridLayout->addWidget(panelButton_8, 2, 1, 1, 1);

        panelButton_9 = new QPushButton(layoutWidget);
        panelButton_9->setObjectName(QStringLiteral("panelButton_9"));

        gridLayout->addWidget(panelButton_9, 2, 2, 1, 1);

        layoutWidget1 = new QWidget(kirjautuminen);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 50, 221, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        spinBox = new QSpinBox(layoutWidget1);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        horizontalLayout->addWidget(spinBox);


        retranslateUi(kirjautuminen);

        QMetaObject::connectSlotsByName(kirjautuminen);
    } // setupUi

    void retranslateUi(QDialog *kirjautuminen)
    {
        kirjautuminen->setWindowTitle(QApplication::translate("kirjautuminen", "Dialog", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("kirjautuminen", "Kortin tunnusluku:", Q_NULLPTR));
        oikea_pin->setText(QApplication::translate("kirjautuminen", "Oikea pin sy\303\266tetty", Q_NULLPTR));
        vaara_pin->setText(QApplication::translate("kirjautuminen", "V\303\244\303\244r\303\244 pin sy\303\266tetty", Q_NULLPTR));
        panelButton_2->setText(QApplication::translate("kirjautuminen", "2", Q_NULLPTR));
        panelButton_5->setText(QApplication::translate("kirjautuminen", "5", Q_NULLPTR));
        panelButton_6->setText(QApplication::translate("kirjautuminen", "6", Q_NULLPTR));
        panelButton_0->setText(QApplication::translate("kirjautuminen", "0", Q_NULLPTR));
        panelButton_4->setText(QApplication::translate("kirjautuminen", "4", Q_NULLPTR));
        panelButton_1->setText(QApplication::translate("kirjautuminen", "1", Q_NULLPTR));
        panelButton_7->setText(QApplication::translate("kirjautuminen", "7", Q_NULLPTR));
        panelButton_3->setText(QApplication::translate("kirjautuminen", "3", Q_NULLPTR));
        panelButton_8->setText(QApplication::translate("kirjautuminen", "8", Q_NULLPTR));
        panelButton_9->setText(QApplication::translate("kirjautuminen", "9", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class kirjautuminen: public Ui_kirjautuminen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KIRJAUTUMINEN_H
