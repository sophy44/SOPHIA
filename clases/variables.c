#include <stdio.h>

int main()
{
    int edad = 0;
    char opcion = 'n';

    printf("ingrese su edad: \n");
    scanf("%d", &edad);

    if (edad >= 18)
    {
        printf("usted puede entrar a la lloreria \n");

        if (edad >= 18 && edad < 30)
        {
            printf("usted no paga \n");
        }
        else
        {
            printf("ingrese m o f segun su genero:\n");
            scanf(" %c", &opcion);

            if (opcion == 'm')
            {
                printf("paga 20.000");
            }
            else
            {
                printf("usted paga 10.000");
            }
        }
    }
    else
    {
        printf("usted llorelo no entra \n");
    }

    return 0;
}