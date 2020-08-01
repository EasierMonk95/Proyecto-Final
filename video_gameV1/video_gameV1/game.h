#ifndef GAME_H
#define GAME_H
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QWidget>
#include <QGraphicsView>
#include "player.h"
#include "enemym1.h"



class Game: public QGraphicsView
{
public:
    Game(bool ban,QWidget *parent = 0);

    QList <Player *> rects;    

    QGraphicsPixmapItem **enemigo;
    int *F;
    void keyPressEvent(QKeyEvent *event);    
    int posicionActualX();
    int posicionActualY();
    bool collidesE();

private:
    short level=0;
    short jugador;
    short cambiacion=1;
    int max;
    bool right;
    bool cercaX=false;
    bool cercaY=false;
    QGraphicsView * view = new QGraphicsView(this);
    QGraphicsScene *scene = new QGraphicsScene(this);       
};

#endif // GAME_H
