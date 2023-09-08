#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
    int dato;
    Nodo *der;
    Nodo *izq;
};

//Prototipos
Nodo *crearNodo(int);

Nodo *arbol = NULL;

int main(){

    getch();
    return 0;
}

//Funcion para crear un nuevo nodo
Nodo *crearNodo(int n){
    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->dato = n;
    nuevo_nodo->der = NULL;
    nuevo_nodo->izq = NULL;

    return nuevo_nodo;

}

//Funcion para  insertar elementos en el arbol
void insertarNodo(Nodo *&arvol, int n){
    if(arbol == NULL){ //SI el  arbol  esta vacio
        Nodo *nuevo_nodo = crearNodo(n);
        arbol = nuevo_nodo;
    }
    else{ //si el arbol tiene un nodo mas

        int valorRaiz = arbol->dato;
        if(n<valorRaiz){ //si el elemento es menor a la raiz insertamos un izq
            insertarNodo(arbol->izq,n);
        }

        else{ //si el elemento es mayor a la raiz , insertamos en dar
        insertarNodo(arbol->der,n);
            

        }
         
    }
}
