#ifndef SCORE_H
#define SCORE_H
#include "SFML/Graphics.hpp"
class score
{
    public:
        score();
        void show(sf::RenderWindow &ventana);
        void addPointPlayer();
        void addPointIa();
    private:
        sf::Font *fuente1;
        sf::Text *textPlayer;
        sf::Text textIA;
        unsigned int puntoPlayer;
        unsigned int pointIA;
};

#endif // SCORE_H
