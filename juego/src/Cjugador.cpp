#include "Cjugador.h"
#include "SFML/Graphics.hpp"
#include<iostream>
using namespace std;
int Cjugador::posx(){
    return jugador.getPosition().x;}
int Cjugador::posy(){
    return jugador.getPosition().y;}

void Cjugador::setPosition(int x,int y){
    jugador.setPosition(x,y);
}


void Cjugador::salta(int speed){
    jugador.move(speed,0);
}
Cjugador::Cjugador(Vector2f size ){
    jugador.setSize(size);
    jugador.setFillColor(Color::Red);
}
void Cjugador::move(Vector2f d){
    jugador.move(d);
}
void Cjugador::dibujar(RenderWindow &ventana){
    ventana.draw(jugador);

}
bool Cjugador::colision(int jugador.posx(),int jugador.posy(),int w,int H ,int m1,int m2,int W1,int H1){
    if(x+w <m1 || x > m1 +W1)
        return false;
    if(y+H < m2 || y > m2+H1){
        jugador.move()
        return false;}

    return true;
}

