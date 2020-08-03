#ifndef BALITAS_H
#define BALITAS_H

#include <QGraphicsPixmapItem>


class Balitas: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Balitas(QGraphicsItem *parent = 0);

public slots:
   void move();
};
#endif // BALITAS_H
