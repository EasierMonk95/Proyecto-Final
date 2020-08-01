#include <QApplication>
#include "game.h"
#include "player.h"
#include "login.h"


Login *log;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    log= new Login();
    log->show();
//    log->close();

    return a.exec();
}
