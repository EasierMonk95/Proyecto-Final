#include "bolin_fisica.h"

extern Game *game;

Bolin_fisica::Bolin_fisica()
{
    setPixmap(QPixmap(":/Bolita/Bolitas/Bolation.png"));
    x = game->posicionActualX();
    y = game->posicionActualY();
    yo = y;
    vx = 70;
    vy = 60;

    Posicion();
    timer = new QTimer;
    //timer->stop();
    connect(timer,SIGNAL(timeout()),this,SLOT(mover()));
    timer->start(int (T*500));
}

void Bolin_fisica::mover()
{
    double yd;

    vy+=(a*T);
    x+=(vx*T);
    y-=vy*T-(a/2)*(T*T);
    yd=2*yo-y;

    Posicion();
    if (pos().y()>=700){
        float B = 0.5;
        vx *= (1-B);
        vy *= (B-1);
        if (vy <= 0.1){
            scene()->removeItem(this);
            delete this;

        }

    }
}

void Bolin_fisica::Posicion(){
    setPos(x,y);
}
