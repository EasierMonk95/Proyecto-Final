#ifndef GAME_H
#define GAME_H
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QObject>
#include <QWidget>
#include <QGraphicsView>
#include "player.h"
#include "enemym1.h"



class Game: public QGraphicsView
{
public:
    Game(QWidget *parent = 0);

    Player * player1;
    Player * player2;
    EnemyM1 *Enemy;
    QList <Player *> rects;
    void keyPressEvent(QKeyEvent *event);

private:
    short level=0;
    QGraphicsView * view = new QGraphicsView(this);
    QGraphicsScene *scene = new QGraphicsScene(this);
};

#endif // GAME_H
