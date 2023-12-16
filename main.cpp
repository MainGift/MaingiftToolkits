// git@github.com:MainGift/MaingiftToolkits.git

#include "toolkits.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ToolKits w;
    w.show();
    return a.exec();
}
