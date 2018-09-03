#include <stdio.h>
//#include <stdlib.h>
#include "biblioteca.h"
/*
int main()
{

    int x = 10;
    x = incrementarValor(x);
    printf("x=%d", x)


    return 0;
}*/
/*
int main()
{

    int x = 10;
    incrementarValor(&x);
    printf("x=%d", x)


    return 0;
}*/

// calcular el factorial:

int main()
{

    int numero = 5;
    int i;
    long long int resultado = 1; //se toma el tipo de dato longlong para que pueda tomar datos enteros mas grandes.

    for(i=numero; i>=1; i--)
        {
            resultado= resultado * i;

        }

  printf("El factorial es : %lld", resultado);


    return 0;
}
// calcular el factorial de manera recursiva:

int main()
{

    int calcularFactorial (int numero);
    {
        int resultado;

            if(numero==0)
            {
                resultado = 1;
            }
            else{
                 resultado = numero * calcularFactorial(numero-1);
            }

        return resultado;
    }

}
