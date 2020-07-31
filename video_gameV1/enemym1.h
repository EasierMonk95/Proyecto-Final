#ifndef ENEMYM1_H
#define ENEMYM1_H

#include <QTimer>
#include <QObject>
#include <QGraphicsPixmapItem>
#include <QList>
#include "player.h"


class EnemyM1: public QObject , public QGraphicsPixmapItem
{

Q_OBJECT

public:                                                     //Clase que sirve para graficar y hacer funcionar a los enemigos
    EnemyM1();
    QList<Player *> rects;

    QTimer *TimerX;
    QTimer *TimerY;
    void pintura();

private:
    bool cercaX = false;
    bool cercaY = false;
    int posX;
    int posY;

private slots:
    void moverX();
    void moverY();

};




#endif // ENEMYM1_H
