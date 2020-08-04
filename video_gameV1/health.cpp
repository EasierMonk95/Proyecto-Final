#include <QDebug>
#include "health.h"

Health::Health()
{
    health = 100;               //Se inicializa la vida en 100
    Barra();
}

void Health::decrease(bool More_damage)
{        
        if (More_damage == false){                  //Funcion la cual sirve para ir reduciendo la vida del jugador con cada golpe que
            health-=5;                                      //reciba, el danio depende de que enemigo lo golpee
        }
        else {                                                //Al llegar a 0 la vida se acaba el juego
            health-=10;
        }
        Barra();
}

int Health::getHealth()
{
    return health;
}

void Health::Barra()                        //Funcion para graficar la barra de vida del jugador
{
    if (health == 100){
        setPixmap(QPixmap(":/Barra_life/Sprites_Life/Life_100.png"));
    }
    else if ( health == 95){
        setPixmap(QPixmap(":/Barra_life/Sprites_Life/Life_95.png"));
    }
    else if ( health == 90){
        setPixmap(QPixmap(":/Barra_life/Sprites_Life/Life_90.png"));
    }
    else if ( health == 85){
        setPixmap(QPixmap(":/Barra_life/Sprites_Life/Life_85.png"));
    }
    else if ( health == 80){
        setPixmap(QPixmap(":/Barra_life/Sprites_Life/Life_80.png"));
    }
    else if ( health == 75){
        setPixmap(QPixmap(":/Barra_life/Sprites_Life/Life_75.png"));
    }
    else if ( health == 70){
        setPixmap(QPixmap(":/Barra_life/Sprites_Life/Life_70.png"));
    }
    else if ( health == 65){
        setPixmap(QPixmap(":/Barra_life/Sprites_Life/Life_65.png"));
    }
    else if ( health == 60){
        setPixmap(QPixmap(":/Barra_life/Sprites_Life/Life_60.png"));
    }
    else if ( health == 50){
        setPixmap(QPixmap(":/Barra_life/Sprites_Life/Life_50.png"));
    }
    else if ( health == 45){
        setPixmap(QPixmap(":/Barra_life/Sprites_Life/Life_45.png"));
    }
    else if ( health == 35){
        setPixmap(QPixmap(":/Barra_life/Sprites_Life/Life_35.png"));
    }
    else if ( health == 30){
        setPixmap(QPixmap(":/Barra_life/Sprites_Life/Life_30.png"));
    }
    else if ( health == 25){
        setPixmap(QPixmap(":/Barra_life/Sprites_Life/Life_25.png"));
    }
    else if ( health == 20){
        setPixmap(QPixmap(":/Barra_life/Sprites_Life/Life_20.png"));
    }
    else if ( health == 15){
        setPixmap(QPixmap(":/Barra_life/Sprites_Life/Life_15.png"));
    }
    else if ( health == 10){
        setPixmap(QPixmap(":/Barra_life/Sprites_Life/Life_10.png"));
    }
    else if ( health == 5){
        setPixmap(QPixmap(":/Barra_life/Sprites_Life/Life_5.png"));
    }
    else if ( health == 0){
        setPixmap(QPixmap(":/Barra_life/Sprites_Life/Life_0.png"));
    }

}
