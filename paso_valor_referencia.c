#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int resta(int *var) {
    (*var)--;
}


void main(void) {
    int var;

    printf("Introduce un número entero en la pantalla: \n");
    scanf("%d", &var);


    while(var > 0) {
        // Llamar a la función
        resta(&var);
        printf("El valor actual de la variable es %d \n", var);
        sleep(1);
    }
}