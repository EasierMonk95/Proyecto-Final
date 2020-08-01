#include "game.h"
#include <QGraphicsView>
#include <QTimer>
#include <QObject>

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
    view->resize(800,800);
    this->resize(800,800);

    if (ban==false){
        rects.push_back(new Player(jugador=0));
        scene->addItem(rects.back());

    }
    else{
        rects.push_back(new Player(jugador=1));
        scene->addItem(rects.back());
    }


    view->  centerOn(rects.at(0)->x(),rects.at(0)->y());    
    max = rand()% 30 +5;
    //enemigo = new EnemyM1 *[max] ;
    enemigo = new QGraphicsPixmapItem *[max] ;
    F= new int[max];
    int px, py, i;
    for(i=0;i<max;i++){
        F[i] = rand()% 2+1;
        enemigo[i]= new EnemyM1(F[i]);
    }
    for (i=0;i<max;i++) {
        py = rand()% 716+550;
        px = rand()% 6200+500;
        scene->addItem(enemigo[i]);
        enemigo[i]->setPos(px,py);

    }


}
