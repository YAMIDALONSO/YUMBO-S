#include <iostream>
#include <windowyumbo.h>
#include "productwindow.h"

using namespace std;

class Controller{
private:

    WindowYumbo windowYumbo;
    ProductWindow productWindow;

public:

    void init(){
        windowYumbo.showMaximized();
    }
};
