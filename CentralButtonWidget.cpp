//
// Created by Erik Sevre on 11/13/18.
//
#include <iostream>

#include "CentralButtonWidget.hpp"

CentralButtonWidget::CentralButtonWidget(QWidget* parent)
    : QWidget(parent)
{
    generateButtons();

    //setupHBoxLayout();    // archived to show how other layouts work
    //generateVBoxLayout(); // archived to show how other layouts work
    generateGridLayout();

    connect(button1, SIGNAL(clicked()), this, SLOT(button1Pressed()));
    connect(button2, SIGNAL(clicked()), this, SLOT(button2Pressed()));
    connect(button3, SIGNAL(clicked()), this, SLOT(button3Pressed()));
    connect(button4, SIGNAL(clicked()), this, SLOT(button4Pressed()));

}

void CentralButtonWidget::button1Pressed()
{
    std::cout << "button 1 pressed\n";
}
void CentralButtonWidget::button2Pressed()
{
    std::cout << "button 2 pressed\n";
}
void CentralButtonWidget::button3Pressed()
{
    std::cout << "button 3 pressed\n";
}
void CentralButtonWidget::button4Pressed()
{
    std::cout << "button 4 pressed\n";
}

void CentralButtonWidget::generateGridLayout()
{
    gridLayout = new QGridLayout(this);
    setLayout(gridLayout);

    gridLayout->addWidget(button1, 0, 0, Qt::AlignCenter);
    gridLayout->addWidget(button2, 0, 1, Qt::AlignCenter);
    gridLayout->addWidget(button3, 1, 0, Qt::AlignCenter);
    gridLayout->addWidget(button4, 1, 1, 2, 1, Qt::AlignCenter);
}

void CentralButtonWidget::generateVBoxLayout()
{
    vBoxLayout = new QVBoxLayout(this);
    setLayout(vBoxLayout);

    vBoxLayout->addWidget(button1);
    vBoxLayout->addWidget(button2);
    vBoxLayout->addWidget(button3);
    vBoxLayout->addWidget(button4);
}

void CentralButtonWidget::setupHBoxLayout()
{
    hBoxLayout = new QHBoxLayout(this);
    setLayout(hBoxLayout);

    hBoxLayout->addWidget(button1);
    hBoxLayout->addWidget(button2);
    hBoxLayout->addWidget(button3);
    hBoxLayout->addWidget(button4);
}

void CentralButtonWidget::generateButtons()
{
    button1 = new QPushButton(tr("Button 1"), this);
    button2 = new QPushButton(tr("Button 2"), this);
    button3 = new QPushButton(tr("Button 3"), this);
    button4 = new QPushButton(tr("Button 4"), this);
}
