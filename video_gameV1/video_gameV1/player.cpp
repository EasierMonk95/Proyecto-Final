#include "player.h"
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include "game.h"

extern Game *game;

Player::Player(short color)//, QGraphicsItem *parent): QGraphicsPixmapItem()
{
    personaje = color;    
    pintura(img);
    posicion();
}

void Game::keyPressEvent(QKeyEvent *event){
    Player * a = rects.at(jugador);
    img=0;
    //Player * b = rects.at(1);
    //if (rects.size()>0 && rects.size()<2){
        if(event->key() == Qt::Key_W){
            a->setPos(a->x(),a->y()-10);
            view->centerOn(a->x(),a->y());
            //a->pintura();
        }
        if(event->key() == Qt::Key_S){
            a->setPos(a->x(),a->y()+10);
            view->centerOn(a->x(),a->y());
            //a->pintura();
        }
        if(event->key() == Qt::Key_A){
            a->setPos(a->x()-10,a->y());
            view->centerOn(rects.at(0)->x(),rects.at(0)->y());
            //a->pintura();
        }
        if(event->key() == Qt::Key_D){
            a->setPos(a->x()+10,a->y());
            view->centerOn(a->x(),a->y());
            a->pintura(img);
            img+=1;

        //}
    }

}

void Player::pintura(int img){
    if (personaje==0){
            if(img==0){
            setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar1.png"));
            img+=1;
            }
            if(img==1){
            setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar2.png"));
            img+=1;
            }
            if(img==2){
            setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar3.png"));
            img+=1;
            }
            if(img==3){
            setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar4.png"));
            img+=1;
            }
            if(img==4){
            setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar5.png"));
            img+=1;
            }
            if(img==5){
            setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar6.png"));
            img+=1;
            }
            if(img==6){
            setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar7.png"));
            img+=1;
            }
            if(img==7){
            setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar8.png"));
            img+=1;
            }
            if(img==8){
            setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar9.png"));
            img+=1;
            }
            if(img==9){
            setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar10.png"));
            img+=1;
            }
            if(img==10){
            setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar11.png"));
            img+=1;
            }
            if(img==11){
            setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar12.png"));
            img+=1;
            }
            if(img==12){
            setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar13.png"));
            img+=1;
            }
            if(img==13){
            setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar14.png"));
            img+=1;
            }
            if(img==14){
            setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar15.png"));
            img+=1;
            }
            if(img==15){
            setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar16.png"));
            img+=1;
            }
            if(img==16){
            setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar17.png"));
            img+=1;
            }
            if(img==17){
            setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar18.png"));
            img+=1;
            }
            if(img==18){
            setPixmap(QPixmap(":/personajes/Sprites_p1/Caminar19.png"));
            img+=1;
            }
            if(img==19){
            img=0;
            }
    }
    if (personaje==1){
        setPixmap(QPixmap(":/personajes/Sprites_p2/caminarverde1.png"));
    }
}

void Player::posicion(){
    if (personaje==0){
        setPos(70,600);
    }
    else if (personaje==1){
        setPos(80,650);
    }
}
