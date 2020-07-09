#include "player.h"
#include <QGraphicsScene>


Player::Player(short color, QGraphicsItem *parent): QGraphicsPixmapItem()
{
    if (color == 0) {
        setPixmap(QPixmap(":/personajes/characterred.png"));
    }
    else if (color == 1){
        setPixmap(QPixmap(":/personajes/charactergreen.png"));
    }
}

void Player::keyPressEvent(QKeyEvent *event){

    if (event->key() == Qt::Key_A){
        if (pos().x()>0){
            setPos(x()-20,y());
        }
    }
    else if (event->key() == Qt::Key_D){
        if (pos().x()<6990){
            setPos(x()+20,y());
        }
    }
    else if (event->key() == Qt::Key_S){
        if (pos().y()<740){
            setPos(x(),y()-20);
        }
    }
    else if (event->key() == Qt::Key_W){
        if (pos().y()>550){
            setPos(x(),y()+20);
        }
    }
}
