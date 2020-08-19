#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int n, xbin, algbin, i, decimal=0;

    printf("Digite o valor de bits de um binario qualquer:");
    scanf("%d", &n);

    //letra a)
    xbin = pow(2,n);
    printf("\nUm binario com essa quantidade de bits comporta %d valores diferentes", xbin);

    //letra b)
    printf("\nAgora, para esse mesmo valor de bits, digite um binario qualquer para ser convertido em decimal, pressionando enter entre cada digito\n");
    while(n > 0){
        n = --n;
        scanf("%d", &algbin);
        i = algbin*pow(2,n);
        decimal = decimal + i;
    }
    printf("Esse numero binario equivale a %d no sistema decimal.", decimal);

    return 0;
}
