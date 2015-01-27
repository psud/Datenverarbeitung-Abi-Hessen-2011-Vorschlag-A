#include "flughafenleitstellegui.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FlughafenLeitstelleGUI w;
    w.show();

    return a.exec();
}
