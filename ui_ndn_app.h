/********************************************************************************
** Form generated from reading UI file 'ndn_app.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NDN_APP_H
#define UI_NDN_APP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ndn_app
{
public:
    QWidget *centralWidget;
    QPushButton *getFiles;
    QPushButton *consumer_app;
    QPushButton *producer_app;
    QPushButton *to_DB;
    QPushButton *chat_app;
    QPushButton *delete_DB;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ndn_app)
    {
        if (ndn_app->objectName().isEmpty())
            ndn_app->setObjectName(QString::fromUtf8("ndn_app"));
        ndn_app->resize(791, 413);
        centralWidget = new QWidget(ndn_app);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        getFiles = new QPushButton(centralWidget);
        getFiles->setObjectName(QString::fromUtf8("getFiles"));
        getFiles->setGeometry(QRect(0, 0, 261, 171));
        consumer_app = new QPushButton(centralWidget);
        consumer_app->setObjectName(QString::fromUtf8("consumer_app"));
        consumer_app->setGeometry(QRect(0, 170, 261, 181));
        producer_app = new QPushButton(centralWidget);
        producer_app->setObjectName(QString::fromUtf8("producer_app"));
        producer_app->setGeometry(QRect(260, 170, 261, 181));
        to_DB = new QPushButton(centralWidget);
        to_DB->setObjectName(QString::fromUtf8("to_DB"));
        to_DB->setGeometry(QRect(260, 0, 261, 171));
        chat_app = new QPushButton(centralWidget);
        chat_app->setObjectName(QString::fromUtf8("chat_app"));
        chat_app->setGeometry(QRect(520, 170, 261, 181));
        delete_DB = new QPushButton(centralWidget);
        delete_DB->setObjectName(QString::fromUtf8("delete_DB"));
        delete_DB->setGeometry(QRect(520, 0, 261, 171));
        ndn_app->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ndn_app);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 791, 22));
        ndn_app->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ndn_app);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ndn_app->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ndn_app);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ndn_app->setStatusBar(statusBar);

        retranslateUi(ndn_app);

        QMetaObject::connectSlotsByName(ndn_app);
    } // setupUi

    void retranslateUi(QMainWindow *ndn_app)
    {
        ndn_app->setWindowTitle(QApplication::translate("ndn_app", "ndn_app", nullptr));
        getFiles->setText(QApplication::translate("ndn_app", "Get file", nullptr));
        consumer_app->setText(QApplication::translate("ndn_app", "Consumer", nullptr));
        producer_app->setText(QApplication::translate("ndn_app", "Producer", nullptr));
        to_DB->setText(QApplication::translate("ndn_app", "Push file to Database", nullptr));
        chat_app->setText(QApplication::translate("ndn_app", "Chat", nullptr));
        delete_DB->setText(QApplication::translate("ndn_app", "Delete file from Database", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ndn_app: public Ui_ndn_app {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NDN_APP_H
