#ifndef FLECHAS_FISICA2_H
#define FLECHAS_FISICA2_H

#include <game.h>
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QTimer>


class Flechas_fisica2: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Flechas_fisica2();
    QTimer *Timer;

private slots:
    void moved();

private:
    double x, y, vy, a = -9.8, T=0.01, yo;

public:
    void Posicion();

};

#endif // FLECHAS_FISICA2_H
