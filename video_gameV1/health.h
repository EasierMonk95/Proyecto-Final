#ifndef HEALTH_H
#define HEALTH_H

#include <QGraphicsTextItem>
#include <QGraphicsPixmapItem>

class Health: public QGraphicsPixmapItem
{
public:                                                         //Clase para determinar la vida del jugador
    Health();
    void decrease(bool More_damage);
    int getHealth();
    void Barra();

private:
    int health;
};

#endif // HEALTH_H
