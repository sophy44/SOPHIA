#include <stdio.h>

const int precio_lechuga = 500; // Valor por libra
const int precio_zanahoria = 850;
const int precio_cebolla = 700;
const int precio_tomate = 650;

void println(const char *texto)
{
    printf(texto);
    printf("\n");
}

int menu()
{
    int opcion = 0;
    println("Hola buenos dias soy el menu de este cajero y tengo la siguiente lista de precios:");
    printf("1. Lechuga %d.\n", precio_lechuga);
    printf("2. Zanahoria %d.\n", precio_zanahoria);
    printf("3. Cebolla %d.\n", precio_cebolla);
    printf("4. Tomate %d.\n", precio_tomate);
    scanf("%d", &opcion);
    return opcion;
}

int gramos()
{
    int gramos_ingresados = 0;
    println("Cuantos gramos llevaras?");
    scanf("%d", &gramos_ingresados);
    return gramos_ingresados;
}

char terminar()
{
    char finish;
    println("quiere agregar mas productos? (s/n)");
    scanf(" %c", &finish);
    return finish;
}

void mostrar_resultado(int *precios)
{
    println("Este es el resultado de su compra:");
    printf("Lechuga: %d\n", precios[0]);
    printf("Zanahoria: %d\n", precios[1]);
    printf("Cebolla: %d\n", precios[2]);
    printf("Tomate: %d\n", precios[3]);
    printf("Total a pagar: %d\n", precios[4]);
}

int main()
{
    int opcion = 0;
    char continuar = 's';
    int gramos_ingresados = 0;
    float operacion = 0;
    int precios[5] = {0, 0, 0, 0, 0};

    while (continuar == 's')
    {
        opcion = menu();
        gramos_ingresados = gramos();

        if (opcion == 1)
        {
            operacion = precio_lechuga * gramos_ingresados;
            precios[0] += (int)(operacion / 500);
        }
        if (opcion == 2)
        {
            operacion = precio_zanahoria * gramos_ingresados;
            precios[1] += (int)(operacion / 500);
        }
        if (opcion == 3)
        {
            operacion = precio_cebolla * gramos_ingresados;
            precios[2] += (int)(operacion / 500);
        }
        if (opcion == 4)
        {
            operacion = precio_tomate * gramos_ingresados;
            precios[3] += (int)(operacion / 500);
        }

        precios[4] += (int)(operacion / 500);

        continuar = terminar();
    }

    mostrar_resultado(precios);

    return 0;
}
