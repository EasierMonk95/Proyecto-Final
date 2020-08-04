#include "boss.h"
#include "balitas.h"
#include "game.h"
#include <QDebug>

extern Game *game;

Boss::Boss(short level)
{
    img = 0;
    nivel = level;
//      if (level == 1){
//          pintura(1);
//      }
//      else if (level == 2){
//          pintura(2);
//      }
//      else if (level == 3){
//          pintura(3);
//      }
      Boss_pos();
      TimerY = new QTimer;
      TimerY->stop();
      connect(TimerY, SIGNAL(timeout()),this,SLOT(MoverY()));
      TimerY->start(50);

      TimeBull = new QTimer;
      TimeBull->stop();
      connect(TimeBull, SIGNAL(timeout()),this,SLOT(Lanzar_bullet()));
      TimeBull->start(2000);
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
        if (img == 0){
            setPixmap(QPixmap(":/personajes/Jefe2/Jefe2_V1.png"));
            img = 1;
        }
        else if (img == 1){
            setPixmap(QPixmap(":/personajes/Jefe2/Jefe2_V2.png"));
            img = 0;
        }
    }
    else if (nivel == 3){

    }
}


void Boss::Boss_pos(){
    setPos(6650,400);
}

void Boss::MoverY(){
    PosY = game->posicionActualY();

    if (pos().y()<PosY && cercaY==false) {
        if(pos().y()<700)setPos(x(),y()+4);
        pintura(nivel);        
    }

    else if (pos().y()>PosY && cercaY==false) {
        if(pos().y()>500)setPos(x(),y()-4);
        pintura(nivel);
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
    if(collidesWithItem(game->rects.at(game->jugador))){
        if(game->collidesAttack){
            game->collidesAttack = false;
            game->health_boss->decrease(false);
            game->score->increase(game->level, true);
            if(game->health_boss->getHealth() == 0){
                delete this;
                qDebug()<<"Boss: "<<game->jugador<< " "<<game->Numj;
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
    }
}

void Boss::Lanzar_bullet(){
    Balitas *bullet = new Balitas();
    bullet->setPos(x(),y()+50);
    scene()->addItem(bullet);
}
