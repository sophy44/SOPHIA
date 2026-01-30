#include <stdio.h>
float solicitar1()
{
    float nota1 = 0;
    printf("Ingrese su nota del quiz: ");
    scanf(" %f", &nota1);
    return nota1;
}
float solicitar2()
{
    float nota2 = 0;
    printf("Ingrese su nota actividad guia pag 2 y 3: ");
    scanf(" %f", &nota2);
    return nota2;
}
float solicitar3()
{
    float nota3 = 0;
    printf("Ingrese su nota de examen final: ");
    scanf(" %f", &nota3);
    return nota3;
}
float operacion(float nota1, float nota2, float nota3)
{
    float resultadosub = 0;
    float resultado = 0;
    resultadosub = nota1 + nota2 + nota3;
    resultado = resultadosub / 3;
    return resultado;
}

int main()
{
    float nota1 = 0;
    float nota2 = 0;
    float nota3 = 0;
    float resultado = 0;
    float resultadosub = 0;
    char rta = 's';

    for (size_t i = 0; i < 3; i++)
    {
        nota1 = solicitar1();
        nota2 = solicitar2();
        nota3 = solicitar3();

        if (nota1 <= 5.0 & nota1 >= 0.0 & nota2 <= 5.0 & nota2 >= 0.0 & nota3 <= 5.0 & nota3 >= 0.0)
            rta = 'n';
        else
            printf("Nota ingresada no valida, intente nuevamente\n");
    }
    
    

    while (rta == 's')
    {
        
    }

    resultado = operacion(nota1, nota2, nota3);
    if (resultado >= 3.0)
    {
        printf("Usted aprobo con una nota de: %.2f", resultado);
    }
    else
    {
        printf("Usted no aprobo este periodo, saco: %.2f", resultado);
    }

    return 0;
}