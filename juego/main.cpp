#include"mostrarPantalla.h"
#include"Cjugador.h"
#include "SFML/Graphics.hpp"
#include"JUEGO.h"
#include"score.h"
#include "premios.h"
using namespace std;
using namespace sf;

struct pelota{
    RenderWindow* mi_ventana;
    CircleShape* mi_at;
    pelota(){
        mi_at=new CircleShape(20);
    }
    setVentana(RenderWindow* v){
        mi_ventana=v;
    }
    dibujar(){
        mi_ventana->draw(*mi_at);
    }
};
int main()
{
    //Creando ventana
    int ancho=800;
    int altura=800;
    RenderWindow ventana(VideoMode(ancho , altura), "mi videojuego");
    ventana.setKeyRepeatEnabled(true);

    //creando personaje
    pelota P;
    P.setVentana(&ventana);
    P.mi_at->setFillColor(Color(0,255,0));
    P.mi_at->setPosition(ancho/2,altura/2);
    Cjugador persona(Vector2f(50,50));
    persona.dibujar(ventana);
    premios moneda;
    moneda.pospremios(300,500);
    moneda.setVentana(&ventana);

    //SHAPE.setPosition(ancho/2,altura/2);
    score s;
    int dx=0;
    int dy=0;
    //pantalla es decir fondo
    Texture fon;
    fon.loadFromFile("");
    Sprite imagen;
    imagen.setTexture(fon);
    Texture personaje;
    personaje.loadFromFile("map1.png");
    Sprite image1;
    image1.setTexture(personaje);
    imagen.setPosition(200,200);
    image1.setPosition(ancho/2,altura/2);

    //Creando camara
    View vista(FloatRect(260 , 395 , 600 , 500));
    vista.setSize( 1120 , 1280 );
    vista.zoom(1);
    vista.setCenter(200.f, 400.f);

        int desplaza=100;

    persona.colision()
    //Cjugador jugador(Vector2f(32,32));
     while (ventana.isOpen()) {
        Event Event;
       // screen scrolling
        ventana.setView(vista);
        //vista.move(desplaza,50);
        while (ventana.pollEvent(Event)) {
            switch (Event.type) {
            case Event::Closed:
                ventana.close();
            }
            //int moveSpeed = 100;
               // isFiring = true;
            if (Keyboard::isKeyPressed(Keyboard::Up)) {
                //jugador.move(Vector2f(0, moveSpeed));
                dy-=10;
            } else if (Keyboard::isKeyPressed(Keyboard::Down)) {
                dy+=10;
                //jugador.move(Vector2f(0, -moveSpeed));
            } else if (Keyboard::isKeyPressed(Keyboard::Left)) {
                dx-=10;
                //jugador.move(Vector2f(-moveSpeed, 0));
            } else if (Keyboard::isKeyPressed(Keyboard::Right)) {
                dx+=10;
                //jugador.move(sf::Vector2f(moveSpeed, 0));
                //desplaza = desplaza + 4;
            }
        }


        ventana.clear();
        s.show(ventana);
        persona.setPosition(ancho/2+dx,altura/2+dy);
        persona.posx();
        persona.posy();
        persona.dibujar(ventana);
        moneda.dibujar();
  //  ventana.draw(imagen);
        ventana.draw(image1);
        ventana.display();
    }
 return 0;
}
