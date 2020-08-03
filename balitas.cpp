#include "balitas.h"
#include <QTimer>
#include <QtDebug>
#include "game.h"
#include "enemym1.h"
#include "player.h"

extern Game *game;

Balitas::Balitas(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem()
{
    setPixmap(QPixmap(":/Cuchillos/Balas/Bala_V1.png").scaled(50,50));

    QTimer *timer =  new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);

}

void Balitas::move(){
        if (collidesWithItem(game->rects.at(0))){
             game->health->decrease(false);
             //scene()->removeItem(colliding_items[i]);
             scene()->removeItem(this);
             //delete colliding_items[i];
             delete this;
        }
        // }
   //  }
     setPos(x()-5,y());
     if (pos().x()<6300){
         scene()->removeItem(this);
         delete this;
         qDebug()<<"Bullet delete";
     }
}
