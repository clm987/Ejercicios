#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("Primer ejercicio de prueba!\n");
    // printf("Primer ejercicio de prueba!\n");
    /* Tipo de datos:
        Enteros: int 1; 9; -4; 4 bytes
        flotantes: float 3.24; 5/3; -2.9; 4 bytes
        caracter: char 'a'; '?'; '4' las cadenas de texto van en comillas dobles "" 1 byte
        nota: el + no funciona para concatenar, solo la (,)
        Mascaras de entrada: es un simbolo que sirve para se reemplazado por la variable a mostrar
            int %d
            float %f
            char %c
            scanf : sirve para asignar un dato tomado del usuario y asignarlo a una direccion de memoria de la variable
                scanf("mascara del tipo de variable", &variable) el operador & trae la direccion de memoria.
            formatear un flotante: %.2f corta en dos decimales

         */

        int unNumero;
        float unFlotante;
        char unChar;
        float suma;

        unNumero=559;
        unFlotante=3.29;
        unChar= 'u';
        suma= unNumero+unFlotante

        //printf("El numero entero es: %d\n El numero flotante es: %f\n El caracter es: %c",unNumero,unFlotante,unChar);
                //unFlotante=3.29;
        //unChar= 'u';
        printf("Ingrese un numero: ");
        scanf("%d", &unNumero);
        //printf("El numero es: %d", unNumero);

        printf("Ingrese un caracter: ");
        fflush(stdin);
        //para win
        setbuf(stdin,NULL);
        //PARA LINUX
        scanf("%c", &unChar);
        printf("El char es : %c", unChar);
        printf("El numero es: %d", unNumero);


    return 0;
}
