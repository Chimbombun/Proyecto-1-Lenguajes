#ifndef METODOS_H
#define METODOS_H
#include "Nodo.h"

class Metodos{

public:
  void insertarLista(Nodo *&,int);
  void mostrarLista(Nodo *);
  void buscarLista(Nodo *, int);
  void eliminarNodo(Nodo *&, int);
  void calcularMayorMenor(Nodo *lista);
  void mostrarRepetidos(Nodo *);
  void eliminarRepetidos(Nodo *&);
  void sumapPares(Nodo *);
  void sumapImpares(Nodo *);
  void invertirLista(Nodo *lista);
  void listaDecreciente(Nodo *&lista);
};
#endif