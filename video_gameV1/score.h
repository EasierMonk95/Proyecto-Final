#ifndef SCORE_H
#define SCORE_H

#include <QGraphicsItem>

class Score: public QGraphicsTextItem
{
public:                                                     //Clase que sirve para mostrar el puntaje del jugador
    Score(QGraphicsItem *parent=0);
    void increase(short level, bool Boss);
    int getScore();

private:
    int score;
};

#endif // SCORE_H
