#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QKeyEvent>

class Player: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Player(short color, QGraphicsItem *parent =0);
    void keyPressEvent(QKeyEvent *event);
};

#endif // PLAYER_H
