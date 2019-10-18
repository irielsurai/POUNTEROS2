


int mostrarPersona(ePersona* unaPersona)
{
    int ret;
    ret = -1;
    if (unaPersona != NULL)
    {
        printf("%d, %d, %f \n", pPersona -> legajo,
                                pPersona -> edad,
                                pPersona -> altura);
        ret = 1;
    }

}


int deletearPersona(ePersona* unaPersona);
{
    int ret;

    if (unaPersona != NULL)
    {
        printf("%d, %d, %f \n", pPersona -> legajo,
                                pPersona -> edad,
                                pPersona -> altura);
        ret = 1;
    }

}


ePersona* newPersonaParametros (int legajo, int edad, float altura)
{
    if (miPersona != NULL)
    {
        ePersona* -> miPersona = (ePersona*) malloc(sizeof(ePersona))
        miPersona -> legajo = legajo;
        miPersona -> edad = edad;
        miPersona -> altura = altura;
    }

}
