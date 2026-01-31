#include <stdio.h>

void solicitar_numero(int *num, int numero_a_solicitar)
{
    printf("Ingrese el numero %d:\n", numero_a_solicitar);
    scanf("%d", num);
}

void intercambio(int *num1, int *num2)
{
    int numero = *num1;
    *num1 = *num2;
    *num2 = numero;
}

int main()
{
    int num1 = 0;
    int num2 = 0;
    char letra[7] = "SOPHIA";

    solicitar_numero(&num1, 1);
    solicitar_numero(&num2, 2);

    intercambio(&num1, &num2);

    printf("Numero 1: %d\n", num1);
    printf("Numero 2: %d\n", num2);

    return 0;
}