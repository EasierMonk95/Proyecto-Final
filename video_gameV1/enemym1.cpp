#include "enemym1.h"
#include <QTimer>

EnemyM1::EnemyM1(short type, short move)
{
//    QTimer *timer = new QTimer();
//    timer->start(1000);

    if (type == 0){
        if (move == 0){
            setPixmap(QPixmap(":/personajes/Sprites_Enemy1/enemyM1V1.png"));
            move = 1;
        }
        else if (move == 1 ){
            setPixmap(QPixmap(":/personajes/Sprites_Enemy1/enemyM1V2.png"));
            move = 0;
        }
        else if (move == 2){
            setPixmap(QPixmap(":/personajes/Sprites_Enemy1/enemyM1V3.png"));
        }
        else if (move == 3){
            setPixmap(QPixmap(":/personajes/Sprites_Enemy1/enemyM1ATK1.png"));
        }
    }

    else if (type == 1){
        if (move == 0){
            setPixmap(QPixmap(":/personajes/Sprites_Enemy2/enemyM2V1.png"));
        }
        else if (move == 1){
             setPixmap(QPixmap(":/personajes/Sprites_Enemy2/enemyM2V2.png"));
        }
        else if (move == 2){
             setPixmap(QPixmap(":/personajes/Sprites_Enemy2/enemyM2V1AT1.png"));
        }
        else if (move == 3){
            setPixmap(QPixmap(":/personajes/Sprites_Enemy2/enemyM2V1AT2.png"));
        }
        else if (move == 4){
            setPixmap(QPixmap(":/personajes/Sprites_Enemy2/enemyM2V1H1.png"));
        }
        else if (move == 5){
             setPixmap(QPixmap(":/personajes/Sprites_Enemy3/enemyM3V4.png"));
        }
    }

    else if (type == 2){

    }

    else if (type == 3){

    }

    else if (type == 4){

    }

    else if (type == 5){

    }

    else if (type == 6){

    }
}
