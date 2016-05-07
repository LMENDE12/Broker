#include "login.h"
#include "mainwindows.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindows w;
    Login *n = new Login();
    n->exec();
    w.show();

    return a.exec();
}
