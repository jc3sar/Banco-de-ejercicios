//5.	Realizar un programa que imprima los números impares hasta el 100 y que imprima cuantos impares hay.
#include <stdio.h>
#include <conio.h>
int main(){
	int esImpar;
	int contadorImpar=0;
	for(int i=0; i<=100; i++){
		esImpar = i%2;
		if(esImpar==1){
			printf("%d\n",i);
			contadorImpar++;
		}
	}	
	printf("En total %d numeros que son impares",contadorImpar);
	
	getch();
	return 0;
}
