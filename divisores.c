//ler 1 inteiro e dizer todos os seus divisores

#include <stdio.h>
int main () {
    int num, div;
    printf("digite 1 inteiro: ");
    scanf("%d", &num);
    int metade = num/2;
    printf("\ndivisores de %d: ", num);
    for (div=2; div<=metade; div++) {
         if (num % div == 0) {
            printf("%d ", div);
         }
    }
    printf("%d\n", num);
    return 0;
}
