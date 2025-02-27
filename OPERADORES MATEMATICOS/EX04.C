#include <stdio.h>
    int main() {
        
        int numero1 = 1, resultado;

        /*
        Incremento (++)
        Pré incremento (++a)
        Pos incremento (a++)
        Decremento (--)
        Pré decremento --a
        Por decremento a--
        */

        resultado = numero1++;
        printf("Apo pos-incremento - numero 1: %d - resultado: %d\n", numero1, resultado);

        resultado = ++numero1;
        printf("Apo pre-incremento - numero 1: %d - resultado: %d\n", numero1, resultado);

        resultado = numero1--;
        printf("Apo pos-decremento - numero 1: %d - resultado: %d\n", numero1, resultado);

        resultado = --numero1;
        printf("Apo pre-decremento - numero 1: %d - resultado: %d\n", numero1, resultado);


    }