#include "player.h"
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include "game.h"


extern Game *game;

Player::Player(short color)//, QGraphicsItem *parent): QGraphicsPixmapItem()
{
    personaje = color;
    pintura(0);
    posicion();
}

void Game::keyPressEvent(QKeyEvent *event){            //Funcion que sirve para poder manipular el personaje
    Player * a = rects.at(jugador);
        if(event->key() == Qt::Key_W){
            a->setPos(a->x(),a->y()-10);                                       //En ella se accede a otra funcion para poder  aparentar
            view->centerOn(a->x(),a->y());                                  //animaciones
            if (cambiacion == 0){
                a->pintura(0);
                cambiacion = 1;
            }
            else if (cambiacion == 1){
                a->pintura(1);
                cambiacion = 2;
            }
            else if (cambiacion == 2){
                a->pintura(2);
                cambiacion = 3;
            }
            else if (cambiacion == 3){
                a->pintura(3);
                cambiacion = 4;
            }
            else if (cambiacion == 4){
                a->pintura(4);
                cambiacion = 5;
            }
            else if (cambiacion == 5){
                a->pintura(5);
                cambiacion = 6;
            }
            else if (cambiacion == 6){
                a->pintura(6);
                cambiacion = 7;
            }
            else if (cambiacion == 7){
                a->pintura(7);
                cambiacion = 8;
            }
            else if (cambiacion == 8){
                a->pintura(8);
                cambiacion = 9;
            }
            else if ( cambiacion == 9){
                a->pintura(9);
                cambiacion = 10;
            }
            else if ( cambiacion == 10){
                a->pintura(10);
                cambiacion = 11;
            }
            else if ( cambiacion == 11){
                a->pintura(11);
                cambiacion = 12;
            }
            else if ( cambiacion == 12){
                a->pintura(12);
                cambiacion = 13;
            }
            else if ( cambiacion == 13){
                a->pintura(13);
                cambiacion = 14;
            }
            else if ( cambiacion == 14){
                a->pintura(14);
                cambiacion = 15;
            }
            else if ( cambiacion == 15){
                a->pintura(15);
                cambiacion = 16;
            }
            else if ( cambiacion == 16){
                a->pintura(16);
                cambiacion = 17;
            }
            else if ( cambiacion == 17){
                a->pintura(17);
                cambiacion = 18;
            }
            else if ( cambiacion == 18){
                a->pintura(18);
                cambiacion = 19;
            }
            else if ( cambiacion == 19){
                a->pintura(19);
                cambiacion = 0;
            }
        }
        if(event->key() == Qt::Key_S){
            a->setPos(a->x(),a->y()+10);
            view->centerOn(a->x(),a->y());
            if (cambiacion == 0){
                a->pintura(0);
                cambiacion = 1;
            }
            else if (cambiacion == 1){
                a->pintura(1);
                cambiacion = 2;
            }
            else if (cambiacion == 2){
                a->pintura(2);
                cambiacion = 3;
            }
            else if (cambiacion == 3){
                a->pintura(3);
                cambiacion = 4;
            }
            else if (cambiacion == 4){
                a->pintura(4);
                cambiacion = 5;
            }
            else if (cambiacion == 5){
                a->pintura(5);
                cambiacion = 6;
            }
            else if (cambiacion == 6){
                a->pintura(6);
                cambiacion = 7;
            }
            else if (cambiacion == 7){
                a->pintura(7);
                cambiacion = 8;
            }
            else if (cambiacion == 8){
                a->pintura(8);
                cambiacion = 9;
            }
            else if ( cambiacion == 9){
                a->pintura(9);
                cambiacion = 10;
            }
            else if ( cambiacion == 10){
                a->pintura(10);
                cambiacion = 11;
            }
            else if ( cambiacion == 11){
                a->pintura(11);
                cambiacion = 12;
            }
            else if ( cambiacion == 12){
                a->pintura(12);
                cambiacion = 13;
            }
            else if ( cambiacion == 13){
                a->pintura(13);
                cambiacion = 14;
            }
            else if ( cambiacion == 14){
                a->pintura(14);
                cambiacion = 15;
            }
            else if ( cambiacion == 15){
                a->pintura(15);
                cambiacion = 16;
            }
            else if ( cambiacion == 16){
                a->pintura(16);
                cambiacion = 17;
            }
            else if ( cambiacion == 17){
                a->pintura(17);
                cambiacion = 18;
            }
            else if ( cambiacion == 18){
                a->pintura(18);
                cambiacion = 19;
            }
            else if ( cambiacion == 19){
                a->pintura(19);
                cambiacion = 0;
            }
        }
        if(event->key() == Qt::Key_A){
            a->setPos(a->x()-10,a->y());
            view->centerOn(rects.at(0)->x(),rects.at(0)->y());
            a->pintura(1);
        }
        if(event->key() == Qt::Key_D){
            a->setPos(a->x()+10,a->y());
            view->centerOn(a->x(),a->y());
            if (cambiacion == 0){
                a->pintura(0);
                cambiacion = 1;
            }
            else if (cambiacion == 1){
                a->pintura(1);
                cambiacion = 2;
            }
            else if (cambiacion == 2){
                a->pintura(2);
                cambiacion = 3;
            }
            else if (cambiacion == 3){
                a->pintura(3);
                cambiacion = 4;
            }
            else if (cambiacion == 4){
                a->pintura(4);
                cambiacion = 5;
            }
            else if (cambiacion == 5){
                a->pintura(5);
                cambiacion = 6;
            }
            else if (cambiacion == 6){
                a->pintura(6);
                cambiacion = 7;
            }
            else if (cambiacion == 7){
                a->pintura(7);
                cambiacion = 8;
            }
            else if (cambiacion == 8){
                a->pintura(8);
                cambiacion = 9;
            }
            else if ( cambiacion == 9){
                a->pintura(9);
                cambiacion = 10;
            }
            else if ( cambiacion == 10){
                a->pintura(10);
                cambiacion = 11;
            }
            else if ( cambiacion == 11){
                a->pintura(11);
                cambiacion = 12;
            }
            else if ( cambiacion == 12){
                a->pintura(12);
                cambiacion = 13;
            }
            else if ( cambiacion == 13){
                a->pintura(13);
                cambiacion = 14;
            }
            else if ( cambiacion == 14){
                a->pintura(14);
                cambiacion = 15;
            }
            else if ( cambiacion == 15){
                a->pintura(15);
                cambiacion = 16;
            }
            else if ( cambiacion == 16){
                a->pintura(16);
                cambiacion = 17;
            }
            else if ( cambiacion == 17){
                a->pintura(17);
                cambiacion = 18;
            }
            else if ( cambiacion == 18){
                a->pintura(18);
                cambiacion = 19;
            }
            else if ( cambiacion == 19){
                a->pintura(19);
                cambiacion = 0;
            }
    }

}

void Player::pintura(short movimiento){                //Fucion que sirve para ir cambiando de imagenes y aparentar un tipo de animacion
    if (personaje==0){                                                     //Tanto para el jugador 1 como para el jugador 2
           if (movimiento == 0){
            setPixmap(QPixmap(":/personajes/Sprites_p1/characterred.png"));
        }
           else if (movimiento == 1){
                setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar1.png"));
           }
           else if (movimiento == 2){
                setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar2.png"));
           }
           else if (movimiento == 3){
                setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar3.png"));
           }
           else if (movimiento == 4){
                setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar4.png"));
           }
           else if (movimiento == 5){
                setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar5.png"));
           }
           else if (movimiento == 6){
                setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar6.png"));
           }
           else if (movimiento == 7){
                setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar7.png"));
           }
           else if (movimiento == 8){
                setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar8.png"));
           }
           else if (movimiento == 9){
                setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar9.png"));
           }
           else if (movimiento == 10){
                setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar10.png"));
           }
           else if (movimiento == 11){
                setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar11.png"));
           }
           else if (movimiento == 12){
                setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar12.png"));
           }
           else if (movimiento == 13){
                setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar13.png"));
           }
           else if (movimiento == 14){
                setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar14.png"));
           }
           else if (movimiento == 15){
                setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar15.png"));
           }
           else if (movimiento == 16){
                setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar16.png"));
           }
           else if (movimiento == 17){
                setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar17.png"));
           }
           else if (movimiento == 18){
                setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar18.png"));
           }
           else if (movimiento == 19){
                setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar19.png"));
           }
    }

    if (personaje == 1){
        if (movimiento == 0){
            setPixmap(QPixmap(":/personajes/Sprites_p2/charactergreen.png"));
        }
        else if (movimiento == 1){
            setPixmap(QPixmap(":/personajes/Sprites_p2/charactergreen_LEFT.png"));
        }
    }
}

void Player::posicion(){
    if (personaje == 0){
        setPos(70,600);
    }
    else if (personaje == 1){
        setPos(80,650);
    }
}
