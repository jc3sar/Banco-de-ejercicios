//4.	Realizar un programa que imprima la suma de los 100 primeros números
#include <stdio.h>
#include <conio.h>
int main(){
	int acumulador=0;
	for(int i=0; i<100; i++)
		acumulador += i;	
	printf("La suma de los 100 primeros numeros empezando desde el 0 es: %d",acumulador);
	
	getch();
	return 0;
}
