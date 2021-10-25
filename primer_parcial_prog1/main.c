#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*1. Crear una funci�n llamada aplicarDescuento
que reciba como par�metro el precio de un producto
y devuelva el valor del producto con un descuento del 5%.
Realizar la llamada desde el main.

2. Crear una funci�n que se llame contarCaracteres que reciba una cadena de caracteres como
primer par�metro y un car�cter como segundo y devuelva la cantidad de veces
que ese car�cter aparece en la cadena

3. Dada la estructura Notebook(id, procesador, marca, precio)
 generar una funci�n que permita ordenar un array de dicha estructura
 por marca. Ante igualdad de marca deber� ordenarse por precio. Hardcodear datos y mostrarlos desde el main. *


*/
#define TAM 3
typedef struct{
int id;
char procesador[20];
char marca[20];
float precio;
}eNotebook;

int contarCaracteres(char cadena[], char caracter);
int aplicarDescuento(int total);
int main()
{

    char palabra[] = "mascotas";
    int precio=100;


    printf("Funcion 2\n\n");
    printf("La letra s aparece en la palabra %s  %d veces\n\n",palabra, contarCaracteres(palabra, 's'));
    printf("Funcion 1\n\n");
    printf("%d\n\n", aplicarDescuento(precio));



    /*  eNotebook marcas[TAM]=
    {
        {"Lg"},
        {"Samsung"},
        {"Lenovo"},
        {"Logitech"},
        {"Apple"}};*/

    return 0;
}
int contarCaracteres(char cadena[], char caracter)
{
    int cont = 0;

    for(int i = 0; i < strlen(cadena); i++)
    {
        if(cadena[i] == caracter)
        {
            cont++;
        }

    }

    return cont;
}
int aplicarDescuento(int total)
{

    total=total - total * 5/100;

    return total;
}
