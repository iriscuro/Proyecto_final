#ifndef JUEGO_H
#define JUEGO_H
#include "SFML/Graphics.hpp"
#include <iostream>
#include<math.h>
using namespace sf;
class JUEGO
{
    Sprite sprite,sprite1,sprite2;
    public:
        JUEGO(int ancho,int alto,std::string letra);
        void gamemostrar();
        void dibujar();
        void mover();
    private:
        RenderWindow *ventana;
        Event event;
};
#endif
