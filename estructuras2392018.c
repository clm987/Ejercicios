#include <stdio.h>
#include <stdlib.h>

int main()
{
    eALumno listado[T];
    int opcion;


    void inicializaArrrayLogicamenteNota

    int i;
    int bandera =0;

    for (i=0; i<tam; i++)

    {

        if (listafo[i].estado==-1)

        {


            index=i;
            break;

        }

    }


     void cargarAlumnoEspacioLibre (eAlumno listado[], int tam)

    int i;
    int bandera =0;

    bandera= buscarLibre(lista, tam, VACIO) // VACIO ESTA DEFINIDO MEDIANTE DEFINE

        if (bandera != -1)
        {
            listado[bandera] = cargarAlumno[];

        }else
        {
            printf("no hay más espacio! ");

        }


int cargarAlumnoEspacioLibre (eAlumno listado[], int tam) // la funcion puede tener como retorno que pudo hacer o no algo


    int i;
    int bandera =0;

    bandera= buscarLibre(lista, tam, VACIO) // VACIO ESTA DEFINIDO MEDIANTE DEFINE

        if (bandera != -1)
        {
            listado[bandera] = cargarAlumno();

        }

        return bandera


/* modificar una nota por legajo

pedimos el leajo
busco el legajo y comparo
si lo encuentra, pide una nueva nota
si no lo encuentra notifica al usuario

printf("Ingrese Legajo:");
scanf ("%d", %auxInt);

bandera =0
for(i=0; i<T; i++)
{
if (listado[i].estado!= VACIO && auxInt== listado[i].kegajo) // este seria el listado que esta en la estructura
{

  printf ("Ingrese la nueva nota: "),
  scanf ("%d, &listado[i].nota);


}

if (bandera=0)

{ printf ("Legajo inexsitente");



*/


// funcion para hardcodear datos, sirve para hacer las pruebas sin tener que cargar cada vez


void inicializarAlumnos(sAlumno listado[], int tam)

    float promedio[3]=(5,9,7);
    int legajo [3]=(1,2,3);
    char nombre [3 [35]=("juan", "maria", "luis");
    int edad [3]=(18,26,47);
    int i;

    for (i=0; i<3; i++)

    {
        listado[i].legajo=legajo[i];
        listado[i].promedio=promedio[i];
        listado[i].edad=edad[i];
        strcpy(listado[i].nombre, nombre[i]);
        listado[i].estado=1;// cambiamos el estado para que no muestre basura
    }

// Estructuras anidadas. se usan parausar laestructura como un dato dentro de otra estructura
// se definen por arriba de las que la necesitan

typedef struct
{
    int dia;
    int mes;
    int anio;


}eFecha




typedef struct
{
    int id;
    char nombre[50];
    eFecha nacimiento; // luego la estructura principal llama a la estructura otra como dato
    eFecha ingreso;



}eEmpleado

// como usar las estructuras anidadas

int main()

{
    eEmpleado miEmpleado;
    miEmpleado.id=25;
    miEmpleado.nacimiento.dia=20; // se pone otro punto para acceder a esa subestructura
    miEmpleado.nacimiento.mes=10;




    return 0;
}









    return 0;
}
