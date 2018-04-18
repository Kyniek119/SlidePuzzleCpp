#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QGraphicsView>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    QGraphicsView * getBoardView();
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_StartNewGame_button_clicked();

    void on_Exit_button_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
