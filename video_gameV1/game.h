#ifndef GAME_H
#define GAME_H
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QObject>
#include <QWidget>
#include "player.h"
#include "enemym1.h"



class Game: public QGraphicsView
{
public:
    Game(QWidget *parent = 0);
    QGraphicsScene *scene;
    Player * player1;
    Player * player2;
    EnemyM1 *Enemy;

private:
    short level=0;
};

#endif // GAME_H
