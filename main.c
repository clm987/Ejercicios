#include <stdio.h>
#include <stdlib.h>

/* funciones: bloque de codigo modularizado que se usa con una funcion prefijada.
    ventajas del uso de funciones: Mantenimiento mas rapido. Mas facil de debugear.
    división de las tareas. reutilización de codigo.


   Problema: sumar dos numeros y mostrar resultado.

    Instancias de funcion:
    1) Declarar la funcion // prototipo //firma
    2) llamada a la funcion
    3) desarrollo de la funcion

    queDevuele comoSeLlama (queRecibe)

    Lo que se define dentro de una funcion tiene alcance local dentro de esa funcion
    si se define afuera tiene alcance global y puede ser visto por todas las funciones

*/


/*
int main()
{

    int numeroUno;
    int numeroDos;
    int suma;

    printf("Ingrese el primer numero: ");
    scanf("%d", &numeroUno);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &numeroDos);

    suma = numeroUno + numeroDos;


    printf("La suma de los dos numeros es : %d", suma);

    return 0;
}

*/

/*
void sumar1 (void); // Prototipo. el parentesis se puede dejar vacio o llenar con "void" si esta vacio asume que sera un entero "int"

int main()
{

    sumar1();
    return 0;
}


void sumar1 (void)
{

    int numeroUno;
    int numeroDos;
    int suma;

    printf("Ingrese el primer numero: ");
    scanf("%d", &numeroUno);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &numeroDos);

    suma = numeroUno + numeroDos;


    printf("La suma de los dos numeros es : %d", suma);

}
*/

/*void sumar2 (int, int); //recibe datos pero no retorna

int main()
{

    int numeroUno;
    int numeroDos;
    printf("Ingrese el primer numero: ");
    scanf("%d", &numeroUno);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &numeroDos);

    sumar2(numeroUno,numeroDos);

    return 0;
}


void sumar2 (int, int);
{

    int suma;

    printf("Ingrese el primer numero: ");
    scanf("%d", &numeroUno);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &numeroDos);

    suma = numeroUno + numeroDos;


    printf("La suma de los dos numeros es : %d", suma);

}


void sumar3 (int, int); // no recibe datos pero retorna

int main()
{
    int suma;


    sumar = sumar3();
    printf("La suma es: %d", suma);


    return 0;
}


void sumar2 (int, int);
int sumar3 (void);
{
    int numeroUno;
    int numeroDos;
    int suma;

    printf("Ingrese el primer numero: ");
    scanf("%d", &numeroUno);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &numeroDos);

    suma = numeroUno + numeroDos;


}

*/

int sumar4 (int numeroUno, int numeroDos); // no recibe datos pero retorna

int main()
{
    int numeroUno;
    int numeroDos;
    int suma;

    printf("Ingrese el primer numero: ");
    scanf("%d", &numeroUno);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &numeroDos);

    suma = numeroUno + numeroDos;

    printf("La suma es : %d", suma);

    return 0;
}
int sumar4 (int numeroUno, int numeroDos);

{
    int suma;
    suma = numeroUno + numeroDos;
    return suma;

}





