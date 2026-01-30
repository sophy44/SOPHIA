#include  <stdio.h>

char menu(){
    char letra;
    printf("Holis soy tu calculadora, Qué operacion deseas realizar?\n");
    printf("Suma : 's' \n");
    printf("Resta: 'r' \n");
    printf("Multiplicacion: 'm' \n");
    printf("Division: d \n");
    scanf(" %c",  &letra);
    return letra;
}
float numero1(){
    float num1 = 0;
    printf("Escribe un numero: ");
    scanf(" %f", &num1);
   
    return num1;
}
float numero2(){
    float num2= 0;
    printf("Escribe un numero: ");
    scanf( "%f", &num2);
    return num2;
}

float suma( float num1 , float num2){
     return num1 + num2;

}

float resta ( float num1 , float num2){
    return num1 - num2;
}

float multiplicacion( float num1 , float num2){
    
    return num1 * num2;
    
}

float division ( float num1 , float num2){
   return num1 / num2;
}
int main()
{
char letra;
float num1;
float num2;
float resultado = 0;
char seguir = 'v';


 //while ( seguir == 'v'){
    letra = menu();
    num1 = numero1();
    num2= numero2();


     if( letra == 's'){
      resultado = suma( num1 , num2);
     }
     if (letra == 'r'){
        resultado = resta(num1 , num2);
     }
     if (letra == 'm'){
        resultado = multiplicacion(num1 , num2);
        }
     if (letra == 'd'){
        resultado = division(num1 , num2);
        }
   
     //}

       printf ("El restulado de la operacion es %.2f", resultado);


 
 return  0;
}