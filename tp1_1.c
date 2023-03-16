#include <stdio.h>

int main(void){
	int x = 10, memoria = 0;
	int *p;
	
	printf("Hola Mundo.\n");
	
	p = &x;
	
	memoria = sizeof(p);
	
	printf("Direccion de memoria amacenada por el puntero: %d\n", p);
	printf("Direccion de memoria de la variable: %d\n", &x);
	printf("Direccion de memoria del puntero: %d\n", &p);
	printf("Tamaño de la direccion de memoria del puntero: %d\n", memoria);
	
	return 0;
}