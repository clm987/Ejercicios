#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcion;

    do
    {
        printf("1. Sumar \n");
        printf("2. Restar \n");
        printf("3. multiplicar \n");
        printf("4. dividir \n");
        printf("5. Salir\n");
        printf("6. Ingrese una opcion: \n");
        scanf("%d", &opcion);

        opcion= ingresarOpcion();

    while (opcion != 5)
    {

        switch(opcion)
        {
            case 1;
                printf("Estoy sumando!!!");
                // aqui insertamos la funcion sumar que hemos hecho
                break;
            case 2;
                printf("Estoy restando!!!");
                break;
            case 3;
                printf("Estoy multiplicando!!!");
                break;
            case 4;
                printf("Estoy dividiendo!!!");
                break;
            case 5;
                 opcion = 5;
                break;
        }

    system("pause");
    system("cls");

    }while (opcion != 5);








    return 0;
}


int ingresarOpcion (void)

{
    int opcion;

    printf("Ingrese un numero: ");
    scanf("%d", opcion)

    return opcion



}
