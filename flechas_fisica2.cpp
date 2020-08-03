#include "flechas_fisica2.h"
#include <QtDebug>
#include "game.h"

extern Game *game;

Flechas_fisica2::Flechas_fisica2()
{

    setPixmap(QPixmap(":/Cuchillos/Balas/Flecha_V1.png"));
    x = rand()%6500;
    y = rand()%30+10;
//    x = 50;
//    y = 50;
    yo = y;

    Posicion();
    Timer = new QTimer;
    connect(Timer,SIGNAL(timeout()),this,SLOT(moved()));
    Timer->start(int(T*1000));
    qDebug()<<"se crea la flecha";
}

void Flechas_fisica2::moved(){

    double yd;
    vy+=(a*T);
    y-=vy*T-(a/2)*(T*T);
    yd=2*yo-y;

    Posicion();
   if (collidesWithItem(game->rects.at(0))){
       game->health->decrease(false);
       scene()->removeItem(this);
       delete this;
   }
    if (pos().y()>700){
        Timer->stop();
        delete this;
    }

}

void Flechas_fisica2::Posicion(){
    setPos(x,y);
}
