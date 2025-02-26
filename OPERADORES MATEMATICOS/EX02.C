#include <stdio.h>

    int main() {

        int numero1, numero2, resultado;

        /*
        Atribuição simples (=)
        Atribuição com soma (+=)
        Atribuição com subtração (-=)
        Atribuição com divisão (/=)
        Atribuição com multiplicação (*=)
        */

        resultado = 10;
        printf("Resultado: %d\n", resultado);

        resultado += 20;
        printf("Resultado: %d\n", resultado);

        resultado -= 10;
        printf("Resultado: %d\n", resultado);

        resultado /= 2;
        printf("Resultado: %d\n", resultado);

        resultado *= 5;
        printf("Resultado: %d\n", resultado);
    }