#include <stdio.h>
    int main() {
        int num;

        printf("entre com o numero:");
        scanf("%d", &num);

        num = num + num% 3;
        printf("num = %d\n", num);
    }
