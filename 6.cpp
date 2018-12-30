//6.	Realizar un programa que imprima todos los números naturales que hay desde la unidad hasta un número que introducimos por teclado.
#include <stdio.h>
#include <conio.h>
int main(){
	int num=1, x;
	printf("Ingrese numero: ");
	scanf("%d",&x);
	while(num<=x){
		printf("\n%d",num);
		num++;
	}
	
	getch();
	return 0;
}
