//
// Created by Erik Sevre on 11/13/18.
//

#include "MainButtonWindow.hpp"

MainButtonWindow::MainButtonWindow(QWidget* parent)
    : QMainWindow(parent)
{
    this->resize(640, 400);
    this->setWindowTitle(tr("Button Window"));

    centralWidget = new CentralButtonWidget(this);
    this->setCentralWidget(centralWidget);
}

