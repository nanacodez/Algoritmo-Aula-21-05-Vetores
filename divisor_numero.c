//ler dois inteiros e dizer se o segundo é divisor do primeiro

#include <stdio.h>
int main () {
    int num, div;
    printf("digite dois inteiros: ");
    scanf("%d%d", &num, &div);
    if (num % div == 0) {
        printf("%d e divisor de %d\n", div, num);
    }
    else {
        printf("%d nao e divisor de %d\n", div, num);
    }

    return 0; 
}
