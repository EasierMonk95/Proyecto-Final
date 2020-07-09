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
