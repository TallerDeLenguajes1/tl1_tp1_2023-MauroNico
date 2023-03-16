#include <stdio.h>

int cuadrado(int x);

void cuadrado(int x);

void invertir(int x, int y);

void orden(int x, int y);

int main(void){
    int x,y ,n;
    int elevado;

    printf("Ingrese un numero\n");
    scanf("%d", &n);

    printf("Direccion del numero: %d\n", &n);
    printf("Contenido de la variable %d\n", n);

    elevado = cuadrado(n);
    printf("El cuadrado del numero es %d", elevado);


    printf("Ingrese un valor\n");
    scanf("%d",&y);
    printf("Ingrese otro valor\n");
    scanf("%d",&x);

}

int cuadrado(int x){
    int cuadrado = 0;
    cuadrado = x*x;
    return cuadrado;
}

void cuadrado(int x){
    int cuadrado = 0;
    cuadrado = x*x;
    printf("El cuadrado del numero es %d", cuadrado);
}

void invertir(int x, int y){
    int z = 0;
    z = y;
    y = x;
    x = z;
    printf("Nuevos valores = del primer numero=%d, del segundo%d\n", y,x);
}

void orden(int x, int y){
    int z = 0;
    if(a > b){
        z = x;
        x = y;
        y = a;
    }
}