#include "login.h"
#include "ui_login.h"
#include "game.h"

Game *game;
Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);              //Ventana de login en la cual se elegira un nuevo juego o un juego cargado
    ui->J1->setEnabled(false);      //Un jugador o dos jugadores
    ui->J1->setVisible(false);
    ui->J2->setEnabled(false);
    ui->J2->setVisible(false);
}

Login::~Login()
{
    delete ui;
}

void Login::on_J1_clicked()
{
    game= new Game(false, 1);
    game->show();
    close();
}

void Login::on_J2_clicked()
{
    game = new Game(true, 2);
    game->show();
    close();
}

void Login::on_NewGame_clicked()
{
    ui->J1->setVisible(true);                   //Funcion para elegir un juego nuevo, y activa los botones para elegir el modo un jugador
    ui->J1->setEnabled(true);                   //O dos jugadores
    ui->J2->setVisible(true);
    ui->J2->setEnabled(true);
    ui->NewGame->setVisible(false);     //se desactiva la visibilidad y el funcionamiento de los botones new game y load game
    ui->NewGame->setEnabled(false);
    ui->LoadGame->setVisible(false);
    ui->LoadGame->setEnabled(false);
}

void Login::on_LoadGame_clicked()
{
    close();
}
