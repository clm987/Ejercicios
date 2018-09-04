#include <stdio.h>
#include <stdlib.h>

#define T 10

int main()
{

    int vector [T] = {1,2,8,4,10,6,9,7,3,5};

    int i;
    int j;
    int auxiliar; // siempre del mismo tipo de dato que el vector

    // for aninado para ordenar vectores metodo del burbujeo
    for (i = 0; i<T-1; i++)
    {

        for(j=i+1; j<T; j++)
        {
            if(vector[i]< vector[j])
            {
                auxiliar = vector[i];
                vector[i]= vector[j];
                vector[j]= auxiliar;
            }
        }

    }






    for (i=0; i<T; i++)

    {
        printf("Todos los numeros: %d\n", vector[i]);

    }


/*
    for (i=0; i<T; i++)
    {
        printf("Ingrese un numero : ");
        scanf("%d", &vector[i]);
    }

    for (i=0; i<T; i++)

    {
        printf("Todos los numeros: %d\n", vector[i]);

    }

    for (i=0; i<T; i++)

    {
        if (vector[i] %2==0)
        {
            printf("Todos los numeros pares : %d\n ", vector[i]);
        }


    }




*/





    return 0;
}
