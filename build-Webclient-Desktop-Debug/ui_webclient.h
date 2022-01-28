/********************************************************************************
** Form generated from reading UI file 'webclient.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEBCLIENT_H
#define UI_WEBCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Webclient
{
public:
    QLabel *hostname;
    QLineEdit *inputwebserver;
    QPushButton *gobutton;
    QTextBrowser *outputinfo;

    void setupUi(QWidget *Webclient)
    {
        if (Webclient->objectName().isEmpty())
            Webclient->setObjectName(QStringLiteral("Webclient"));
        Webclient->resize(480, 458);
        hostname = new QLabel(Webclient);
        hostname->setObjectName(QStringLiteral("hostname"));
        hostname->setGeometry(QRect(30, 20, 81, 22));
        inputwebserver = new QLineEdit(Webclient);
        inputwebserver->setObjectName(QStringLiteral("inputwebserver"));
        inputwebserver->setGeometry(QRect(30, 50, 291, 31));
        gobutton = new QPushButton(Webclient);
        gobutton->setObjectName(QStringLiteral("gobutton"));
        gobutton->setGeometry(QRect(340, 50, 99, 30));
        outputinfo = new QTextBrowser(Webclient);
        outputinfo->setObjectName(QStringLiteral("outputinfo"));
        outputinfo->setGeometry(QRect(30, 90, 411, 341));

        retranslateUi(Webclient);

        QMetaObject::connectSlotsByName(Webclient);
    } // setupUi

    void retranslateUi(QWidget *Webclient)
    {
        Webclient->setWindowTitle(QApplication::translate("Webclient", "Webclient", nullptr));
        hostname->setText(QApplication::translate("Webclient", "Hostname:", nullptr));
        gobutton->setText(QApplication::translate("Webclient", "go", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Webclient: public Ui_Webclient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEBCLIENT_H
