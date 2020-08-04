#ifndef HEALTH_H
#define HEALTH_H

#include <QGraphicsPixmapItem>

class Health: public QGraphicsPixmapItem
{
public:                                                         //Clase para determinar la vida del jugador
    Health();
    void decrease(bool More_damage);
    int getHealth();
    void Barra();
    int health;

/*private:
    int health;*/
};

#endif // HEALTH_H
