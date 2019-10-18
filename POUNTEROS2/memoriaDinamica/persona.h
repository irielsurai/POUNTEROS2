#include "persona.c"

typedef struct
{
    int legajo;
    int edad;
    float altura;
} ePersona;

ePersona* newPersona(); //constructor por defecto
int mostrarPersona(ePersona*);
int deletearPersona(ePersona*);
ePersona* newPersonaParametros (int, int, float);
