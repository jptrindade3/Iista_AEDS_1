#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, m;

    printf("Escreva 2 numeros inteiros  e veja todos os impares entre eles;\nNumero 1:");
    scanf("%d", &n);
    printf("\nNumero 2:");
    scanf("%d", &m);

    if(m > n){
        n = ++n;
        while(n < m){
            if(n%2 != 0){
                    printf("%d  ", n);
                    n++;
            }
            else{
                n++;
            }
        }
    }

    else if(n > m){
        m = ++m;
        while(m < n){
            if(m%2 != 0){
                printf("%d  ", m);
                m++;
            }
            else{
                m++;
            }
        }
    }

    else{
        printf("Os valores digitados sao iguais\n\n.");
    }


    return 0;
}
