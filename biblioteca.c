#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
//aca colocamos el codigo de cada una de las variables

/*int pedirEntero (char texto[]);

{
    int numero;

    printf("%s", texto);
    scanf("%d", &numero);

    return (numero);
}

int incrementarValor(int x);

{
    x++;

    return x;

}*/

void incrementarValor(int* y); // para que tome la direccion de memoria le anteponemos un * (esto es el puntero).

{
    (*y)++;



}
