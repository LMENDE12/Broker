/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *lineEditCPF;
    QLineEdit *lineEditSenha;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonLogIn;
    QPushButton *pushButtonRecuperaSenha;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(379, 196);
        gridLayout = new QGridLayout(Login);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(Login);
        label->setObjectName(QStringLiteral("label"));
        label->setLocale(QLocale(QLocale::Portuguese, QLocale::Brazil));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 3);

        label_3 = new QLabel(Login);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_2 = new QLabel(Login);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEditCPF = new QLineEdit(Login);
        lineEditCPF->setObjectName(QStringLiteral("lineEditCPF"));

        gridLayout->addWidget(lineEditCPF, 1, 1, 1, 2);

        lineEditSenha = new QLineEdit(Login);
        lineEditSenha->setObjectName(QStringLiteral("lineEditSenha"));
        lineEditSenha->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEditSenha, 3, 1, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonLogIn = new QPushButton(Login);
        pushButtonLogIn->setObjectName(QStringLiteral("pushButtonLogIn"));

        horizontalLayout->addWidget(pushButtonLogIn);

        pushButtonRecuperaSenha = new QPushButton(Login);
        pushButtonRecuperaSenha->setObjectName(QStringLiteral("pushButtonRecuperaSenha"));

        horizontalLayout->addWidget(pushButtonRecuperaSenha);


        gridLayout->addLayout(horizontalLayout, 5, 0, 2, 3);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Dialog", 0));
        label->setText(QApplication::translate("Login", "Fazer login", 0));
        label_3->setText(QApplication::translate("Login", "Digite o sua senha", 0));
        label_2->setText(QApplication::translate("Login", "Digite o seu CPF", 0));
        lineEditCPF->setInputMask(QApplication::translate("Login", "999.999.999.-99", 0));
        lineEditCPF->setPlaceholderText(QString());
        lineEditSenha->setPlaceholderText(QString());
        pushButtonLogIn->setText(QApplication::translate("Login", "Log in", 0));
        pushButtonRecuperaSenha->setText(QApplication::translate("Login", "Esqueci a senha", 0));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
