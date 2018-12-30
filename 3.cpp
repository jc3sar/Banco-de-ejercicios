//3.	Realizar un programa que imprima los números pares entre 0 y 100
#include <stdio.h>
#include <conio.h>
int main (){
	int esPar;
	for(int i=0; i<=100; i++){
		esPar = i%2;
		if(esPar==0)
			printf("%d\n",i);
	}
	
    getch();
	return 0;
}

