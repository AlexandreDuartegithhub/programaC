#include <stdio.h>
    int main() {
        
        int numero1 = 1;

        /*
        Incremento (++)
        Pré incremento (++a)
        Pos incremento (a++)
        Decremento (--)
        Pré decremento --a
        Por decremento a--
        */

        /*Incremento ++*/
        printf("Antes do incremento: %d\n", numero1);
        //numero1 = numero1 + 1;//
        numero1++;
        printf("Depois do incremento: %d\n", numero1);

        /*Decremento --*/
        printf("Antes do decremento: %d\n", numero1);
        //numero1 = numero1 - 1;//
        numero1--;
        printf("Depois do decremento: %d\n", numero1);
    }
