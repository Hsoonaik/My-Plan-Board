#include "splashform.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SplashForm SplshFrm;
    SplshFrm.show();
    return a.exec();
}
