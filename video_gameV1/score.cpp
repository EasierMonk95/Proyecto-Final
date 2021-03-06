#include "score.h"
#include <QFont>

Score::Score(QGraphicsItem *parent): QGraphicsTextItem(parent)
{
    score = 0;        //Se inicializa en 0 el puntaje

    setPlainText(QString("Puntaje: ")+QString::number(score)); //Se coloca el texto para ver el puntaje inicial
    setDefaultTextColor(Qt::black);
    setFont(QFont("times",16));


}

void Score::increase(short level, bool Boss){

    if (level==1){      //Dependiendo del nivel el puntaje cambia
        score++;
        if (Boss){
            score+=10;
        }
    }
    else if (level==2){
        score+=3;
        if (Boss){
            score+=15;
        }
    }
    else if (level==3){
        score+=5;
        if (Boss){
            score+=20;
        }
    }
    else if (level==4){
        score+=7;
        if (Boss){
            score+=25;
        }
    }


    setPlainText(QString("Puntaje: ")+QString::number(score)); //Cada vez que aumente el puntaje se vera en pantalla

}

int Score::getScore(){
    return score;
}

void Score::setScore(int Newscore){
    score = Newscore;
    setPlainText(QString("Puntaje: ")+QString::number(score));
}
