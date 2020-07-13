#include "iostream"
#include "string"
#include "string.h"

const int longcad = 20;
using namespace std;

struct costoPorArticulo
{
    char nombrArticul[longcad + 1];
    int cantidad;
    float precio;
    float costoPorArt;
};



int total(costoPorArticulo productos[], int N)
{
    float sum = 0;
    int i;
    productos[N];
    for ( i = 0; i < N; i++)
    {
        sum = sum + productos[i].costoPorArt;
    }

    cout << "EL total de la compra es: " << sum;
}

int mostrar(costoPorArticulo productos[], int N)
{
    cout << "Mostrando los valores adquiridos: " << endl;
    int i;
    productos[N];
    for ( i = 0; i < N; i++)
    {
        cout << "Nombre del producto: " <<  productos[i].nombrArticul << endl;
        cout << "Cantidad de producto adquirido: " <<  productos[i].cantidad << endl;
        cout << "Precio del producto: " <<  productos[i].precio << "$"<< endl;
        cout << "Total por producto: " <<  productos[i].costoPorArt << "$" << endl << endl;
    }
    total(productos, N);
}

int calcular(costoPorArticulo productos[], int N)
{
    int i;
    productos[N];
    for ( i = 0; i < N; i++)
    {
        productos[i]. costoPorArt = productos[i].cantidad * productos[i].precio;
    }
    mostrar(productos, N);
}

int listas(int N) 
{
    int i;
    string art;
    costoPorArticulo productos[N];    

    cout << "Escriba el nombre del producto, cantidad que compro y su precio." << endl;
    for(i = 0; i < N; i ++)
    {
        cout << "Producto: ";
        getline(cin, art, '\n');
        strncpy(productos[i].nombrArticul, art.c_str(), longcad);
        productos[i]. nombrArticul[longcad] = '\0';
        cout << "Cantidad de productos comprados: ";
        cin >> productos[i]. cantidad;
        cin.ignore(100, '\n');
        cout << "Precio del producto comprado: ";
        cin >> productos[i]. precio;
        cin.ignore(100, '\n');
        cout << endl;

    }
    calcular(productos, N);
}

int main(void)
{
    costoPorArticulo productos[10000];
    int N;
    cout << "ARTICULOS DE SUPERMERCADO" << endl << endl;
    cout << "ingrese la cantidad de productos que lleva: ";
    cin >> N;
    cout << endl;
    cin.ignore(100, '\n');
    listas(N);
}
