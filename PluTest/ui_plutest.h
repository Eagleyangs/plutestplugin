/********************************************************************************
** Form generated from reading UI file 'plutest.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUTEST_H
#define UI_PLUTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PluTest
{
public:
    QTimeEdit *timeEdit;
    QDateEdit *dateEdit;

    void setupUi(QWidget *PluTest)
    {
        if (PluTest->objectName().isEmpty())
            PluTest->setObjectName(QStringLiteral("PluTest"));
        PluTest->resize(400, 300);
        timeEdit = new QTimeEdit(PluTest);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(40, 50, 118, 22));
        dateEdit = new QDateEdit(PluTest);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(40, 90, 110, 22));

        retranslateUi(PluTest);

        QMetaObject::connectSlotsByName(PluTest);
    } // setupUi

    void retranslateUi(QWidget *PluTest)
    {
        PluTest->setWindowTitle(QApplication::translate("PluTest", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PluTest: public Ui_PluTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUTEST_H
