#ifndef BSE_H
#define BSE_H

#include <SFML/Graphics.hpp>
class Bse
{
    protected:
        sf::Sprite m_sprite;
        sf::Vector2f m_direccion;

        int m_ancho_nivel;
        int m_alto_nivel;

    public:
        Bse(){}
        float obtenerX();
        float obtenerY();



};

#endif // BSE_H
