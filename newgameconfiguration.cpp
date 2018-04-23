#include "newgameconfiguration.h"
#include "ui_newgameconfiguration.h"

NewGameConfiguration::NewGameConfiguration(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewGameConfiguration)
{
    ui->setupUi(this);
}

NewGameConfiguration::~NewGameConfiguration()
{
    delete ui;
}
