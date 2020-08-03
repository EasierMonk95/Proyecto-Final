#ifndef BOLIN_FISICA_H
#define BOLIN_FISICA_H
#include <QTimer>
#include "game.h"
#include "player.h"
#include <QGraphicsPixmapItem>

class Bolin_fisica: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Bolin_fisica();

private:
    QTimer *timer;
    double x, y, vx, vy, T=0.01, a=-9.8, yo;

private slots:
    void mover();

public:
    void Posicion();

};

#endif // BOLIN_FISICA_H
