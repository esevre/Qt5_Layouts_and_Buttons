//
// Created by Erik Sevre on 11/13/18.
//

#pragma once

#include <QWidget>
#include <QPushButton>

#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGridLayout>


class CentralButtonWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CentralButtonWidget(QWidget *parent = nullptr);

public slots:
    void button1Pressed();
    void button2Pressed();
    void button3Pressed();
    void button4Pressed();

private:
    QGridLayout *gridLayout;
    QHBoxLayout *hBoxLayout;
    QVBoxLayout *vBoxLayout;

    QPushButton *button1;
    QPushButton *button2;
    QPushButton *button3;
    QPushButton *button4;

    void generateButtons();

    void setupHBoxLayout();
    void generateVBoxLayout();
    void generateGridLayout();
};


