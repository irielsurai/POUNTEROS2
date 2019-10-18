#include <stdio.h>
#include <stdlib.h>

int main()
{
    /// GENERACION DE ESPACIO
    int* miVector;
    int* auxVector;
    int x;
    miVector = (int*) malloc(sizeof (int) *5);
    if (miVector != NULL)
    {
        for (x=0; x<5; x++)
        {
            *(miVector+x) = x+1;
        }
        for (x=0; x<5; x++)
        {
            printf ("%d \n",*(miVector+x));
        }
        auxVector = (int*) realloc(miVector, sizeof(int)*10); //le asigna mas lugar al array
        if (auxVector != NULL) //si no hay lugar queda en null. control para que no se asigne null a la variable y se pierdan los datos.
        {
            miVector = auxVector;
            for(x=5; x<10;x++) //empiezo el for desdedonde lo deje antes
            {
                *(miVector+x) = x+1;
            }
            for (x=0; x<10; x++)
            {
                printf ("%d \n",*(miVector+x));
            }
        }
        else
        {
            printf("No hay mas espacio");
        }
    }

    /// QUITA DE ESPACIO

    printf ("Lo reducimos");
    realloc (miVector,sizeof (int)*4);
    for (x=0; x<10; x++) //si le sigo dejando el 10, cuando ya achique hasta 4, lo que ocurre es que se asigna basura en esos lugares y me las muestra
    {
        printf ("%d \n",*(miVector+x));
    }

    printf("Hello world!\n");
    return 0;
}
