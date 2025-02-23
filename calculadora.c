#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    if(argc != 3) {
        printf("El número de argumentos es incorrecto \n");
        return 1;
    } 

    double num1 = atof(argv[1]);
    double num2 = atof(argv[2]);

    double multip;
    multip = num1 * num2;

    printf("El resultado de multiplicar %f y %f es %f \n", num1, num2, multip);
    return 0;
}




