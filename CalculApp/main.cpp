#include <iostream>
#include "calcul.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication app(argc,argv);
    calcul c;
    c.show();
    return app.exec();
}
