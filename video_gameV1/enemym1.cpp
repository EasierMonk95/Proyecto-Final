#include "enemym1.h"
#include "game.h"
#include "player.h"
#include <QDebug>

extern Player *player;
extern Game *game;

EnemyM1::EnemyM1()
{
    setPixmap(QPixmap(":/Enemy/Sprites_Enemy1/enemyM1V1.png").scaled(100,100));
    TimerX = new QTimer;
    TimerX->stop();
    connect(TimerX, SIGNAL(timeout()),this,SLOT(moverX()));
    TimerX->start(50);
    TimerY = new QTimer;
    TimerY->stop();
    connect(TimerY, SIGNAL(timeout()),this,SLOT(moverY()));
    TimerY->start(50);

}

void EnemyM1::moverX(){
    posX = game->posicionActualX();
    int xx=1;
    qDebug()<<pos().x();
    qDebug()<<posX<<" "<<posY;


    if(pos().x()>posX && cercaX==false){
        setPos(x()-4,y());
    }

    else if(pos().x()<posX && cercaX==false){
        setPos(x()+4,y());
    }

    else if(pos().x()-posX<6 || posX-pos().x()<6){
        cercaX=true;
    }

    else if(pos().x()-posX>6 || posX-pos().x()>6){
        cercaX=false;
    }



}

void EnemyM1::moverY(){

    posY = game->posicionActualY();

    if (pos().y()<posY && cercaY==false) {
        setPos(x(),y()+4);
    }

    else if (pos().y()>posY && cercaY==false) {
        setPos(x(),y()-4);
    }

    else if (pos().y()-posY!=0) {
        cercaY=false;
    }

    else if(pos().y()-posY==0){
        cercaY=true;
    }

}

int Game::posicionActualX(){
    Player * a = rects.at(jugador);
    return a->pos().x();
}

int Game::posicionActualY(){
    Player *a = rects.at(jugador);
    return a->pos().y();
}

void EnemyM1::pintura()
{

}

