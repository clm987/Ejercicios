#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define T 3

//int main()
/*
{

    char cadena1[5];
    char cadena2[100] = "gato perro gatxs";
    strncpy(cadena1, cadena2,4);
    puts(cadena1);

    return 0;
}*/

/*
int main()
{
    char nombre[20];
    char apellido[20];
    char apellidoYnombre[41];
    char buffer[100]; // se crea para guardar temporalmente datos a validar entre otros
    int i;

    printf("Ingrese el nombre: ");
    fflush(stdin);
    gets(buffer);

        while(strlen(buffer)>19)
        {
            printf("reingrese nombre: ");
            fflush(stdin);
            gets(buffer);
        }
    strcpy(nombre,buffer);

   printf("Ingrese el apellido: ");
    fflush(stdin);
    gets(buffer);

        while(strlen(buffer)>19)
        {
            printf("reingrese apellido: ");
            fflush(stdin);
            gets(buffer);
        }
    strcpy(apellido,buffer);

    strcpy(apellidoYnombre, apellido);
    strcat(apellidoYnombre, ",");
    strcat(apellidoYnombre, nombre);
    strlwr(apellidoYnombre);

    apellidoYnombre[0]=toupper(apellidoYnombre[0]);

        for(i=0; i<strlen(apellidoYnombre); i++)

            {
                if(apellidoYnombre[i]==' ') //if (isspace(pellidoYnombre[i]))
                {
                    apellidoYnombre[i+1]=toupper(apellidoYnombre[i+1]);
                }
            }




    puts(apellidoYnombre);

   // printf("%d", estado);



           void insertion(int data[],int len);

int main()
{
         int vector[5]= {3,4,5,6,7};
         int i,j;
         int temp;
         insertion(vector, 5);
         for(i=1;i<len;i++)
         {
            temp = data[i];
            j=i-1;
                while(temp<data[j] && j>=0) // temp<data[j] o temp>data[j]
                {
                 data[j+1] = data[j];
                 j--;
                }
        data[j+1]=temp; // inserción
         }
}*/

int main()
{

// vectores paralelos

    int legajos [T];
    char nombres [T][21];
    int notas [T];
    float alturas [T];
    int i;
    char mail [T][50];

    for (i=0; i<T; i++)
    {
        printf("Ingrese legajo: \n");
        scanf("%d", &legajos[i]);
        printf("ingrese nombre: \n");
        fflush(stdin);
        gets(nombres [i]);
        printf("Ingrese nota: \n");
        scanf("%d", &notas[i]);
        printf("Ingrese altura: \n");
        scanf("%f", &alturas[i]);

    }

    printf(" $4f, %20s %s  %5s \n" "legajo", "nombre", "nota", "altura\n");

    for(i=0; i<T; i++)
    {
        printf("%d %s %d %.2f\n", legajos[i], nombres[i], notas[i]);
    }




//funcion para hacer lo anterior

void cargarAlumnos (int legajos [], nombres[][21], int notas[], int alturas[] ));
void mostrarAlumnos (int legajos [], nombres[][21], int notas[], int alturas[] ));


cargarAlumnos(legajos, nombres, alturas, notas, T)



void mostrarAlumnos (int legajos [], nombres[][21], int notas[], int alturas[] ));
mostrarAlumnos (legajos, nombres, alturas, notas, T)

printf(" $4f, %20s %s  %5s \n" "legajo", "nombre", "nota", "altura\n");


















return 0;

 }
//}
