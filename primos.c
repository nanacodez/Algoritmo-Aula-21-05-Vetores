//ler 1 numero inteiro e dizer se ele é primo ou não

#include <stdio.h>
int main () {
    int num, div, cont=0, metade;
    printf("digite um numero inteiro: ");
    scanf("%d", &num);
    metade = num/2; 
    div = 2;
    while (div <= metade && cont == 0) {
        if (num % div == 0) 
            cont++;
        else 
            div++;
    }
    if (cont == 0) {
        printf("\n%d e primo\n", num);
    }
    else {
        printf("\n%d nao e primo\n", num);
    }
    return 0;
}
