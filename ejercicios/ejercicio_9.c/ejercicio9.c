#include <stdio.h>
#include <ctype.h>

void solicitar_palabra(char *palabras)
{
    printf("ingrese una palabra: ");
    scanf("%[^\n]%*c", palabras);
}

void contar(char *palabra)
{
    int letras = 0;
    int espacios = 0;
    int digitos = 0;
    
    for (int i = 0; i < 51; i++)
    {
        if(isalpha(palabra[i])){
            letras++;
        }
        else if(isdigit(palabra[i])){
            digitos++;
        }
        else if(palabra[i] == ' '){
            espacios++;
        }
    }

    printf("Letras: %d, digitos: %d, espacios en blanco: %d", letras, digitos, espacios);
}

int main()
{
    char palabras[51] = "";
    solicitar_palabra(palabras);
    contar(palabras);

    return 0;
}
