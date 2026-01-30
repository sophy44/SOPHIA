#include  <stdio.h>

int main()
{

    float nota = 0.0;

    printf("escriba la nota que saco del 0.0 al 5.0 \n");
    scanf("%f", &nota);
    

   if (nota >= 4.0){
    printf("usted apobo con exelente nota, felicidades \n");
    }

   else if(nota >= 3.0){
    printf("aprobaste pero puedes seguir mejorando \n");
    }

   else if( nota < 3.0 && nota >= 0.0){
    printf("no aprobaste pero puedes lograrlo no te rindas \n");
    }
    

 
 return  0;
}