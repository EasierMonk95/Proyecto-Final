#ifndef ENEMYM1_H
#define ENEMYM1_H
#include <QGraphicsPixmapItem>
#include <QObject>



class EnemyM1: public QObject, public QGraphicsPixmapItem
{
public:
    EnemyM1(short type, short move);
};

#endif // ENEMYM1_H
