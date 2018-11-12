///https://www.youtube.com/watch?v=hRHhqF3Fwhc       https://www.youtube.com/watch?v=z0rZ8epfYkw
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int contadorArreglo=0;
int V1,V2;
struct Nodo
{
    char dato;
    char dato2;
    Nodo *siguiente;
    Nodo *siguiente2;
};
char buscador;
void mostrarLista(Nodo *);
void insertarLista (Nodo *&, char);
void mostrarLista2(Nodo *);
void insertarLista2 (Nodo *&, char);
void sacarpila(Nodo *&, char);
void menu();
Nodo *lista = NULL;
Nodo *lista2 = NULL;
int main()
{
    menu();
    getch();
    return 0;
}
void menu()
{
    char dato,variable;
    int opcion;
    do
    {
        cout<<"\t MENU.\n";
        cout<<"1.- Insertar expresion\n";
        cout<<"2.- MOstrar elementos de la lista\n";
        cout<<"Salir"<<endl;
        cin>>opcion;
        switch(opcion)
        {
        case 1:cout<<"\nDigite expresion \n(finalizar expresion oprima p)\n"<<endl;
            do
            {
                cin>>dato;
                variable=dato;


                if(dato=='+'||dato=='-'||dato=='*'||dato=='/'){
                        if (buscador==dato){
                             insertarLista(lista,dato);
                             while (lista2!=NULL){
                                sacarpila(lista2, dato);
                        if (lista2 != NULL){
                                cout<<" \t  NULL\n  ";

                        }

                        }

                         insertarLista2(lista2,buscador);

                        }else

                       /*if (variable==buscador){
                        mostrarLista2(lista2);
                        while (lista2!=NULL){
                                sacarpila(lista2, dato);
                        if (lista2 != NULL){
                                cout<<" \t  NULL\n  ";

                        }

                        }

                       }
                       /* if ( buscador=='*'&& dato=='+'){
                            cout<<"\nDigite expresion \n(finalizar expresion oprima p)\n"<<endl;
                       cin>>dato;
                variable=dato;
                 insertarLista(lista,dato);
                        V1='*';
                        V2= '+';
                        while (lista2!=NULL){
                                sacarpila(lista2, dato);
                        if (lista2 != NULL){
                                cout<<" \t  NULL\n  ";

                        }

                        }
                        insertarLista(lista,V1);
                        insertarLista2 (lista2,V2);


                       }
                       if (variable=='-'&&buscador=='+'){
                        mostrarLista2(lista2);
                        while (lista2!=NULL){
                                sacarpila(lista2, dato);
                        if (lista2 != NULL){
                                cout<<" \t  NULL\n  ";

                        }

                        }

                       }

                       if ((variable=='*' || variable== '/')&& buscador=='+'){
                        mostrarLista2(lista2);
                        while (lista2!=NULL){
                                sacarpila(lista2, dato);
                        if (lista2 != NULL){
                                cout<<" \t  NULL\n  ";

                        }

                        }
                       }*/
                       buscador=dato;
                    insertarLista2(lista2,buscador);
                }
                insertarLista(lista,dato);
            }
            while(dato != 'p');
            system ("pause");
            break;
        case 2:
            mostrarLista(lista);
            mostrarLista2(lista2);
            cout<<"\n";
            system ("pause");
            break;

        }
        system("cls");
    }
    while(opcion != 3);
}
void insertarLista (Nodo *&lista, char n)
{

    Nodo *nuevo_nodo =new Nodo ();
if (n=='p'){
    return;
}

    nuevo_nodo->dato=n;
    Nodo *aux1= lista;
    Nodo* aux2;
    while ((aux1 !=NULL)) //&& (aux1->dato <n)
    {
        aux2=aux1;
        aux1=aux1->siguiente;
    }
    if (lista == aux1)
    {
        lista=nuevo_nodo;
    }
    else
    {
        aux2->siguiente=nuevo_nodo;
        aux2->siguiente=nuevo_nodo;
    }
    nuevo_nodo->siguiente= aux1;

}
void insertarLista2 (Nodo *&lista2, char n2)
{

    Nodo *nuevo_nodo2 =new Nodo ();

     nuevo_nodo2->dato2=n2;
    Nodo *aux12= lista2;
    Nodo* aux22;
    while (aux12 !=NULL)/// && (aux12->dato2 <n2))
    {
        aux22=aux12;
        aux12=aux12->siguiente2;
    }
    if (lista2 == aux12)
    {
        lista2=nuevo_nodo2;
    }
    else
    {
        aux22->siguiente2=nuevo_nodo2;
        aux22->siguiente2=nuevo_nodo2;
    }
    nuevo_nodo2->siguiente2= aux12;


}
void mostrarLista(Nodo * lista)
{

    Nodo *actual= new Nodo();

    actual= lista;
    while (actual !=NULL)
    {cout<<actual->dato<<"  ";

        actual=actual ->siguiente;
    }
}
void mostrarLista2(Nodo * lista2)
{

    Nodo *actual2= new Nodo();
    actual2= lista2;
while (actual2 !=NULL)
    {
        cout<<actual2->dato2<<"  ";


insertarLista(lista,actual2->dato2);
        actual2=actual2 ->siguiente2;

}}

void sacarpila(Nodo *& pilass, char no){
Nodo *auxx=pilass;
no=auxx->dato2;
pilass= auxx->siguiente2;
delete auxx;


}
