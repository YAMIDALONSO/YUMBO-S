#include <QApplication>
#include "controller.cpp"

int main(int argc, char **argv)
{
 QApplication app (argc, argv);

    Controller controller;
    controller.init();

 return app.exec();
}
