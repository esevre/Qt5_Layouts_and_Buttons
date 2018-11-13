#include <iostream>

#include <QApplication>

#include "MainButtonWindow.hpp"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MainButtonWindow w;
    w.show();

    return app.exec();
}