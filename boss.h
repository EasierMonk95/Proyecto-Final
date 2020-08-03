#ifndef BOSS_H
#define BOSS_H

#include "game.h"
#include <QGraphicsPixmapItem>
#include <QTimer>
#include <QObject>


class Boss: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Boss(short level);
    void pintura(short nivel);
    void Boss_pos();
    QTimer *TimerY;
    QTimer *TimeBull;
    QTimer *TimeArrow;

private:
    short nivel;
    short img;
    int PosY;
    bool cercaY=false;
    bool cuchi = true;


private slots:
    void MoverY();
    void Lanzar_bullet();
    void lanzar_arrow();
};


#endif // BOSS_H
