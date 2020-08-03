#include "bolin_fisica.h"

extern Game *game;

Bolin_fisica::Bolin_fisica()
{
    setPixmap(QPixmap(":/Bolita/Bolitas/Bolini.png"));
    x = game->posicionActualX();
    y = game->posicionActualY();
    yo = y;
    vx = 60;
    vy = 50;

    Posicion();
    timer = new QTimer;
    //timer->stop();
    connect(timer,SIGNAL(timeout()),this,SLOT(mover()));
    timer->start(int (T*1000));
}

void Bolin_fisica::mover()
{
    double yd;

    vy+=(a*T);
    x+=(vx*T);
    y-=vy*T-(a/2)*(T*T);
    yd=2*yo-y;

    Posicion();
    if (pos().y()>700){
        timer->stop();
        delete this;
    }
}

void Bolin_fisica::Posicion(){
    setPos(x,y);
}
