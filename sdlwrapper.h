#pragma once
#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <assert.h>

namespace paint
{

        void setColor(Uint8 r, Uint8 g, Uint8 b);
        void drawPixel(int x, int y);
        void drawLine(int x1, int y1, int x2, int y2);
        void drawFillRect(int x, int y, int w, int h);
        void drawFillCircle(int x, int y, int radius);
        void drawFile(int x, int y, int w, int h, const char* file);
        void drawText(int x, int y, int size, const char* text);

        void updateGraphics();
        void waitKeypress();

        namespace turtle
        {
             struct Pen
             {
                double x;
                double y;
                bool down;
                double angle; /*dgrees*/
             };
             void down();
             void up();
             void forward(double distance);
             void left(double a);
             void right(double a);
             void turnto(double a);
             void jump(double x, double y);
        }

}