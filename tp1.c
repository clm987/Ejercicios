
/****************************************************************************************************************************
Programa: Calculadora
Objetivo: Permite ingresar numeros positivos y realizar las siguientes operaciones matemáticas:
        -Suma
        -Resta
        -Multiplicación
        -División
        -Factorial
Versión: 0.1 04/09/2018.  Autor: Carlos López.
*****************************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero1;
    int numero2;
    int resultado;
    int opcion;


int ingresarOpcion (void)

{

        int opcion;
        printf("Ingrese un numero: ");
        scanf("%d", &opcion);
        return opcion;
}

   // int opcion;

    do
    {

       printf("Menu de opciones: \n");
       printf("1. Sumar \n");
       printf("2. Restar \n");
       printf("3. multiplicar \n");
       printf("4. dividir \n");
       printf("5. Salir\n");
       printf("Ingrese una opcion: \n");
        scanf("%d", &opcion);

        opcion = ingresarOpcion();

            switch(opcion)
            {
                case 1:
                    printf("Ingrese un numero: ");
                    scanf("%d",numero1);
                    printf("Ingrese el otro numero: ");
                    scanf("%d",numero2);
                    float suma (float numero1, float numero2); // aqui insertamos la funcion sumar que hemos hecho*/
                    //printf("entro al switch \n" );
                    break;
                case 2:
                    printf("Estoy restando!!!");
                    break;
                case 3:
                    printf("Estoy multiplicando!!!");
                    break;
                case 4:
                    printf("Estoy dividiendo!!!");
                    break;
                case 5:
                     opcion = 5;
                    break;
            }

    /*system("pause");
    system("cls");*/

    }while (opcion != 5);


    float suma (float numero1, float numero2)
    {
    float suma;
    suma= numero1 + numero2;
    return suma;
    }

  /* int ingresarOpcion (void)

    {

        int opcion;

        printf("Ingrese un numero: ");
        scanf("%d", &opcion);

        return opcion;
    }*/


















































    return 0;
}
