#include <stdio.h>
#include <stdlib.h>

int calcMDC(int y, int z){

    int i=2, a=1;

    while(y != 1 || z != 1){
            if(y%i != 0 && z%i != 0){
                i = ++i;
            }
            else if(y%i != 0 && z%i == 0){
                z = z/i;
            }
            else if(y%i == 0 && z%i != 0){
                y = y/i;
            }
            else if(y%i == 0 && z%i == 0){
                y = y/i;
                z = z/i;
                a = a*i;
            }
        }
    return a;
}

int main()
{
    int r, s, t, mdc1, MDC;

    printf("Insira o valor de 3 numeros inteiros para calcular seu MDC\nPrimeiro numero:");
        scanf("%d", &r);
    printf("\nSegundo numero:");
        scanf("%d", &s);
    printf("\nTerceiro numero");
        scanf("%d", &t);

    mdc1 = calcMDC(r,s);
    MDC = calcMDC(t, mdc1);

    printf("%d", MDC);

    return 0;
}
