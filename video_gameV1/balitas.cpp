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
     QList<QGraphicsItem *> colliding_items = collidingItems();
//     for(int i=0,n=colliding_items.size();i<n;i++){
//         if(typeid (*(colliding_items[i]))==typeid (Player)){
        /*if (collidesWithItem(game->rects.at(game->jugador))){
             game->health->decrease(false);
             if(game->Numj == 2 && game->health->getHealth() == 0){
                 game->rects[0]->setVisible(false);
                 //Game over
                 game->rects[1]->setVisible(true);
                 game->jugador = 1;
                 game->health->health = 100;
                 game->health->setPos(50,200);
                 game->startlevel();

             }
             else if(game->Numj == 1 && game->health->getHealth() == 0 ){
                 game->rects[0]->setVisible(false);
                 //Game over
             }*/
             //scene()->removeItem(colliding_items[i]);
             //scene()->removeItem(this);
             //delete colliding_items[i];
             //delete this;
        //}
        // }
   //  }
     setPos(x()-5,y());
     if(collidesWithItem(game->rects.at(game->jugador))){
         game->health->decrease(false);
         scene()->removeItem(this);
         delete this;
         if(game->health->getHealth() == 0){
             if(game->Numj == 2){
                 game->ScoreActual[game->jugador] = game->score->getScore();
                 if(game->jugador == 0){
                     game->rects[game->jugador]->setVisible(false);
                     game->jugador = 1;
                     game->rects[game->jugador]->setVisible(true);
                 }
                 else{
                     game->rects[game->jugador]->setVisible(false);
                     game->jugador = 0;
                     game->rects[game->jugador]->setVisible(true);
                     game->level = game->level + 1;
                 }
                 game->startlevel();
             }
             else{
                 game->level = game->level + 1;
                 game->ScoreActual[game->jugador] = game->score->getScore();
                 game->startlevel();
             }
         }
     }
     else if (pos().x()<6300){
         scene()->removeItem(this);
         delete this;
         //qDebug()<<"Bullet delete";
     }
}
