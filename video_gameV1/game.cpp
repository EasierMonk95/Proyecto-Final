#include "game.h"
#include <QGraphicsView>
#include <QTimer>
#include <QObject>

Game::Game(QWidget * parent)
{
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,7000,750);
    if (level==0){
        setBackgroundBrush(QBrush(QImage(":/escenario/selvaV2.png")));
    }
    else if (level==1){
        //setBackgroundBrush(QBrush(QImage("")));
    }
    else if (level==2){
        //setBackgroundBrush(QBrush(QImage("")));
    }
    setScene(scene);


    player1 = new Player(0);
//    if (botton ==2){
//        player2 = new Player (1);
//    }
    scene->addItem(player1);

    player1->setFlag(QGraphicsItem::ItemIsFocusable);
    player1->setFocus();

    player1->setPos(60,600);


}
