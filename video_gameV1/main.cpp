#include <QApplication>
#include "game.h"
#include "player.h"
#include "login.h"


Login *log;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    log= new Login();           //Se abre primero una interfaz de login en la cual se podra elegir si va ser un juego nuevo
    log->show();                  //O cargar la partida anteriormente jugada, al igual que se elegira si se jugara a un jugador
//    log->close();                //O dos jugadores

    return a.exec();
}
