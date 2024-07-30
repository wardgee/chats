#include "widget.h"
#include "chatslist.h"
#include <QApplication>
#include <login.h>
#include "register.h"
#include "connectdatabases.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // Widget w("1");
    // w.show();


    // ChatsList cl ;
    // cl.show();

    Login l;
    l.show();
    // Register r;
    // r.show();
    return a.exec();
}
