#include "score.h"
#include<sstream>
#include <cstring>
#include "mostrarPantalla.h"
#include "SFML/Graphics.hpp"
#include "JUEGO.h"
using namespace sf;
score::score()
{
    puntoPlayer=0;
    pointIA=0;
    fuente1=new Font();
    fuente1->loadFromFile("Antonine Personal Use.ttf");//cargamos fuente
    textPlayer=new Text();
    textPlayer->setFont(*fuente1);//cargando texto
    textPlayer->setString("hola");
    textPlayer->setCharacterSize(100);
    textPlayer->setColor(sf::Color::Yellow);

}
void score::addPointPlayer(){
    puntoPlayer++;}
void score::addPointIa(){
    pointIA++;}
void score::show(sf::RenderWindow &ventana){
    std::stringstream ia;
    ia<<puntoPlayer;
    //std::string st;
    //st.push_back('0'+puntoPlayer);
    //textPlayer->setString(st);
     //textPlayer->setCharacterSize(100);
    //textPlayer->setColor(sf::Color::Yellow);
    //textPlayer->setPosition(ancho+textPlayer->getLocalBounds().ancho,20);
    textPlayer->setPosition(0,-100);
    ventana.draw(*textPlayer);

}

