#include <iostream>
#include<stdlib.h>
#include"Metodos.h"
using namespace std;


int main() {
  
  int opcion, dato;
  Nodo *lista = NULL;
  Metodos *metodos = new Metodos();
  
  do{
    cout<<"--------------------------------------------------------\n";
    cout<<"\t.:MENU:.\n";
    cout<<"1. Insertar elementos a la lista entre 0 y 99999\n";
    cout<<"2. Mostrar elementos de la lista\n";
    cout<<"3. Buscar un elemento en la lista\n";
    cout<<"4. Eliminar un nodo de la lista\n";
    cout<<"5. Calcular suma promedio numeros pares\n";
    cout<<"6. Calcular suma promedio numeros impares\n";
    cout<<"7. Calcular numero menor y mayor de la lista\n";
    cout<<"8. Mostrar elementos repetidos de la lista\n";
    cout<<"9. Eliminar elementos repetidos de la lista\n";
    cout<<"10. Ordenar la lista actual de forma decreciente\n";
    cout<<"11. Invertir la lista\n";
    cout<<"12. Salir\n";
    cout<<"--------------------------------------------------------\n";
    cout<<"Opcion: ";
    cin>>opcion;
    
  switch(opcion){
    case 1: cout<<"\nDigite un numero: ";
            cin>>dato;
            metodos->insertarLista(lista, dato);
            cout<<"\n";
            break;
    case 2: metodos->mostrarLista(lista);
            cout<<"\n";
            break;
    case 3: cout<<"\nDigite un número para buscarlo: ";
            cin>>dato;
            metodos-> buscarLista(lista, dato);
            cout<<"\n";
            break;
    case 4: cout<<"\nDigite un número para eliminarlo: ";
            cin>>dato;
            metodos->eliminarNodo(lista, dato);
            cout<<"\n";
            break;
    case 5: metodos->sumapPares(lista);
            cout<<"\n";
            break;
    
    case 6: metodos->sumapImpares(lista);
            cout<<"\n";
            break;
    
    case 7: metodos->calcularMayorMenor(lista);
            cout<<"\n";
            break;
    case 8: metodos->mostrarRepetidos(lista);
            cout<<"\n";
            break;
    case 9: metodos->eliminarRepetidos(lista);
            cout<<"\n";
            break;
    case 10: metodos-> listaDecreciente(lista);
             cout<<"Lista ordenada decrecientemente correctamente\n";
             cout<<"\n";
             break;
    case 11: metodos-> invertirLista(lista);
             cout<<"\n";
             break;  
    }
  }while(opcion != 12);
  return 0;
}

