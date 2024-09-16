#include <stdio.h>
#include "9-encabezados.h"



// funcion1(): Imprime un mensaje
void funcion1() {
    printf("En funcion1()...\n");
}

// funcion2(): Imprime un mensaje y las variables que recibe como argumento
void funcion2(int a, float b) {
    printf("En funcion2()...\n");
    printf("a = %d, b = %.2f\n", a, b);
}

// funcion3(): Imprime un mensaje. Retorna el valor que recibió como argumento
// incrementado en 2
int funcion3(int x) {
    printf("En funcion3()...\n");
    int y = x + 2;
    return y;
}

// funcion4(): Imprime un mensaje. Retorna el valor que recibió como argumento
// disminuye en 2
int funcion4(int x) {
    printf("En funcion4()...\n");
    int z = x - 2;
    return z;
}


// funcion5(): Imprime un mensaje. Retorna el valor que recibió como argumento
// incrementado 
int funcion5(int x) {
    printf("En funcion5()...\n");
    int w = x + 8;
    return w;
}








// despliegue de informacion 

int main() {

    int v;
    int z;
    int w;
    

    // Llama a las 3 funciones
    funcion1();
    funcion2(5, 2.67);
    v = funcion3(10);
    z = funcion4(10);
    w = funcion5(10);

    // Imprime el valor que retornó funcion3()
    printf("v = %d\n", v);
    printf("z = %d\n", z);
    printf("w = %d\n", w);

    return 0;

}

