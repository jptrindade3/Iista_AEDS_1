#include <stdio.h>

int main(){
    int ano;

    printf("Insira o numero de um ano para saber se ele e bissexto ou nao:");
    scanf("%d", &ano);

    if(ano % 100 != 0 && ano % 4 == 0 || ano % 400 == 0){
        printf("\nO ano %d e bissexto", ano);
    }
    else{
        printf("\nO ano %d nao e bissexto.", ano);
    }

    return 0;
}
