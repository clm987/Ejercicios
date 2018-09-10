#include <stdio.h>
#include <stdlib.h>

    int inicializaVector (int vector[], int cantidadDeElementos);
    int mostrarVector (int vector[], int cantidadDeElementos);

int main()
{
    int vector[5];
    inicializaVector(vector,5);
    mostrarVector(vector, 5);

    return 0;
}


int inicializaVector (int vector[], int cantidadDeElementos)

{
 for (;cantidadDeElementos>0;cantidadDeElementos--)
    {

     vector[cantidadDeElementos]=-1;

    }
 return 0;
}

int mostrarVector (int vector[], int cantidadDeElementos)
{
    for(;cantidadDeElementos>0;cantidadDeElementos--)

    {
        printf("%d\n", vector[cantidadDeElementos]);

    }
    return 0;
}
