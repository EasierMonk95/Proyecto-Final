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
#include "health.h"
#include <QGraphicsPixmapItem>


class Game: public QGraphicsView
{
public:
    Game(bool ban,QWidget *parent = 0);                         //Clase principal del juego la cual conecta todos las demas clases y hace funcionar el juego

//    Player * player1;
//    Player * player2;
    EnemyM1 *Enemy;
    QList <Player *> rects;
    void keyPressEvent(QKeyEvent *event);
    Score *score;
    Health *health;

    EnemyM1 *enemigo;
    int posicionActualX();
    int posicionActualY();

private:
    short level=0;
    short jugador;
    short cambiacion=1;
    bool right = true;
    bool cercaX=false;
    bool cercaY=false;
    QGraphicsView * view = new QGraphicsView(this);
    QGraphicsScene *scene = new QGraphicsScene(this);
};

#endif // GAME_H
