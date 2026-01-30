#include  <stdio.h>

int main()
{

    char letra;
 printf("escribe una letra: ");
 scanf(" %c", &letra);
 
  if(letra == 'a'|| letra == 'e'|| letra == 'i'|| letra == 'o'|| letra == 'u'){
    printf(" esta letra es una vocal ", letra);
   }
   else{
    printf(" es una consonante");
   }
 return  0;
}