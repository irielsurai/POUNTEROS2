#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* pEntero = (int*)calloc(sizeof (int),5);  // el (int*) es un casteo, forzar el tipo //Inicializa en 0 todos los elementos del array
    int i;
    for (i=0;i<5;i++)
    {
        printf("%d - ",pEntero[i]);
    }

    free (pEntero); //funcion que libera espacio.
    for (i=0;i<5;i++)
    {
        printf("%d - ",pEntero[i]);
    }


    printf("\n \tHello world!\n");
    return 0;
}
