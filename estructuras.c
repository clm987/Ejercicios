#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define A 3

/*
Usamos la funcion typedef junto con la palabra reservada struct para definir la estructura
las estructuras van en el .h junto con todas las funciones
se definen las variables de la estructura y despues se le da un nombre a toda la estrucura


*/
typedef struct

{
    int legajo;
    char nombre[50];
    float altura;
    int nota;
}eAlumno;

void mostrarUnAlumno(eAlumno);
eAlumno cargarUnAlumno();
void cargarListadoDeAlumnos(eAlumno[], int);
void mostrarListadoDeAlumnos((eAlumno listado[], int tam));

int main()
{
    eAlumno miAlumno;
    int i;

    /*
    printf("Ingrese legajo: ");
    scanf("%d", &miAlumno.legajo);
    printf("Ingrese nombre: ");
    scanf("%s", miAlumno.nombre);
    printf("Ingrese altura: ");
    scanf("%f", &miAlumno.altura);
    printf("Ingrese nota: ");
    scanf("%d", &miAlumno.nota);
    //printf("%d\n\n", sizeof (eAlumno));
    printf("%d--%s--%f--%d\n", miAlumno.legajo, miAlumno.nombre, miAlumno.altura, miAlumno.nota);
   mostrarUnAlumno(miAlumno);*/

   //eAlumno miAlumnoMain;

   eAlumno listadoMain[A];
   for(i=0; i<A; i++)
   {
       listadoMain[i] = cargarUnAlumno();

   }

   //miAlumnoMain = cargarUnAlumno();
   mostrarUnAlumno(miAlumno);

   for(i=0; i<A; i++)
   {
       mostrarUnAlumno(listadoMain[i]);

   }


    return 0;
}

void mostrarUnAlumno(eAlumno unAlumno)

{
     eAlumno miAlumno;
     printf("%d--%s--%f--%d\n", miAlumno.legajo, miAlumno.nombre, miAlumno.altura, miAlumno.nota);
}



eAlumno cargarUnAlumno()
{
     eAlumno miAlumno;

    printf("Ingrese legajo: ");
    scanf("%d", &miAlumno.legajo);
    printf("Ingrese nombre: ");
    scanf("%s", miAlumno.nombre);
    printf("Ingrese altura: ");
    scanf("%f", &miAlumno.altura);
    printf("Ingrese nota: ");
    scanf("%d", &miAlumno.nota);

    //printf("%d--%s--%f--%d\n", miAlumno.legajo, miAlumno.nombre, miAlumno.altura, miAlumno.nota);

    return miAlumno;
}

void cargarListadoDeAlumnos(eAlumno listado[], int tam)
{
    int i;
    //int tam;
    eAlumno listadoMain[A];
    for(i=0; i<A; i++)
   {
       listadoMain[i] = cargarUnAlumno();

   }
}




void mostrarListadoDeAlumnos(eAlumno listado[], int tam)

{
    int i;
    eAlumno listadoMain[A];
     //eAlumno miAlumno;
    for(i=0; i<A; i++)
   {
       //listadoMain[i] = ;
       printf("%d--%s--%f--%d\n", miAlumno[i].legajo, miAlumno[i].nombre, miAlumno[i].altura, miAlumno[i].nota);

   }
}


/*
void ordenarPorNombre (eAlumno, int)

int i;
int j;

eAlumno auxAlumno;
for (i=0; i<tam-1;i++ )
{
    for(j=i+1; j<tam; j++){
        if

    }
}*/
