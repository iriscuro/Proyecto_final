
#ifndef MENU_H
#define MENU_H
#include <SFML/Graphics.hpp>
#define MAX_NUMBER_OF_ITEMS 5
class Menu
{
    /*
        sf::Text opcion1;
        sf::Text opcion2;
        sf::Text opcion3;
        sf::Text opcion4;
        sf::Text opcion5;
*/


        sf::RenderWindow ventana1;
        //sf::IntRect rectangulo;
        bool inicio;
        int tiem;
        bool inicializa();
        sf::Font fuente1;
        sf::Font fuente2;

        sf::Texture tx_fondo1;
        sf::Texture tx_fondo2;
        sf::Sprite fondo1;
        sf::Sprite fondo2;
        void evento();
        void dibujarSprites();
        void actualTexto(sf::Text opcionElegida);
        void mostrarL();

        void MoveUp();
        void MoveDown();
        int GetPressedItem() { return selectedItemIndex; }

    public:
        Menu();
        int selectedItemIndex;
        void accion();
        sf::Text opcion[MAX_NUMBER_OF_ITEMS];




};

#endif // MENU_H


