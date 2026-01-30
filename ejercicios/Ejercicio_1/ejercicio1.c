#include  <stdio.h>

int main()
{

    int num1 = 0;

    printf("escriba un numero positivo 0 negativo entero \n");
    scanf("%d", &num1);

 if( num1 >0 ){
    printf("su numero es positivo");
 }
 if( num1 <0 ){
    printf("su numero es negativo");
 }
  if(num1 ==0){
    printf("su numero es un cero");
 }
 
 return  0;
}