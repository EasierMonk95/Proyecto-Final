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
#include "score.h"
#include "health.h"
#include "boss.h"
#include "bolin_fisica.h"
#include "flechas_fisica2.h"

#include <QString>
#include <iostream>
#include <fstream>
#include <string>


using namespace std;

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
    Score *score;
    Health *health;
    Health *health_boss;
    short jugador;
    QGraphicsPixmapItem *bola;
    QGraphicsPixmapItem *boss;
    QGraphicsPixmapItem *flechita;

     void Read_File();
     void write_File();

private:
    short level=0;   
    short cambiacion=1;
    int max;
    bool right = true;
    bool cercaX=false;
    bool cercaY=false;
    QGraphicsView * view = new QGraphicsView(this);
    QGraphicsScene *scene = new QGraphicsScene(this);       
};

#endif // GAME_H
