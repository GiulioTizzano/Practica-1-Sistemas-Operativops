#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Un número primo es cualquier número natural mayor que 1 que cumple que:

// 1. Solamente es divisible entre sí mismo.
// 2. Solamente es divisible entre 1.

// Si es divisible entre cualquier otro número k => no es primo => es compuesto.
// a es divisible entre b sii existe un número c tal que b = a*c

int a = 0;

int main(int argc, char *argv[]) {
    
    printf("Introduce un número para ver si es primo o no \n");
    if(argc != 2) {
        printf("No has puesto el número adecuado de argumentos \n");
        return 1;
    }

    int number = atoi(argv[1]);
    for(int i = 1; i <= number; ++i) {
        if(number % i == 0) {
            a++;
        }
    }
    if(a == 2) {
        printf("El número es primo %d \n", number);
    } else {
        printf("El número es %d es compuesto \n", number);
    }
    return 0;
}