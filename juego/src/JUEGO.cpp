#include "JUEGO.h"
#include "score.h"
#include "SFML/Graphics.hpp"
using namespace sf;
void gamemostrar();
JUEGO::JUEGO(int ancho,int alto,std::string letra){//creamos ventana
    ventana = new RenderWindow(sf::VideoMode(ancho,alto),letra);
    ventana->setFramerateLimit(60);
    gamemostrar();
    }
void JUEGO::gamemostrar(){
    while(ventana->isOpen())
    {
		// Procesamos la pila de eventos
		while (ventana->pollEvent(event))
		{
			// Si el evento es de tipo Closed cerramos la ventana
			if (event.type == sf::Event::Closed)
				ventana->close();

		}
		dibujar();
}
}
void JUEGO::dibujar()
{
    ventana->clear();
    //score.show(sf::RenderWindow *ventana);
    ventana->display();
}

