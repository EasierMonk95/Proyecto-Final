#include "login.h"
#include "ui_login.h"
#include "game.h"

Game *game;
Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_J1_clicked()
{
    game= new Game(false);
    game->show();
}

void Login::on_J2_clicked()
{
    game = new Game(true);
    game->show();
}
