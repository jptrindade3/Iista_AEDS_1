#include <stdio.h>
#include <stdlib.h>

int main(){

    int x, y, n, brick = 0;

    printf("Digite um valor inteiro positivo pra formar uma piramide numerica:\nValor escolhido:");
    scanf("%d", &n);

    for(y = 1; y <= n; y++){
        for(x = 1; x <= y; x++){
                brick++;
                printf("%d ", brick);
        }
        printf("\n");
    }

    return 0;
}
