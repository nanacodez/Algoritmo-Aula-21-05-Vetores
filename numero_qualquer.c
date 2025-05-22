//Ler um número e mostrar os seus dígitos.

#include <stdio.h>
int main () {
    int num;
    printf ("Insira um numero inteiro: ");
    scanf ("%d", &num);
    while (num > 0) {
        printf ("%d\n", num%10);
        num = num / 10;
    }

    return 0;
}
