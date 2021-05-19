/********************************************************************************
** Form generated from reading UI file 'messager.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGER_H
#define UI_MESSAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Messager
{
public:
    QDialogButtonBox *buttonBox;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *Messager)
    {
        if (Messager->objectName().isEmpty())
            Messager->setObjectName(QString::fromUtf8("Messager"));
        Messager->resize(400, 300);
        buttonBox = new QDialogButtonBox(Messager);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        textBrowser = new QTextBrowser(Messager);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(40, 20, 311, 161));

        retranslateUi(Messager);
        QObject::connect(buttonBox, SIGNAL(accepted()), Messager, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Messager, SLOT(reject()));

        QMetaObject::connectSlotsByName(Messager);
    } // setupUi

    void retranslateUi(QDialog *Messager)
    {
        Messager->setWindowTitle(QApplication::translate("Messager", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Messager: public Ui_Messager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGER_H
