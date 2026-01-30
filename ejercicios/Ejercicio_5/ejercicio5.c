#include <stdio.h>

int main()
{
    int compras = 0, resultado = 0, resultado1 = 0;

    printf("Cuanto es el valor de sus compras? \n");
    scanf("%d", &compras);

    if (compras >= 200)
    {
        resultado = compras * 0.2;
        resultado1 = compras - resultado;
    }
    else if (compras >= 100)
    {
        resultado = compras * 0.1;
        resultado1 = compras - resultado;
    }
    else if (compras < 100 && compras > 0)
    {
        resultado1 = compras;
    }
    else
    {
        printf("Por favor no ponga valores negativos.");
        return 0;
    }

    printf("El valor a pagar es de %d dolares. \n", resultado1);
    printf("Tu descuento fue %d dolares.", resultado);
    return 0;
}