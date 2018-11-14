/*#include "manejar.h"
#include <assert.h>

//inicializo mi instancia a 0 o nulo
manejar *manejar::sIntancia = nullptr;

//definicion del constructor
manejar::manejar()
{
 //Solo permite un Manejador de Assets si no manda una excepcion

 //macro assert que verifica si la expresion es correcta
 assert(sIntancia == nullptr);
 sIntancia = this;
}

//definicion de obtenerTextura

sf::Texture &manejar::obtenerTextura(std::string const &nombreArchivo)
{
 auto &mapTextura = sIntancia->m_Texturas;

 //observamos si la textura esta lista para cargarlas
 auto pairFound = mapTextura.find(nombreArchivo);

 //Si esta lista regresamos la textura
 if (pairFound != mapTextura.end())
 {
  return pairFound->second;
 }

 //si no carga la textura y la regresamos
 else
 {
  //Creamos el elemento del map de la textura
  auto &textura = mapTextura[nombreArchivo];
  textura.loadFromFile(nombreArchivo);
  return textura;
 }
}
manejar::manejar()
{
    //ctor
}

manejar::~manejar()
{
    //dtor
}
*/
