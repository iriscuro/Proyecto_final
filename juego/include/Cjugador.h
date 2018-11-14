#ifndef CJUGADOR_H
#define CJUGADOR_H
#include "premios.h"
#include "SFML/Graphics.hpp"
using namespace std;
using namespace sf;
class Cjugador
{
    int x,y;
    RectangleShape jugador;
    public:
        Cjugador(Vector2f size );
        void move(Vector2f d);
        int posx(  );
        void setPosition(int x,int y);
        int posy();
        void salta(int speed);
        void dibujar(RenderWindow &ventana);
        bool colision(int x,int y,int w,int H ,int m1,int m2,int W1,int H1);
};

#endif // CJUGADOR_H
