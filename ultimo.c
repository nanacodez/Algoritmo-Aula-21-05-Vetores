//Ler um número inteiro e mostrar seu último dígito.

#include <stdio.h>
int main () {
    int num;
    printf ("Insira um numero inteiro: ");
    scanf ("%d", &num);
    printf ("\no ultimo digito e: %d", num%10);
    return 0;
}
