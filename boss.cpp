#include "boss.h"
#include "balitas.h"
#include "flechas_fisica2.h"
#include "game.h"

extern Game *game;

Boss::Boss(short level)
{
    img = 0;
    nivel = level;

      Boss_pos();
      TimerY = new QTimer;
      TimerY->stop();
      connect(TimerY, SIGNAL(timeout()),this,SLOT(MoverY()));
      TimerY->start(50);

      TimeBull = new QTimer;
      TimeBull->stop();
//      if (cuchi == true){
          connect(TimeBull, SIGNAL(timeout()),this,SLOT(Lanzar_bullet()));
          TimeBull->start(2000);
     // }
//      if (game->health_boss == 0){
//          delete this;
//      }

      TimeArrow = new QTimer;
      TimeArrow->stop();
      connect(TimeArrow,SIGNAL(timeout()),this,SLOT(lanzar_arrow()));
      TimeArrow->start(500);
}

void Boss::pintura(short nivel){
    if (nivel == 1){
        if (img == 0){
            setPixmap(QPixmap(":/personajes/Jefe1/Jefe1_V1.png"));
            img = 1;
        }
        else if (img == 1){
            setPixmap(QPixmap(":/personajes/Jefe1/Jefe1_V2.png"));
            img = 0;
        }
    }
    else if (nivel == 2){

    }
    else if (nivel == 3){

    }
}


void Boss::Boss_pos(){
    setPos(6550,400);
}

void Boss::MoverY(){
    PosY = game->posicionActualY();

    if (pos().y()<PosY && cercaY==false) {
        setPos(x(),y()+4);
        pintura(nivel);
        if(collidesWithItem(game->rects.at(0)) ){//|| collidesWithItem(game->rects.at(1))
            game->health_boss->decrease(true);
        }
//        Balitas *bullet =new Balitas();
//        bullet->setPos(x()+50,y());
//        scene()->addItem(bullet);

    }

    else if (pos().y()>PosY && cercaY==false) {
        setPos(x(),y()-4);
        pintura(nivel);
        if(collidesWithItem(game->rects.at(0)) ){//|| collidesWithItem(game->rects.at(1))
            game->health_boss->decrease(true);
        }
//         Balitas *bullet =new Balitas();
//         bullet->setPos(x()+50,y());
//         scene()->addItem(bullet);
    }
    else if(pos().y()-PosY>4){
        setPos(x(),y()-1);
        pintura(nivel);
        }
    else if(PosY-pos().y()<4){
        setPos(x(),y()+1);
        pintura(nivel);
        }

    else if (pos().y()-PosY!=0) {
        cercaY=false;
    }

    else if(pos().y()-PosY==0){
        cercaY=true;
    }

}

void Boss::Lanzar_bullet(){
    Balitas *bullet = new Balitas();
    bullet->setPos(x(),y()+50);
    scene()->addItem(bullet);
}

void Boss::lanzar_arrow(){
    Flechas_fisica2 *flechita = new Flechas_fisica2();
    scene()->addItem(flechita);
}
