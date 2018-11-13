//
// Created by Erik Sevre on 11/13/18.
//

#pragma once

#include <QMainWindow>

#include "CentralButtonWidget.hpp"

class MainButtonWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainButtonWindow(QWidget *parent = nullptr);

private:
    CentralButtonWidget *centralWidget;

};


