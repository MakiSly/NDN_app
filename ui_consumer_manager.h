/********************************************************************************
** Form generated from reading UI file 'consumer_manager.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSUMER_MANAGER_H
#define UI_CONSUMER_MANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Consumer_manager
{
public:
    QLineEdit *PrefixInput;
    QPushButton *AddPrefix;
    QTextBrowser *DataContainer;

    void setupUi(QWidget *Consumer_manager)
    {
        if (Consumer_manager->objectName().isEmpty())
            Consumer_manager->setObjectName(QString::fromUtf8("Consumer_manager"));
        Consumer_manager->resize(537, 401);
        PrefixInput = new QLineEdit(Consumer_manager);
        PrefixInput->setObjectName(QString::fromUtf8("PrefixInput"));
        PrefixInput->setGeometry(QRect(60, 50, 291, 51));
        AddPrefix = new QPushButton(Consumer_manager);
        AddPrefix->setObjectName(QString::fromUtf8("AddPrefix"));
        AddPrefix->setGeometry(QRect(350, 50, 121, 51));
        DataContainer = new QTextBrowser(Consumer_manager);
        DataContainer->setObjectName(QString::fromUtf8("DataContainer"));
        DataContainer->setGeometry(QRect(60, 120, 431, 241));

        retranslateUi(Consumer_manager);

        QMetaObject::connectSlotsByName(Consumer_manager);
    } // setupUi

    void retranslateUi(QWidget *Consumer_manager)
    {
        Consumer_manager->setWindowTitle(QApplication::translate("Consumer_manager", "Form", nullptr));
        AddPrefix->setText(QApplication::translate("Consumer_manager", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Consumer_manager: public Ui_Consumer_manager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSUMER_MANAGER_H
