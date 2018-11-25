
#include "Menu.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <sstream>
#define ANCHO    1500
#define ALTO      840
#define TITULO    "Hit the Ball"

Menu::Menu()
{
   inicio = inicializa();
}
/*
void Menu::mostrarL()
{
    ventana1.draw(opcion);
}
*/
bool Menu::inicializa()
{
   // Se cargan los archivos necesarios.
  if (!fuente1.loadFromFile("Fuentes/Abtecia.ttf"))
   {
      return false;
   }
   if (!fuente2.loadFromFile("Fuentes/ACafe.ttf"))
   {
      return false;
   }

  if (!tx_fondo1.loadFromFile("imagenes/opciones.jpg"))
   {
      return false;
   }

    // Crear la ventana
   ventana1.create(sf::VideoMode(ANCHO, ALTO), TITULO);

   // Limitar los FPS
   ventana1.setFramerateLimit(50);

   // Textura del fondo
   fondo1.setTexture(tx_fondo1);

   // Fijar fuente para los textos
   opcion[0].setFont(fuente1);
   opcion[1].setFont(fuente1);
   opcion[2].setFont(fuente1);
   opcion[3].setFont(fuente2);
   opcion[4].setFont(fuente2);

    // Inicializar el opcion
   opcion[0].setString("PLAY");
   opcion[0].setCharacterSize(53);
   opcion[0].setPosition(630, 230);
   opcion[0].setColor(sf::Color(90, 100, 20));

   opcion[1].setString("ESCORES");
   opcion[1].setCharacterSize(53);
   opcion[1].setPosition(558, 370);
   opcion[1].setColor(sf::Color(90, 100, 20));

   opcion[2].setString("MINIJUEGO");
   opcion[2].setCharacterSize(53);
   opcion[2].setPosition(540, 515);
   opcion[2].setColor(sf::Color(90, 100, 20));

   opcion[3].setString("CREDITOS");
   opcion[3].setCharacterSize(60);
   opcion[3].setPosition(86, 630);
   opcion[3].setColor(sf::Color(0, 100, 20));

   opcion[4].setString("SALIR");
   opcion[4].setCharacterSize(60);
   opcion[4].setPosition(1190, 630);
   opcion[4].setColor(sf::Color(0, 100, 20));

   selectedItemIndex = 0;

   return true;
}

void Menu::actualTexto( sf::Text opcionElegida )
{
    opcionElegida.setColor(sf::Color(90, 0, 20));
    ventana1.draw(opcionElegida);
}
void Menu::dibujarSprites()
{
    ventana1.draw(fondo1);
    for(int i=0; i<MAX_NUMBER_OF_ITEMS ;i++){
        ventana1.draw(opcion[i]);
    }

}

void Menu::MoveUp()
{
	if (selectedItemIndex - 1 >= 0)
	{
		menu[selectedItemIndex].setColor(sf::Color::White);
		selectedItemIndex--;
		menu[selectedItemIndex].setColor(sf::Color::Red);
	}
}

void Menu::MoveDown()
{
	if (selectedItemIndex + 1 < MAX_NUMBER_OF_ITEMS)
	{
		menu[selectedItemIndex].setColor(sf::Color::White);
		selectedItemIndex++;
		menu[selectedItemIndex].setColor(sf::Color::Red);
	}
}

void Menu::accion()
{
   if (!inicio)
   {
      std::cout << "Falló al iniciar el juego..." << std::endl;
      return;
   }

   // Empieza el "loop" del juego
   while (ventana1.isOpen())
   {
      // Procesar los eventos de SFML
      sf::Event event;
      while (ventana1.pollEvent(event))
      {
         // Evento: El usuario hace clic en el botón de cerrar [X]
         if (event.type == sf::Event::Closed)
         {
            ventana1.close();
         }

         // Obtener las coordenadas del mouse
            int mouseX = sf::Mouse::getPosition(ventana1).x;
            int mouseY = sf::Mouse::getPosition(ventana1).y;

            int opcionX =620  ;
            int opcionY = 250;


        }


      // Mostrar todo
      dibujarSprites();
      ventana1.display();
   }
}


