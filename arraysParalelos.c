#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define T 2

/*
Estructura: es una agrupacion de datos que comparte un espacio de memoria.


*/

void cargarAlumnos (int [], float[], char[],int []);
void ordenarPornombre (int legajos []), char nombres [], int notas, float alturas[], int tam);

int main()
{



int notas[T];
float alturas[T];
char nombres[T][21];
int legajos[T];
int i;




void ordenarPornombre (int legajos []), char nombres [], int notas, float alturas[], int tam);
{
    int auxiliar;
    float auxFloat;
    char auxString[100];
    int i;
    int j;

    for (i=0; i<tam-1; i++)
    {
        for (j=i+1; j<tam; j++)
        {
            if (stricmp(nombres[i], nombres[j]>0))
            {
                strcpy(auxstring, nombres[i]);
                strcpy(nombres[i], nombres[j]);
                strcpy(nombres[j], auxstring);

                auxint = legajos[i];
                legajos[i]=legajos[j];
                legajos[j]=auxInt;

                auxint = legajos[i];
                notas[i]=notas[j];
                notas[j]=auxInt;

                auxfloat = alturas[i];
                alturas[i]=alturas[j];
                alturas[j]=auxInt;
            }
        }
    }


}






















    return 0;
}
