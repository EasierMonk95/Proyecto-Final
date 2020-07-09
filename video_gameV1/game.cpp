#include "game.h"
#include <QGraphicsView>
#include <QTimer>
#include <QObject>

Game::Game(QWidget * parent)
{
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,7000,750);
    setBackgroundBrush(QBrush(QImage(":/escenario/selvaV2.png")));
    setScene(scene);


    player1 = new Player(0);
//    if (botton ==2){
//        player2 = new Player (1);
//    }
}