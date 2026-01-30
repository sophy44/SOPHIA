/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int mostrar_menu(){
    int opcion = 0;
    
    printf("Hola, soy una calculadora Kawaii, que puede hacer las siguientes operaciones: \n");
	printf("1. Sumar. \n");
	printf("2. Restar. \n");
	printf("3. Multiplicar. \n");
	printf("Que operacion desea realizar? ");
	scanf("%d", &opcion);
	
	return opcion;
}

int solicitar_numero(){
    int num;
    printf("Ingrese el numero a operar: ");
	scanf("%d", &num);
	return num;
}

int sumar() {
    int num1, num2;
	num1 = solicitar_numero();
	num2 = solicitar_numero();
	return num1 + num2;
}

int restar() {
	int num1, num2;
	num1 = solicitar_numero();
	num2 = solicitar_numero();
	return num1 - num2;
}

int multiplicar() {
	int num1, num2;
	num1 = solicitar_numero();
	num2 = solicitar_numero();
	return num1 * num2;
}

int main()
{
	char rta = 's';
	int opcion = 0, resultado = 0;
		
    while(rta == 's'){
    	opcion = mostrar_menu();
    
    	if(opcion == 1) {
    		resultado = sumar();
    	}
    	else if(opcion == 2){
    		resultado = restar();
    	}
    	else if(opcion == 3){
        	resultado = multiplicar();
    	}
    	else{
    	    printf("Opcion seleccionada no valida.\n"); 
    	    printf("Desea continuar: (s/n) ");
    	    scanf(" %c", &rta);
    	    continue;
    	}
    		
    	printf("El resultado es %d\n", resultado);
    	printf("Desea continuar: (s/n) ");
    	scanf(" %c", &rta);
    }
    
    printf("Muchas gracias por usar nuestra calculadora Kawaii :3, bye\n"); 
	
	return 0;
}