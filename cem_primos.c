//mostrar os 100 primeiros numeros primos

#include <stdio.h>
int main () {
    int primos[100];
    int num, div, metade, cont, conta_primo; 
    primos[0] = 2;
    conta_primo = 1;
    num = 3;
    while (conta_primo < 100){
        metade = num/2;
        cont = 0;
        div = 3;
        while (div<=metade && cont==0) {
            if (num % div == 0) {
                cont++;
            }
            else { 
                div++;
            }
        }
        if (cont == 0) { 
            //primos[conta_primo++] = num;
            primos[conta_primo] = num;
            conta_primo++;
        }
            num = num + 2;
    }
    printf("os cem primeiros primos:\n");
    for (cont=0; cont<100; cont++) {
        printf("%d ", primos[cont]);
    }
    return 0;
}
