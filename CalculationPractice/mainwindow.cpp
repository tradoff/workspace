#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "equation.h"
#include "calculatecontroller.h"

typedef int template_t;

Equation<template_t> eq;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setQuestion();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setQuestion()
{
    ui->answer1LineEdit->clear();
    ui->answer2LineEdit->clear();

    CalculateController::randomEquation(eq);
    ui->questionLabel->setText(tr(eq.toString().c_str()));
}

void MainWindow::on_submitButton_clicked()
{
    Answer<template_t> answer(ui->answer1LineEdit->text().toInt(), ui->answer2LineEdit->text().toInt());
    if(CalculateController::checkAnswer(eq, answer))
    {
        ui->resultLabel->setText(tr("<font color='green'>True</font>"));
        setQuestion();
    }
    else
    {
        ui->resultLabel->setText(tr("<font color='red'>False</font>"));
    }
}

void MainWindow::on_skipButton_clicked()
{
    setQuestion();
}

void MainWindow::on_quitButton_clicked()
{
    exit(0);
}
