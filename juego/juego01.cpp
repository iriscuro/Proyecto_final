#include <windows.h>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80
#define ESC 27

char tecla;
int velocidad = 10;

void gotoxy(int x, int y)
{
    HANDLE hCon;
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hCon,dwPos);
}

class Cjuego
{
private:
    int velocidad;
public:
    Cjuego(int);
    void mostrarPared(void);
};

Cjuego::Cjuego(int _velocidad)
{
    velocidad=_velocidad;
}
void Cjuego::mostrarPared(void)
{
    int tam=28;
    for(int i=0; i < tam; i++)
    {
        gotoxy (i, 0); printf ("%c", 205);
        gotoxy(i, tam); printf ("%c", 205);
    }
    for(int v=0; v < tam; v++)
    {
        gotoxy (0,v);  printf ("%c", 186);
        gotoxy(tam,v);  printf ("%c", 186);
    }
}


class Cmovil
{
private:
    int x,y;
public:
    Cmovil(int,int);
    void mostrar(void);
    void mover(char);


};
Cmovil::Cmovil(int _x, int _y)
{
    x=_x;
    y=_y;
}


void Cmovil::mostrar(void)
{
    int i,j;
    for(i=1;i<= 3; i++)
    {
       for(j=1;j<=4; j++)
        {
            if(i==2 or j==2 or (i==1 and j==4) or (i==3 and j==4))
            {
                gotoxy (x+i, y+j); printf ("%s", "*");
            }
            else
            {
                gotoxy (x+i, y+j); printf ("%s", " ");
            }
        }
    }

}
void Cmovil::mover(char tecla)
{

    int i,j;
    for(i=1;i<= 3; i++)
    {
       for(j=1;j<=4; j++)
        {
          gotoxy (x+i, y+j); printf ("%s", " ");
        }
    }

    switch(tecla)
     {
        case ARRIBA : y--;break;
        case ABAJO : y++;break;
        case DERECHA : x++;break;
        case IZQUIERDA : x--;break;
    }
    mostrar();
}



int main()
{
    Cmovil *movil;
    Cjuego *juego;
    movil=new Cmovil(6,6);
    movil->mostrar();

    juego=new Cjuego(30);
    juego->mostrarPared();
     while(tecla != ESC )
    {
        if(kbhit())
        {
            tecla = getch();
            movil->mover(tecla);
            Sleep(velocidad);
        }
    }
    return 0;
}


