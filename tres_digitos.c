//ler um numero de 3 digitos e mostrar cada um deles

#include <stdio.h>
int main () {
    int num;
    printf ("Insira um numero inteiro com tres digitos: ");
    scanf ("%d", &num);
    printf ("\nO terceiro digito e: %d", num%10);
    num = num / 10;
    printf ("\nO segundo digito e: %d", num%10);
    printf ("\nO primeiro digito e: %d", num/10);
    return 0;
}
