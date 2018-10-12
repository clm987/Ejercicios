#include <stdio.h>
#include <stdlib.h>
#define  MAX 5

int* new_array (int size)
{
    int* retorno = NULL;
    int* auxiliarInt;
    int arrayInt;
    if (size > 0)
       {
        auxiliarInt = (int*) malloc(sizeof(int)*size);
            if (auxiliarInt != NULL)
            {
                arrayInt = auxiliarInt;

            } retorno = 0;
       }

    return retorno;
}


int initArray(int* arrayInt, int limite, int valor)
{
    int retorno = -1;
    int i;
    if (arrayInt != NULL && limite > 0)
       {
            for (i=0; i<limite; i++)
            {
                *(arrayInt+i)= valor;
            }
           retorno = 0;
       }
       return retorno;
}


int showArray (int* arrayInt, int limite)
{
    int retorno = -1;
    int i;
    printf("\n -----> i %p",&i);
    if (arrayInt != NULL && limite > 0)
       {
            for (i=0; i<limite; i++)
            {
                printf ("%p - [%d]\n", (arrayInt+i), i, *(arrayInt+i));
            }
           retorno = 0;
       }
       return retorno;
}

int deleteArray (int* arrayInt)
{
    int retorno = -1;
    if (arrayInt != NULL)
       {
           free(arrayInt);
           retorno = 0;
       }
       return retorno;
}

int* new_array (int size)
int initArray(int* arrayInt, int limite, int valor)
int showArray (int* arrayInt, int limite)
int deleteArray (int* arrayInt)
int main()
{


    int* arrayEnteros;
    new_array(100);
    initArray(arrayEnteros,100,1024);
    showArray(arrayEnteros,100);
    deleteArray(arrayEnteros);


    return 0;
}


