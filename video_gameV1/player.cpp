#include "player.h"
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include "game.h"

extern Game *game;

Player::Player(short color)//, QGraphicsItem *parent): QGraphicsPixmapItem()
{
    personaje = color;
    pintura();
    posicion();
    QKeyEvent(event());
}

void Game::keyPressEvent(QKeyEvent *event){
    Player * a = rects.at(0);
    Player * b = rects.at(1);
    if (rects.size()==1){
        if(event->key() == Qt::Key_W){
            a->setPos(a->x(),a->y()-10);
            view->centerOn(a->x(),a->y());
        }
        if(event->key() == Qt::Key_S){
            a->setPos(a->x(),a->y()+10);
            view->centerOn(a->x(),a->y());
        }
        if(event->key() == Qt::Key_A){
            a->setPos(a->x()-10,a->y());
            view->centerOn(rects.at(0)->x(),rects.at(0)->y());
        }
        if(event->key() == Qt::Key_D){
            a->setPos(a->x()+10,a->y());
            view->centerOn(a->x(),a->y());
        }
    }
    else if (rects.size()==2){

        if(event->key() == Qt::Key_W){
            a->setPos(a->x(),a->y()-10);
            view->centerOn(a->x(),a->y());
        }
        if(event->key() == Qt::Key_S){
            a->setPos(a->x(),a->y()+10);
            view->centerOn(a->x(),a->y());
        }
        if(event->key() == Qt::Key_A){
            a->setPos(a->x()-10,a->y());
            view->centerOn(rects.at(0)->x(),rects.at(0)->y());
        }
        if(event->key() == Qt::Key_D){
            a->setPos(a->x()+10,a->y());
            view->centerOn(a->x(),a->y());
        }
        if(event->key() == Qt::Key_U){
            b->setPos(b->x(),b->y()-10);
            view->centerOn(b->x(),b->y());
        }
        if(event->key() == Qt::Key_J){
            b->setPos(b->x(),b->y()+10);
            view->centerOn(b->x(),b->y());
        }
        if(event->key() == Qt::Key_H){
            b->setPos(b->x()-10,b->y());
            view->centerOn(b->x(),b->y());
        }
        if(event->key() == Qt::Key_K){
            b->setPos(b->x()+10,b->y());
            view->centerOn(b->x(),b->y());
        }
    }
}

void Player::pintura(){
    if (personaje==0){
        setPixmap(QPixmap(":/personajes/characterred.png"));
    }
    if (personaje==1){
        setPixmap(QPixmap(":/personajes/charactergreen.png"));
    }
}

void Player::posicion(){
    if (personaje==0){
        setPos(70,600);
    }
    if (personaje==1){
        setPos(80,650);
    }
}
