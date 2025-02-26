#include <stdio.h>

    int main() {

        int numero1, numero2;
        int multiplicacao, soma, divisao, subtracao;

        printf("Entre com o numero 01:\n");
        scanf("%d", &numero1);

        printf("Entre com o numero 02:\n");
        scanf("%d", &numero2);

        //Multiplicação

        multiplicacao = numero1 * numero2;

        //Subtracao

        subtracao = numero1 - numero2;

        //Soma

        soma = numero1 + numero2;

        //Divisão

        divisao = numero1 / numero2;
            printf("Soma = %d\n", soma);

            printf("Divisão = %d\n", divisao);

            printf("Subtração = %d\n", subtracao);

            printf("Multiplicação = %d\n", multiplicacao);

    }