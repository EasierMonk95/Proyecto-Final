#include "game.h"
#include <QGraphicsView>
#include <QTimer>
#include <QObject>
#include <QDebug>

Game::Game(bool ban,QWidget * parent)
{    

    write_File();
    Read_File();

    jugador = 0;
    scene->setSceneRect(0,0,7000,750);
    if (level==0){
        scene->setBackgroundBrush(QBrush(QImage(":/escenario/selvaV2.png")));
        boss = new Boss(1);
        scene->addItem(boss);
    }
    else if (level==1){
        //scene->setBackgroundBrush(QBrush(QImage("")));
    }
    else if (level==2){
        //scene->setBackgroundBrush(QBrush(QImage("")));
    }
    setScene(scene);
    view->setScene(scene);
    view->resize(800,700);
    this->resize(800,700);

    if (ban==false){
        rects.push_back(new Player(0));
        scene->addItem(rects.back());

    }
    else{
        rects.push_back((new Player(0)));
        scene->addItem(rects[0]);


        rects.push_back(new Player(1));
        scene->addItem(rects[1]);
    }


    view->  centerOn(rects.at(0)->x(),rects.at(0)->y());    
    max = rand()% 10 +5;
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

    score = new Score();        //Se crea la variable score
    scene->addItem(score);      //Se incluye en la escena
    score->setPos(50,250);

    health = new Health();
    scene->addItem(health);
    health->setPos(50,200);

    health_boss = new Health();
    scene->addItem(health_boss);
    health_boss->setPos(6500,200);






}


void Game::Read_File()
{
    string name;
    ifstream FileIn("Guardadin.txt", ios::in);
      short level;
      int puntuacion1, puntuacion2;

       if ( FileIn.is_open() ){
          FileIn>>level>>puntuacion1;
          FileIn>>level>>puntuacion2;
          qDebug()<<level<<" "<<puntuacion1<<" "<<puntuacion2;
       }
       else qDebug()<<"No se abrio el archivo";
      //Read_File("Guardado.txt");
      FileIn.close();
}

void Game::write_File(){

  ofstream FileOut("Guardadin.txt", ios::out);
  short level=1;
  int puntuacion1=10, puntuacion2=20;

   if ( FileOut.is_open() ){
      FileOut<<level<<" "<<puntuacion1<<"\n";
      FileOut<<level<<" "<<puntuacion2;
      qDebug()<<level<<" "<<puntuacion1<<" "<<puntuacion2;
   }
     FileOut.close();
}

