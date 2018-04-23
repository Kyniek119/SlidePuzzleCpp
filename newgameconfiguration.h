#ifndef NEWGAMECONFIGURATION_H
#define NEWGAMECONFIGURATION_H

#include <QDialog>

namespace Ui {
class NewGameConfiguration;
}

class NewGameConfiguration : public QDialog
{
    Q_OBJECT

public:
    explicit NewGameConfiguration(QWidget *parent = 0);
    ~NewGameConfiguration();

private:
    Ui::NewGameConfiguration *ui;
};

#endif // NEWGAMECONFIGURATION_H
