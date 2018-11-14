#include "premios.h"
#include "SFML/Graphics.hpp"
using namespace sf;
void premios::pospremios(int a,int b)
{
    x=a;
    y=b;
    frutas->setPosition(Vector2f(x,y));
}
premios::premios(){
    frutas=new RectangleShape(Vector2f(60,60));
}
premios::setVentana(RenderWindow *v){
    mi_ventana=v;
}
void premios::dibujar(){
    frutas->setFillColor(Color(100,0,100));
    mi_ventana->draw(*frutas);
}
premios::~premios(){
    delete frutas;
}

