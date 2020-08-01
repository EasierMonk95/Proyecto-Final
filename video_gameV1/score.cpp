#include "score.h"
#include <QFont>

Score::Score(QGraphicsItem *parent): QGraphicsTextItem(parent)
{
    score = 0;        //Se inicializa en 0 el puntaje

    setPlainText(QString("Puntaje: ")+QString::number(score)); //Se coloca el texto para ver el puntaje inicial
    setDefaultTextColor(Qt::black);
    setFont(QFont("times",16));


}

void Score::increase(short level){

    if (level==0){      //Dependiendo del nivel el puntaje cambia
        score++;
    }
    else if (level==1){
        score+=3;
    }
    else if (level==2){
        score+=5;
    }

    setPlainText(QString("Puntaje: ")+QString::number(score)); //Cada vez que aumente el puntaje se vera en pantalla

}

int Score::getScore(){
    return score;
}
