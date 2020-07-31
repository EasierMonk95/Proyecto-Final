#include "game.h"
#include <QGraphicsView>
#include <QTimer>
#include <QObject>


extern Player *papa;

Game::Game(bool ban,QWidget * parent)
{
    scene->setSceneRect(0,0,7000,750);
    if (level==0){
        scene->setBackgroundBrush(QBrush(QImage(":/escenario/selvaV2.png")));
    }
    else if (level==1){
        //scene->setBackgroundBrush(QBrush(QImage("")));
    }
    else if (level==2){
        //scene->setBackgroundBrush(QBrush(QImage("")));
    }
    setScene(scene);
    view->setScene(scene);
    view->resize(800,600);
    this->resize(800,600);

    if (ban==false){                            //En este caso se seleciono un solo jugador
        rects.push_back(new Player(0));
        scene->addItem(rects.back());
    }
    else{                                       //En este otro caso se selecciono el multijugador (dos jugadores)
        rects.push_back(new Player(1));
        scene->addItem(rects.back());
    }


    view->centerOn(rects.at(0)->x(),rects.at(0)->y());

    score = new Score();        //Se crea la variable score
    scene->addItem(score);      //Se incluye en la escena



    //Enemy = new EnemyM1();
    //scene->addItem(Enemy);
    //Enemy->setPos(500,600);


    health = new Health();
    scene->addItem(health);
    health->setPos(50,200);


    enemigo= new EnemyM1;
    scene->addItem(enemigo);
    enemigo->setPos(300,550);
}

