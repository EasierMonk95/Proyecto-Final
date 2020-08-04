#ifndef GAME_H
#define GAME_H
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QWidget>
#include <QTimer>
#include <QDebug>
#include "player.h"
#include "enemym1.h"
#include "score.h"
#include "health.h"
#include "boss.h"
#include <QString>
#include <iostream>
#include <fstream>
#include <string>
#include <QRect>

using namespace std;




class Game: public QGraphicsView
{
public:
    Game(bool ban,int Nj,QWidget *parent = 0);

    QList <Player *> rects;    

    QList <QGraphicsPixmapItem *> enemigo;
    QList <QGraphicsPixmapItem *> boss;
    void keyPressEvent(QKeyEvent *event);
    //void keyReleaseEvent(QKeyEvent *event);
    void startlevel();
    int posicionActualX();
    int posicionActualY();
    bool collidesAttack;
    int Numj;
    Score *score;
    Health *health;
    Health *health_boss;
    short jugador;
    short level;
    int ScoreActual[2];
    void write_File();
    void Read_File();

private:    
    short cambiacion=1;
    int cambio =1;
    int max;
    bool right = true;
    bool cercaX=false;
    bool cercaY=false;
    QGraphicsView * view = new QGraphicsView(this);
    QGraphicsScene *scene = new QGraphicsScene(this);       
};

#endif // GAME_H
