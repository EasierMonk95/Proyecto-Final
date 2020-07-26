#ifndef SCORE_H
#define SCORE_H

#include <QGraphicsItem>

class Score: public QGraphicsTextItem
{
public:
    Score(QGraphicsItem *parent=0);
    void increase(short level, bool Boss);
    int getScore();

private:
    int score;
};

#endif // SCORE_H
