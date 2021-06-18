#include <QApplication>
#include "Gatewin.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Gatewin win;
    win.show();
    return a.exec();
}
