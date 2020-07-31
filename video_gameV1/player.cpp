#include "player.h"
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include "game.h"


extern Game *game;

Player::Player(short color)//, QGraphicsItem *parent): QGraphicsPixmapItem()
{
    personaje = color;
    pintura(1,side);
    posicion();
}

void Game::keyPressEvent(QKeyEvent *event){            //Funcion que sirve para poder manipular el personaje
    Player * a = rects.at(jugador);
        if(event->key() == Qt::Key_W ){
            if(a->pos().y()>420)a->setPos(a->x(),a->y()-5);         //En ella se accede a otra funcion para poder  aparentar
            view->centerOn(a->x(),a->y());                                  //animaciones
         if(right==true){
            if (cambiacion == 1){
                a->pintura(1, right);
                cambiacion = 2;
            }
            else if (cambiacion == 2){
                a->pintura(2, right);
                cambiacion = 3;
            }
            else if (cambiacion == 3){
                a->pintura(3, right);
                cambiacion = 4;
            }
            else if (cambiacion == 4){
                a->pintura(4, right);
                cambiacion = 5;
            }
            else if (cambiacion == 5){
                a->pintura(5, right);
                cambiacion = 6;
            }
            else if (cambiacion == 6){
                a->pintura(6, right);
                cambiacion = 7;
            }
            else if (cambiacion == 7){
                a->pintura(7, right);
                cambiacion = 8;
            }
            else if (cambiacion == 8){
                a->pintura(8, right);
                cambiacion = 9;
            }
            else if ( cambiacion == 9){
                a->pintura(9, right);
                cambiacion = 10;
            }
            else if ( cambiacion == 10){
                a->pintura(10, right);
                cambiacion = 11;
            }
            else if ( cambiacion == 11){
                a->pintura(11, right);
                cambiacion = 12;
            }
            else if ( cambiacion == 12){
                a->pintura(12, right);
                cambiacion = 13;
            }
            else if ( cambiacion == 13){
                a->pintura(13, right);
                cambiacion = 14;
            }
            else if ( cambiacion == 14){
                a->pintura(14, right);
                cambiacion = 15;
            }
            else if ( cambiacion == 15){
                a->pintura(15, right);
                cambiacion = 16;
            }
            else if ( cambiacion == 16){
                a->pintura(16, right);
                cambiacion = 17;
            }
            else if ( cambiacion == 17){
                a->pintura(17, right);
                cambiacion = 18;
            }
            else if ( cambiacion == 18){
                a->pintura(18, right);
                cambiacion = 19;
            }
            else if ( cambiacion == 19){
                a->pintura(19, right);
                cambiacion = 1;
            }
        }
         if(right==false){
             if (cambiacion == 1){
                 a->pintura(1, right);
                 cambiacion = 2;
             }
             else if (cambiacion == 2){
                 a->pintura(2, right);
                 cambiacion = 3;
             }
             else if (cambiacion == 3){
                 a->pintura(3, right);
                 cambiacion = 4;
             }
             else if (cambiacion == 4){
                 a->pintura(4, right);
                 cambiacion = 5;
             }
             else if (cambiacion == 5){
                 a->pintura(5, right);
                 cambiacion = 6;
             }
             else if (cambiacion == 6){
                 a->pintura(6, right);
                 cambiacion = 7;
             }
             else if (cambiacion == 7){
                 a->pintura(7, right);
                 cambiacion = 8;
             }
             else if (cambiacion == 8){
                 a->pintura(8, right);
                 cambiacion = 9;
             }
             else if ( cambiacion == 9){
                 a->pintura(9, right);
                 cambiacion = 10;
             }
             else if ( cambiacion == 10){
                 a->pintura(10, right);
                 cambiacion = 11;
             }
             else if ( cambiacion == 11){
                 a->pintura(11, right);
                 cambiacion = 12;
             }
             else if ( cambiacion == 12){
                 a->pintura(12, right);
                 cambiacion = 13;
             }
             else if ( cambiacion == 13){
                 a->pintura(13, right);
                 cambiacion = 14;
             }
             else if ( cambiacion == 14){
                 a->pintura(14, right);
                 cambiacion = 15;
             }
             else if ( cambiacion == 15){
                 a->pintura(15, right);
                 cambiacion = 16;
             }
             else if ( cambiacion == 16){
                 a->pintura(16, right);
                 cambiacion = 17;
             }
             else if ( cambiacion == 17){
                 a->pintura(17, right);
                 cambiacion = 18;
             }
             else if ( cambiacion == 18){
                 a->pintura(18, right);
                 cambiacion = 19;
             }
             else if ( cambiacion == 19){
                 a->pintura(19, right);
                 cambiacion = 1;
             }
         }
        }
        if(event->key() == Qt::Key_S){
            if(a->pos().y()<580)a->setPos(a->x(),a->y()+5);
            view->centerOn(a->x(),a->y());
          if(right==true){
            if (cambiacion == 1){
                a->pintura(1, right);
                cambiacion = 2;
            }
            else if (cambiacion == 2){
                a->pintura(2, right);
                cambiacion = 3;
            }
            else if (cambiacion == 3){
                a->pintura(3, right);
                cambiacion = 4;
            }
            else if (cambiacion == 4){
                a->pintura(4, right);
                cambiacion = 5;
            }
            else if (cambiacion == 5){
                a->pintura(5, right);
                cambiacion = 6;
            }
            else if (cambiacion == 6){
                a->pintura(6, right);
                cambiacion = 7;
            }
            else if (cambiacion == 7){
                a->pintura(7, right);
                cambiacion = 8;
            }
            else if (cambiacion == 8){
                a->pintura(8, right);
                cambiacion = 9;
            }
            else if ( cambiacion == 9){
                a->pintura(9, right);
                cambiacion = 10;
            }
            else if ( cambiacion == 10){
                a->pintura(10, right);
                cambiacion = 11;
            }
            else if ( cambiacion == 11){
                a->pintura(11, right);
                cambiacion = 12;
            }
            else if ( cambiacion == 12){
                a->pintura(12, right);
                cambiacion = 13;
            }
            else if ( cambiacion == 13){
                a->pintura(13, right);
                cambiacion = 14;
            }
            else if ( cambiacion == 14){
                a->pintura(14, right);
                cambiacion = 15;
            }
            else if ( cambiacion == 15){
                a->pintura(15, right);
                cambiacion = 16;
            }
            else if ( cambiacion == 16){
                a->pintura(16, right);
                cambiacion = 17;
            }
            else if ( cambiacion == 17){
                a->pintura(17, right);
                cambiacion = 18;
            }
            else if ( cambiacion == 18){
                a->pintura(18, right);
                cambiacion = 19;
            }
            else if ( cambiacion == 19){
                a->pintura(19, right);
                cambiacion = 1;
            }
        }
          if(right==false){
              if (cambiacion == 1){
                  a->pintura(1, right);
                  cambiacion = 2;
              }
              else if (cambiacion == 2){
                  a->pintura(2, right);
                  cambiacion = 3;
              }
              else if (cambiacion == 3){
                  a->pintura(3, right);
                  cambiacion = 4;
              }
              else if (cambiacion == 4){
                  a->pintura(4, right);
                  cambiacion = 5;
              }
              else if (cambiacion == 5){
                  a->pintura(5, right);
                  cambiacion = 6;
              }
              else if (cambiacion == 6){
                  a->pintura(6, right);
                  cambiacion = 7;
              }
              else if (cambiacion == 7){
                  a->pintura(7, right);
                  cambiacion = 8;
              }
              else if (cambiacion == 8){
                  a->pintura(8, right);
                  cambiacion = 9;
              }
              else if ( cambiacion == 9){
                  a->pintura(9, right);
                  cambiacion = 10;
              }
              else if ( cambiacion == 10){
                  a->pintura(10, right);
                  cambiacion = 11;
              }
              else if ( cambiacion == 11){
                  a->pintura(11, right);
                  cambiacion = 12;
              }
              else if ( cambiacion == 12){
                  a->pintura(12, right);
                  cambiacion = 13;
              }
              else if ( cambiacion == 13){
                  a->pintura(13, right);
                  cambiacion = 14;
              }
              else if ( cambiacion == 14){
                  a->pintura(14, right);
                  cambiacion = 15;
              }
              else if ( cambiacion == 15){
                  a->pintura(15, right);
                  cambiacion = 16;
              }
              else if ( cambiacion == 16){
                  a->pintura(16, right);
                  cambiacion = 17;
              }
              else if ( cambiacion == 17){
                  a->pintura(17, right);
                  cambiacion = 18;
              }
              else if ( cambiacion == 18){
                  a->pintura(18, right);
                  cambiacion = 19;
              }
              else if ( cambiacion == 19){
                  a->pintura(19, right);
                  cambiacion = 1;
              }
          }
        }
        if(event->key() == Qt::Key_A){
            if(a->pos().x()>5)a->setPos(a->x()-5,a->y());
            view->centerOn(rects.at(0)->x(),rects.at(0)->y());
            right=false;

            if (cambiacion == 1){
                a->pintura(1, right);
                cambiacion = 2;
            }
            else if (cambiacion == 2){
                a->pintura(2, right);
                cambiacion = 3;
            }
            else if (cambiacion == 3){
                a->pintura(3, right);
                cambiacion = 4;
            }
            else if (cambiacion == 4){
                a->pintura(4, right);
                cambiacion = 5;
            }
            else if (cambiacion == 5){
                a->pintura(5, right);
                cambiacion = 6;
            }
            else if (cambiacion == 6){
                a->pintura(6, right);
                cambiacion = 7;
            }
            else if (cambiacion == 7){
                a->pintura(7, right);
                cambiacion = 8;
            }
            else if (cambiacion == 8){
                a->pintura(8, right);
                cambiacion = 9;
            }
            else if ( cambiacion == 9){
                a->pintura(9, right);
                cambiacion = 10;
            }
            else if ( cambiacion == 10){
                a->pintura(10, right);
                cambiacion = 11;
            }
            else if ( cambiacion == 11){
                a->pintura(11, right);
                cambiacion = 12;
            }
            else if ( cambiacion == 12){
                a->pintura(12, right);
                cambiacion = 13;
            }
            else if ( cambiacion == 13){
                a->pintura(13, right);
                cambiacion = 14;
            }
            else if ( cambiacion == 14){
                a->pintura(14, right);
                cambiacion = 15;
            }
            else if ( cambiacion == 15){
                a->pintura(15, right);
                cambiacion = 16;
            }
            else if ( cambiacion == 16){
                a->pintura(16, right);
                cambiacion = 17;
            }
            else if ( cambiacion == 17){
                a->pintura(17, right);
                cambiacion = 18;
            }
            else if ( cambiacion == 18){
                a->pintura(18, right);
                cambiacion = 19;
            }
            else if ( cambiacion == 19){
                a->pintura(19, right);
                cambiacion = 1;
            }
        }
        if(event->key() == Qt::Key_D){
            if(a->pos().x()<6910)a->setPos(a->x()+5,a->y());
            view->centerOn(a->x(),a->y());
            right=true;

            if (cambiacion == 1){
                a->pintura(1, right);
                cambiacion = 2;
            }
            else if (cambiacion == 2){
                a->pintura(2, right);
                cambiacion = 3;
            }
            else if (cambiacion == 3){
                a->pintura(3, right);
                cambiacion = 4;
            }
            else if (cambiacion == 4){
                a->pintura(4,right);
                cambiacion = 5;
            }
            else if (cambiacion == 5){
                a->pintura(5, right);
                cambiacion = 6;
            }
            else if (cambiacion == 6){
                a->pintura(6, right);
                cambiacion = 7;
            }
            else if (cambiacion == 7){
                a->pintura(7, right);
                cambiacion = 8;
            }
            else if (cambiacion == 8){
                a->pintura(8, right);
                cambiacion = 9;
            }
            else if ( cambiacion == 9){
                a->pintura(9, right);
                cambiacion = 10;
            }
            else if ( cambiacion == 10){
                a->pintura(10, right);
                cambiacion = 11;
            }
            else if ( cambiacion == 11){
                a->pintura(11, right);
                cambiacion = 12;
            }
            else if ( cambiacion == 12){
                a->pintura(12, right);
                cambiacion = 13;
            }
            else if ( cambiacion == 13){
                a->pintura(13, right);
                cambiacion = 14;
            }
            else if ( cambiacion == 14){
                a->pintura(14, right);
                cambiacion = 15;
            }
            else if ( cambiacion == 15){
                a->pintura(15, right);
                cambiacion = 16;
            }
            else if ( cambiacion == 16){
                a->pintura(16, right);
                cambiacion = 17;
            }
            else if ( cambiacion == 17){
                a->pintura(17, right);
                cambiacion = 18;
            }
            else if ( cambiacion == 18){
                a->pintura(18, right);
                cambiacion = 19;
            }
            else if ( cambiacion == 19){
                a->pintura(19, right);
                cambiacion = 1;
            }
    }

}

void Player::pintura(short movimiento, bool side){                //Fucion que sirve para ir cambiando de imagenes y aparentar un tipo de animacion
    if (personaje==0){                                                     //Tanto para el jugador 1 como para el jugador 2
        if(side==true){
           if (movimiento == 1){
                setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Caminar1.png"));
           }
           else if (movimiento == 2){
                setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Caminar2.png"));
           }
           else if (movimiento == 3){
                setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Caminar3.png"));
           }
           else if (movimiento == 4){
                setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Caminar4.png"));
           }
           else if (movimiento == 5){
                setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Caminar5.png"));
           }
           else if (movimiento == 6){
                setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Caminar6.png"));
           }
           else if (movimiento == 7){
                setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Caminar7.png"));
           }
           else if (movimiento == 8){
                setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Caminar8.png"));
           }
           else if (movimiento == 9){
                setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Caminar9.png"));
           }
           else if (movimiento == 10){
                setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Caminar10.png"));
           }
           else if (movimiento == 11){
                setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Caminar11.png"));
           }
           else if (movimiento == 12){
                setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Caminar12.png"));
           }
           else if (movimiento == 13){
                setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Caminar13.png"));
           }
           else if (movimiento == 14){
                setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Caminar14.png"));
           }
           else if (movimiento == 15){
                setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Caminar15.png"));
           }
           else if (movimiento == 16){
                setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Caminar16.png"));
           }
           else if (movimiento == 17){
                setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Caminar17.png"));
           }
           else if (movimiento == 18){
                setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Caminar18.png"));
           }
           else if (movimiento == 19){
                setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Caminar19.png"));
           }
    }
        if(side==false){
            if (movimiento == 1){
                 setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Rojo_Left1.png"));
            }
            else if (movimiento == 2){
                 setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Rojo_Left2.png"));
            }
            else if (movimiento == 3){
                 setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Rojo_Left3.png"));
            }
            else if (movimiento == 4){
                 setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Rojo_Left4.png"));
            }
            else if (movimiento == 5){
                 setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Rojo_Left5.png"));
            }
            else if (movimiento == 6){
                 setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Rojo_Left6.png"));
            }
            else if (movimiento == 7){
                 setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Rojo_Left7.png"));
            }
            else if (movimiento == 8){
                 setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Rojo_Left8.png"));
            }
            else if (movimiento == 9){
                 setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Rojo_Left9.png"));
            }
            else if (movimiento == 10){
                 setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Rojo_Left10.png"));
            }
            else if (movimiento == 11){
                 setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Rojo_Left11.png"));
            }
            else if (movimiento == 12){
                 setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Rojo_Left12.png"));
            }
            else if (movimiento == 13){
                 setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Rojo_Left13.png"));
            }
            else if (movimiento == 14){
                 setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Rojo_Left14.png"));
            }
            else if (movimiento == 15){
                 setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Rojo_Left15.png"));
            }
            else if (movimiento == 16){
                 setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Rojo_Left16.png"));
            }
            else if (movimiento == 17){
                 setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Rojo_Left17png"));
            }
            else if (movimiento == 18){
                 setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Rojo_Left18.png"));
            }
            else if (movimiento == 19){
                 setPixmap(QPixmap(":/personajesJ1/Sprites_p1/Rojo_Left19.png"));
            }

        }
    }

    if (personaje == 1){
       if(side==true){
        if (movimiento == 1){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/caminarverde1.png"));
        }
        else if (movimiento == 2){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/caminarverde2.png"));
        }
        else if (movimiento == 3){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/caminarverde3.png"));
        }
        else if (movimiento == 4){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/caminarverde4.png"));
        }
        else if (movimiento == 5){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/caminarverde5.png"));
        }
        else if (movimiento == 6){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/caminarverde6.png"));
        }
        else if (movimiento == 7){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/caminarverde7.png"));
        }
        else if (movimiento == 8){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/caminarverde8.png"));
        }
        else if (movimiento == 9){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/caminarverde9.png"));
        }
        else if (movimiento == 10){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/caminarverde10.png"));
        }
        else if (movimiento == 11){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/caminarverde11.png"));
        }
        else if (movimiento == 12){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/caminarverde12.png"));
        }
        else if (movimiento == 13){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/caminarverde13.png"));
        }
        else if (movimiento == 14){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/caminarverde14.png"));
        }
        else if (movimiento == 15){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/caminarverde15.png"));
        }
        else if (movimiento == 16){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/caminarverde16.png"));
        }
        else if (movimiento == 17){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/caminarverde17.png"));
        }
        else if (movimiento == 18){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/caminarverde18.png"));
        }
        else if (movimiento == 19){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/caminarverde19.png"));
        }
    }

     if(side==false){
        if (movimiento == 1){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/Verde_Left1.png"));
        }
        else if (movimiento == 2){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/Verde_Left2.png"));
        }
        else if (movimiento == 3){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/Verde_Left3.png"));
        }
        else if (movimiento == 4){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/Verde_Left4.png"));
        }
        else if (movimiento == 5){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/Verde_Left5.png"));
        }
        else if (movimiento == 6){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/Verde_Left6.png"));
        }
        else if (movimiento == 7){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/Verde_Left7.png"));
        }
        else if (movimiento == 8){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/Verde_Left8.png"));
        }
        else if (movimiento == 9){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/Verde_Left9.png"));
        }
        else if (movimiento == 10){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/Verde_Left10.png"));
        }
        else if (movimiento == 11){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/Verde_Left11.png"));
        }
        else if (movimiento == 12){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/Verde_Left12.png"));
        }
        else if (movimiento == 13){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/Verde_Left13.png"));
        }
        else if (movimiento == 14){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/Verde_Left14.png"));
        }
        else if (movimiento == 15){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/Verde_Left15.png"));
        }
        else if (movimiento == 16){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/Verde_Left16.png"));
        }
        else if (movimiento == 17){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/Verde_Left17.png"));
        }
        else if (movimiento == 18){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/Verde_Left18.png"));
        }
        else if (movimiento == 19){
             setPixmap(QPixmap(":/personaje2/Sprites_p2/Verde_Left19.png"));
            }
        }
    }
}

void Player::posicion(){                                //Funcion la cual define la posicion del jugador al iniciar el nivel
    if (personaje == 0){
        setPos(70,600);
    }
    else if (personaje == 1){
        setPos(80,650);
    }
}

void Player::attack_Enemy(){

}
