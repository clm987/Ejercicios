#include <stdio.h>
#include <stdlib.h>
#include <string.h> // esta biblioteca incluye funciones para manipular cadenas de caracteres


/*
int main()
{
    char cadena[20]= "hola"; // inicializando por extension

    printf("%s", cadena);

    // para delimitar la cadena la funcion usa el simbolo \0




    return 0;
}*/

/*int main()
{
    char cadena[20];

    printf("Ingrese texto: ");
    fflush(stdin);
    //scanf("%s", &cadena);
    gets(cadena);
    printf("%s", cadena);

    return 0;
}*/

/*int main()
{
    char cadena[20]="perro";

    strlen(cadena);
    int cantidad;
    cantidad=strlen(cadena);
    printf("%d", cantidad);

    return 0;
}*/
/*
int main()
{
    char cadena[20];
    char cadena2[50] = "gato";

    strcpy(cadena, cadena2);

    printf("%s", cadena);

    return 0;
}*/

/*int main()
{
    char cadena[20];
    char cadena2[50] = "gato";
    int estado;

    estado= strcmp(cadena2, "armadillo"); // compara el largo de las cadenas;

    printf("%d", estado);

    return 0;
}*/

/*int main()
{
    char cadena[20];
    char cadena2[50] = "gato";
    int estado;

    estado= stricmp(cadena2, "Gato"); // compara el largo de las cadenas sin ser caseSensitive

    printf("%d", estado);

    return 0;
}*/

/*int main()
{
    char cadena[20];
    char cadena2[50] = "gato";
    int estado;


    strupr(cadena2); // pasa la cadena a mayuscula // recibe un puntero a char (char*)
    strlwr(cadena2); // pasa la cadena a minuscula

    puts(cadena2); // muestra por consola

   // printf("%d", estado);

    return 0;
}*/

/*int main()
{
    char cadena[20]= "perro";
    char cadena2[50] = "gato";
    int estado;


    strcat(cadena2, cadena); // concatena dos strings
    puts(cadena2);

   // printf("%d", estado);

    return 0;
}*/


int main()
{
    char nombre[20];
    char apellido[20];
    char apellidoYnombre;

    printf("Ingrese el nombre: ");
    scanf("%s", nombre);
    printf("Ingrese el apellido: ");
    scanf("%s", apellido);

    strcat(nombre,apellido); // concatena dos strings
    puts();

   // printf("%d", estado);

    return 0;
}
