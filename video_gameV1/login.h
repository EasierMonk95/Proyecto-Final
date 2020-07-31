#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "game.h"

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:                                                             //QDialog que muestra el menu de inicio o login
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_J1_clicked();

    void on_J2_clicked();

    void on_NewGame_clicked();

    void on_LoadGame_clicked();

private:
    Ui::Login *ui;
    Game *games;
};

#endif // LOGIN_H
