#include "enemym1.h"
#include <QDebug>

extern Game *game;
extern Health *salud;
extern Player *player;

EnemyM1::EnemyM1(int Fi)
{        
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

    if(pos().x()>posX && cercaX==false){
        setPos(x()-3,y());
        SetImg();
        if(collidesWithItem(game->rects.at(0)) ){//|| collidesWithItem(game->rects.at(1))
            game->health->decrease(false);
            setPos(x()+40,y());
        }

    }    

    else if(pos().x()<posX && cercaX==false){
        setPos(x()+3,y());
        SetImg();
        if(this->collidesWithItem(game->rects.at(0))){// || collidesWithItem(game->rects.at(1))
            game->health->decrease(false);
            setPos(x()-40,y());
        }
    }

   /* else if(pos().x()-posX<6 || posX-pos().x()<6){
        cercaX=true;
        //game->collidesE();

    }*/

   /* else if(pos().x()-posX>6 || posX-pos().x()>6){
        cercaX=false;
    }*/



}

void EnemyM1::moverY(){

    posY = game->posicionActualY();

    if (pos().y()<posY && cercaY==false) {
        setPos(x(),y()+4);        
    }

    else if (pos().y()>posY && cercaY==false) {
        setPos(x(),y()-4);        
    }
    else if(pos().y()-posY>4){
        setPos(x(),y()-1);
        }
    else if(posY-pos().y()<4){
        setPos(x(),y()+1);
        }

    else if (pos().y()-posY!=0) {
        cercaY=false;
    }

    else if(pos().y()-posY==0){
        cercaY=true;
    }

}

void EnemyM1::SetImg(){
   // qDebug()<<F<<" "<<Img;
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
    a->setTransformOriginPoint(30,30);
    return a->pos().x();
}

int Game::posicionActualY(){
    Player *a = rects.at(jugador);
    a->setTransformOriginPoint(30,30);
    return a->pos().y();
}


