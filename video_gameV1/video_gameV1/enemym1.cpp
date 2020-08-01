#include "enemym1.h"
#include <QDebug>

extern Game *game;

EnemyM1::EnemyM1(int Fi)
{
    //if(F==1)setPixmap(QPixmap(":/personajes/Sprites_Enemy1/enemyM1V1.png"));
    //if (F==2) setPixmap(QPixmap(":/personajes/Sprites_Enemy2/enemyM2V1.png"));
    F = Fi;
    Img = 0;
    TimerX = new QTimer;
    TimerX->stop();
    connect(TimerX, SIGNAL(timeout()),this,SLOT(moverX()));
    TimerX->start(100);
    TimerY = new QTimer;    
    TimerY->stop();
    connect(TimerY, SIGNAL(timeout()),this,SLOT(moverY()));
    TimerY->start(100);
}

void EnemyM1::moverX(){
    posX = game->posicionActualX();    
   /* qDebug()<<pos().x();
    qDebug()<<posX<<" "<<posY;*/


    if(pos().x()>posX && cercaX==false){
        setPos(x()-4,y());
        SetImg();

    }    

    else if(pos().x()<posX && cercaX==false){
        setPos(x()+4,y());
        SetImg();
    }

    else if(pos().x()-posX<6 || posX-pos().x()<6){
        cercaX=true;
        //game->collidesE();

    }

    else if(pos().x()-posX>6 || posX-pos().x()>6){
        cercaX=false;
    }



}

void EnemyM1::moverY(){

    posY = game->posicionActualY();

    if (pos().y()<posY && cercaY==false) {
        setPos(x(),y()+4);
        SetImg();
    }

    else if (pos().y()>posY && cercaY==false) {
        setPos(x(),y()-4);
        SetImg();
    }

    else if (pos().y()-posY!=0) {
        cercaY=false;
    }

    else if(pos().y()-posY==0){
        cercaY=true;
    }

}

void EnemyM1::SetImg(){
    qDebug()<<F<<" "<<Img;
    if(F==1){
        if(Img==0){
            setPixmap(QPixmap(":/personajes/Sprites_Enemy1/enemyM1V1.png"));
            Img=1;
        }
        else if(Img==1){
            setPixmap(QPixmap(":/personajes/Sprites_Enemy1/enemyM1V2.png"));
            Img=2;
        }
        else if(Img==2){
            setPixmap(QPixmap(":/personajes/Sprites_Enemy1/enemyM1V3.png"));
            Img=0;
        }
    }
    else if(F==2){
        if(Img==0){
            setPixmap(QPixmap(":/personajes/Sprites_Enemy2/enemyM2V1.png"));
            Img=1;
        }
        else if(Img==1){
            setPixmap(QPixmap(":/personajes/Sprites_Enemy2/enemyM2V2.png"));
            Img=0;
        }
    }
}

/*bool Game::collidesE(){
    if(rects.at(jugador)->collidesWithItem(Enemy)) return true;
}*/

int Game::posicionActualX(){
    Player * a = rects.at(jugador);
    return a->pos().x();
}

int Game::posicionActualY(){
    Player *a = rects.at(jugador);
    return a->pos().y();
}


