#include <stdio.h>
#include <stdlib.h>
#include "persona.h"

/// vamos a hacer una funcion que cree una persona y la devuelva.
/// La persona la vamos a crear como un puntero y eso queremos que devuelva.
ePersona* newPersona ();

int main()
{
    ePersona* pPersona;
    pPersona = newPersona();
    printf ("La persona es: \n ");
    newPersonaParametros(100, 40, 1.22)
    if(mostrarPersona!= 1)
    {
        printf("Error al mostrar");
    }
    //printf("%d, %d, %f \n", pPersona -> legajo, pPersona -> edad, pPersona -> altura); //me lo lleve al C
    deletearPersona(ePersona);
    printf("Hello world!\n");
    return 0;
}

ePersona* newPersona ()
{
    ePersona* unaPersona;
    unaPersona = malloc(sizeof (ePersona));
    unaPersona -> legajo = 100;
    unaPersona -> edad =40;
    unaPersona -> altura = 1.87;

    //ePersona unaPersona = {100, "pepe", 1.68};
    return unaPersona;

}
