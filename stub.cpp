/*
Стартов файл за използване на SDL обвиваката paint
*/
#include "sdlwrapper.h"


int main()
{
    paint::drawLine(0,0,200,200);

    paint::turtle::jump(200,200);
    paint::turtle::down();

    for(int i=0;i<4;i++)
    {
        paint::turtle::forward(100);
        paint::turtle::right(90);
    }

    paint::drawText(220,230,20,"Hello!");
    
    paint::updateGraphics();
    paint::waitKeypress();

    return 0;
}

int SDL_main(int argc, char* argv[]) {
    /* Това е необходимо за SDL под Windows: 
       библиотекат сменя входната точка на програмата*/
    return main(); 
}