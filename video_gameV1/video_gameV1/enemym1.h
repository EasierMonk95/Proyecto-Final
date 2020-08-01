#ifndef ENEMYM1_H
#define ENEMYM1_H

#include <QTimer>
#include <QObject>
#include <QGraphicsPixmapItem>
#include <QList>
#include "player.h"
#include "game.h"


class EnemyM1: public QObject, public QGraphicsPixmapItem
{

Q_OBJECT

public:
    EnemyM1(int Fi);
    QList<Player *> rects;    
    QTimer *TimerX;
    QTimer *TimerY;
    QTimer *set;
    void SetImg();
    //void collidesE();

private:
    bool cercaX=false;
    bool cercaY=false;
    int posX;
    int posY;
    int Img;
    int F;


private slots:
    void moverX();
    void moverY();


};




#endif // ENEMYM1_H
