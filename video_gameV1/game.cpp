#include "game.h"
#include <QGraphicsView>
#include <QTimer>
#include <QObject>

Game::Game(QWidget * parent)
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

    //player1 = new Player(0);
//    if (botton ==2){
//        player2 = new Player (1);
//    }
    //scene->addItem(player1);

    //player1->setPos(60,600);
    //view->centerOn(player1);
    rects.push_back(new Player(0));
    scene->addItem(rects.back());

//    if(botton==1){
//        rects.push_back(new Player(1));
//        scene->addItem(rects.back());
//    }

    view->centerOn(rects.at(0)->x(),rects.at(0)->y());


}
