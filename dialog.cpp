#include "dialog.h"
#include "ui_dialog.h"
#include <QDebug>

QGraphicsView* Dialog::getBoardView(){
    return ui->BoardView;
}

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_StartNewGame_button_clicked()
{

}

void Dialog::on_Exit_button_clicked(){
    qDebug() << "Przycisk dziala.";
    //TO DO window to save progress or exit without saving
    this->close();
}
