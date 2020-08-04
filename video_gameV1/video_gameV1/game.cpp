#include "game.h"



Game::Game(bool ban,int Nj,QWidget * parent)
{    
    write_File();
    Read_File();
    Numj = Nj;
    jugador = 0;
    level = 1;
    ScoreActual[0] = 0;
    ScoreActual[1] = 0;
    scene->setSceneRect(0,0,7000,750);



    if (ban==false){
        rects.push_back((new Player(0)));
        scene->addItem(rects[0]);

    }
    else{
        rects.push_back((new Player(0)));
        scene->addItem(rects[0]);

        rects.push_back(new Player(1));
        scene->addItem(rects[1]);
        rects[1]->setVisible(false);
        rects[1]->setActive(false);
    }

    score = new Score();        //Se crea la variable score
    scene->addItem(score);      //Se incluye en la escena
    score->setPos(50,250);

    health = new Health();
    scene->addItem(health);
    health->setPos(50,200);

    health_boss = new Health();
    scene->addItem(health_boss);
    health_boss->setPos(6700,200);

    startlevel();
}

void Game::startlevel(){
    int px, py, i;
    qDebug()<<"startlevel: "<<jugador<< " "<<Numj;
    score->setScore(ScoreActual[jugador]);
    score->setPos(50,250);
    rects[jugador]->posicion();
    health->health = 100;
    health->Barra();
    health->setPos(50,200);
    if (level==1){
        scene->setBackgroundBrush(QBrush(QImage(":/escenario/selvaV2.png")));
        boss.push_back(new Boss(1));
        health_boss->health = 100;
        health_boss->Barra();

        scene->addItem(boss.last());
    }
    else if (level==2){
        scene->setBackgroundBrush(QBrush(QImage(":/escenario/Level_II_All.jpg")));

        boss.push_back(new Boss(2));
        health_boss->health = 100;
        health_boss->Barra();
        scene->addItem(boss.last());
    }
    else if (level==3){
        scene->setBackgroundBrush(QBrush(QImage(":/escenario/selvaV3.png")));
        boss.push_back(new Boss(1));
        health_boss->health = 100;
        health_boss->Barra();
        scene->addItem(boss.last());

    }
    else if (level==4){
        scene->setBackgroundBrush(QBrush(QImage(":/escenario/Level_II_AllNight.jpg")));

        boss.push_back(new Boss(2));
        health_boss->health = 100;
        health_boss->Barra();
        scene->addItem(boss.last());
    }
    else{
        //Aqui va imagen de victoria y que regrese al login
        //scene->setBackgroundBrush(QBrush(QImage("")));

    }
    setScene(scene);
    view->setScene(scene);
    view->resize(800,700);
    this->resize(800,700);

    if(!enemigo.isEmpty()){
        max = enemigo.size();
        for(i=0;i<max;i++){
            enemigo.removeAt(0);
        }
    }

    view->  centerOn(rects.at(jugador)->x(),rects.at(jugador)->y());
    if (!jugador)  max = rand()% (10*level)+(5*level);


    for(i=0;i<max;i++){
        enemigo.push_back(new EnemyM1(rand()% (2*level)+(1*level)));
        //enemigo[i]= new EnemyM1(F[i]);)
    }
    for (i=0;i<max;i++) {
        py = rand()% 690+550;
        px = rand()% 6200+500;
        scene->addItem(enemigo[i]);
        enemigo[i]->setPos(px,py);
    }

}


void Game::Read_File()
{
    ifstream FileIn("Guardado.txt", ios::in);
    short level;
    int puntuacion1, puntuacion2;
    if ( FileIn.is_open() ){
        FileIn>>level>>puntuacion1;
        FileIn>>level>>puntuacion2;
        //qDebug()<<level<<" "<<puntuacion1<<" "<<puntuacion2;
    }
    //Read_File("Guardado.txt");
}

void Game::write_File(){
  ofstream FileOut("Guardado.txt", ios::out);
  short level=2;
  int puntuacion1=0, puntuacion2=120;

   if ( FileOut.is_open() ){
      FileOut<<level<<" "<<puntuacion1<<"\n";
      FileOut<<level<<" "<<puntuacion2;
      //qDebug()<<level<<" "<<puntuacion1<<" "<<puntuacion2;
   }
}
