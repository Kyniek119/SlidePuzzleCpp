#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "puzzle.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionSolve_triggered()
{
    Position position;
    Puzzle puzzle(1, position);
    ui->label->setText(puzzle.getName());
}
