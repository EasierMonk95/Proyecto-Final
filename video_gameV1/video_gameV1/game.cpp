#include "game.h"
#include <QGraphicsView>
#include <QTimer>
#include <QObject>

Game::Game(bool ban,QWidget * parent)
{
    img=0;
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

    if (ban==false){
        rects.push_back(new Player(jugador=0));
        scene->addItem(rects.back());

    }
    else{
        rects.push_back(new Player(jugador=1));
        scene->addItem(rects.back());
    }


    view->centerOn(rects.at(0)->x(),rects.at(0)->y());


}
