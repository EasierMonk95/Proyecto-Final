#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QKeyEvent>
#include <QTimer>

class Player: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Player(short color);//, QGraphicsItem *parent =0);
    //void keyPressEvent(QKeyEvent *event);
    void pintura(short movimiento, bool side);
    void posicion();       
    void pinturaAttack(short movimiento, bool side);

private:
    short personaje;
    bool side=true;
    //short movimiento;

};

#endif // PLAYER_H
