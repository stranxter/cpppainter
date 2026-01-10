/*
Стартов файл за използване на SDL Wrapper
*/
#include "sdlwrapper.h"


int main()
{
    sdlw::setColor(255,255,255);

    sdlw::drawLine(0,0,200,200);
    sdlw::drawText(0,50,20,"Hello!");

    sdlw::updateGraphics();
    sdlw::waitKeypress();

    return 0;
}

int SDL_main(int argc, char* argv[]) {
    /* Това е необходимо за SDL под Windows: 
       библиотекат сменя входната точка на програмата*/
    return main(); 
}