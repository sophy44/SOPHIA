#include <stdio.h>

int main()
{
   int num = 0;
   
   printf("pon un numero ");
   scanf(" %d", &num);

   if (num % 2 == 0)
   {
      printf("es un numero par");
   }
   else
   {
      printf("es un numero impar");
   }
   return 0;
}