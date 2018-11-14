#ifndef PREMIOS_H
#define PREMIOS_H
#include "SFML/Graphics.hpp"
using namespace std;
using namespace sf;
class premios
{
    public:
        RectangleShape *frutas,*monedas;
        RenderWindow *mi_ventana;
        vector<IntRect>framer;
        float speed;
        int x,y;
        Sprite sprite;

        void pospremios(int a,int b);
        premios();
        setVentana(RenderWindow *v);
        void dibujar();
        ~premios();
};

#endif // PREMIOS_H
