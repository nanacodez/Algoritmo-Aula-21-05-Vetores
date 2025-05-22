//Ler o valor de um saque, e dizer quantas notas de cada valor
//(R$100, R$50, R$20, R$10) serão devolvidas, considerando sempre
//o menor número de notas.

#include <stdio.h>
int main() {
    int saque, nota100, nota50, nota20, nota10;
    printf("Digite o valor do saque: R$");
    scanf("%d", &saque);
    nota100 = saque / 100;
    saque = saque % 100;
    printf("Notas de R$100: %d\n", nota100);
    nota50 = saque / 50;
    saque = saque % 50;
    printf("Notas de R$50: %d\n", nota50);
    nota20 = saque / 20;
    saque = saque % 20;
    printf("Notas de R$20: %d\n", nota20);
    nota10 = saque / 10;
    printf("Notas de R$10: %d\n", nota10);
    return 0;
}
