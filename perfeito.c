//um numero é perfeito quando é igual a soma de todos os seus divisores
//exceto ele proprio 
//exemplo: 6 = 1 + 2 + 3
//ler um numero e dizer se ele é perfeito

#include <stdio.h>
int main () {
    int num, div, soma=1, metade; 
    printf("digite um numero inteiro: ");
    scanf("%d", &num);
    metade = num/2;
    for (div=2; div<=metade; div++) {
         if (num % div == 0) 
            soma = soma + div;
    }
    if (soma == num)
        printf("\n%d e perfeito\n", num);
    else 
        printf("\n%d nao e perfeito\n", num);
     return 0;
}
