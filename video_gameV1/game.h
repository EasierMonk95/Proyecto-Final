#ifndef GAME_H
#define GAME_H
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QObject>
#include <QWidget>
#include <QGraphicsView>
#include "player.h"
#include "enemym1.h"
#include "score.h"
#include <QGraphicsPixmapItem>


class Game: public QGraphicsView
{
public:
    Game(bool ban,QWidget *parent = 0);

//    Player * player1;
//    Player * player2;
    EnemyM1 *Enemy;
    QList <Player *> rects;
    void keyPressEvent(QKeyEvent *event);
    Score *score;

private:
    short level=0;
    short jugador;
    short cambiacion=0;
    QGraphicsView * view = new QGraphicsView(this);
    QGraphicsScene *scene = new QGraphicsScene(this);
};

#endif // GAME_H
