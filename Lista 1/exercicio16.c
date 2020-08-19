#include <stdio.h>
#include <stdlib.h>

int main(){

    float food, ida, volta, valm2, valporm2, total;

    printf("Digite a seguir os respectivos valores a serem repassados ao funcionáro:\nAlimentação: R$");
        scanf("%f", &food);
    printf("\nTransporte(ida): R$");
        scanf("%f", &ida);
    printf("\nTransporte (volta): R$");
        scanf("%f", &volta);
    printf("\nAgora, digite o valor de metros quadrados trabalhados pelo pedreiro:");
        scanf("%f", &valm2);

    if(valm2 < 10 && valm2){
        valporm2 = 10,00;
    }
    else if(valm2 >= 10 && valm2 < 20){
        valporm2 = 11.50;
    }
    else{
        valporm2 = 13,00;
    }

    total = valporm2 + ida + volta + food;

    printf("O pedreiro deve receber R$ %.2f\n", total);

    return 0;
}
