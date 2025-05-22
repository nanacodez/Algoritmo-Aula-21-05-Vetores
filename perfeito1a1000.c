//Exibir todos os perfeitos de 1 a 1000

#include <stdio.h>
int main () {
    int num, soma, div, metade;
    for (num=6; num<=1000; num++) {
        metade = num/2;
        soma = 1;
        for (div=2; div<=metade; div++) {
            if (num % div == 0) {
                soma = soma + div;
            }
        }
        if (soma == num) {
            printf("\n%d e perfeito\n", num);
        }
    }
     return 0;
}   
