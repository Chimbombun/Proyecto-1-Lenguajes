#include <iostream>
#include "Metodos.h"
using namespace std;

void Metodos::insertarLista(Nodo *&lista, int n){
  Nodo *nuevo_nodo = new Nodo();
  nuevo_nodo -> dato = n;
  Nodo *anterior = NULL;
  Nodo *aux1 = lista;
  Nodo *aux2;

  while((aux1 != NULL)&& (aux1->dato < n)){
    aux2 = aux1;
    aux1 = aux1->siguiente;
  }
  if(lista==aux1){
    lista = nuevo_nodo;
  }
  else{
    aux2-> siguiente = nuevo_nodo;
  }
  nuevo_nodo-> siguiente = aux1;

  cout<<"\tElemento "<<n<<" insertado a la lista correctamente\n";
}


void Metodos::mostrarLista(Nodo *lista){
  Nodo *actual = new Nodo();
  actual = lista;

  while(actual != NULL){
    cout<<actual->dato<<" -> ";
    actual = actual->siguiente;
  }

  if(lista==NULL){
    cout<< "La lista aún no cuenta con datos ingresados\n";
  }
}

void Metodos::buscarLista(Nodo *lista, int n){
  bool bandera = false;
  Nodo *actual = new Nodo();
  actual = lista;

  while((actual != NULL)&&( actual->dato <= n)){
    if(actual->dato==n){
      bandera = true;
    }
    actual = actual ->siguiente;
  }
  if(bandera == true){
    cout<<"El número "<<n<<" SI ha sido encontrado en la lista\n";
  }
  else{
    cout<<"El número "<<n<<" NO ha sido encontrado en la lista\n";
  }
}

void Metodos::eliminarNodo(Nodo *&lista, int n){
  if(lista != NULL){
    Nodo *aux_borrar;
    Nodo *anterior = NULL;

    aux_borrar = lista;

    while((aux_borrar != NULL)&&(aux_borrar->dato !=n)){
      anterior = aux_borrar;
      aux_borrar = aux_borrar->siguiente;
    }

    if(aux_borrar == NULL){
      cout<<"El número no ha sido encontrado\n";
    }
    else if(anterior == NULL){
      lista = lista->siguiente;
      delete aux_borrar;
      cout<<"El número "<<n<<" ha sido eliminado correctamente de la lista\n";
    }
    else{
      anterior->siguiente = aux_borrar->siguiente;
      delete aux_borrar;
      cout<<"El número "<<n<<" ha sido eliminado correctamente de la lista\n";
    }
  }
}

void Metodos::mostrarRepetidos(Nodo *lista) {
  Nodo *actual = new Nodo();
  actual = lista;
  Nodo *siguiente = new Nodo();
  siguiente = actual->siguiente;
  while (actual != NULL) {
   
    while (siguiente != NULL) {
      if (actual->dato == siguiente->dato) {
         cout << "El número " << siguiente->dato
             << " se encuentra duplicado\n";
      }
      siguiente = siguiente->siguiente;
    }
    actual = actual->siguiente;
    siguiente = actual->siguiente;
  }
  
}

void Metodos::eliminarRepetidos(Nodo *&lista){
  Nodo *actual = new Nodo();
  actual = lista;
  Nodo* siguiente = new Nodo();
  siguiente = actual->siguiente;

  while(actual!=NULL){
    while(siguiente !=NULL){
      if(actual->dato == siguiente->dato){
        eliminarNodo(lista, siguiente->dato);
      }
      siguiente = siguiente->siguiente;
    }
    actual=actual->siguiente;
    siguiente = actual-> siguiente;
  }
}

void Metodos::calcularMayorMenor(Nodo *lista){
   int mayor=0,menor=99999; 

   while(lista != NULL){//recorremos la lista 
       if((lista->dato) > mayor){//calculando el mayor elemento
        mayor = lista->dato; 
      }
       if((lista->dato) < menor){//calculando el menor elemento
        menor = lista->dato;
      }
    lista = lista->siguiente; //avanzamos una posicion en lista  
  }

  cout<<"\nEl mayor elemento es: "<<mayor<<endl;
  cout<<"El menor elemento es: "<<menor<<endl; 
}

void Metodos::sumapPares(Nodo *lista){
  Nodo *actual = new Nodo();
  actual = lista;
  double suma = 0;
  double contador = 0;
  while (actual != NULL) {
    if (actual->dato % 2 == 0) {
      suma += actual->dato;
      contador++;
    }
    actual = actual->siguiente;
  }
  if (contador == 0) {
    cout << "No hay números pares en la lista\n";
  } else {
    cout << "El promedio de los números pares es: " << suma / contador<<"\n" ;
  }
}

void Metodos::sumapImpares(Nodo *lista) {
  Nodo *actual = new Nodo();
  actual = lista;
  double suma = 0;
  double contador = 0;
  while (actual != NULL) {
    if (actual->dato % 2 != 0) {
      suma += actual->dato;
      contador++;
    actual = actual->siguiente;
  }
  if (contador == 0) {
    cout << "No hay números impares en la lista\n";
  } else {
    cout << "El promedio de los números impares es: " << suma / contador
         << "\n";
  }
}

void Metodos::invertirLista(Nodo *lista) {
  if (lista != NULL) {
    invertirLista(lista->siguiente);
    cout << lista->dato << " -> ";
  }
}

void Metodos::listaDecreciente(Nodo *&lista) {
  Nodo *aux1;
  Nodo *aux2;
  int aux;
  aux1 = lista;
  while (aux1->siguiente != NULL) {
    aux2 = aux1->siguiente;
    while (aux2 != NULL) {
      if (aux1->dato < aux2->dato) {
        aux = aux1->dato;
        aux1->dato = aux2->dato;
        aux2->dato = aux;
      }
      aux2 = aux2->siguiente;
    }
    aux1 = aux1->siguiente;
  }
}