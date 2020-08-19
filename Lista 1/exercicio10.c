#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float peso, altura, IMC;

    printf("Para calcular o seu IMC, insira:\nSeu peso(em Kg):");
    scanf("%f", &peso);
    printf("\nSua altura (em metros):");
    scanf("%f", &altura);
    printf("\n\n");

    IMC = peso / pow(altura,2);

    if (IMC <17){
        printf("Seu IMC e igual a %.2f\n!!AVISO!!\nVoce esta BEM abaixo do seu peso ideal, procure tratamento.\n\n");
    }
    else if (IMC >= 17 && IMC < 18.5){
        printf("Seu IMC e igual a %.2f\nVoce esta abaixo do seu peso ideal.\n\n");
    }
    else if(IMC >= 18,5 && IMC < 25){
        printf("Seu IMC e igual a %.2f\nVoce esta com o peso ideal.\n\n", IMC);
    }
    else if(IMC >= 25 && IMC < 30){
        printf("Seu IMC e igual a %.2f\nVoce esta com o peso acima do ideal.\n\n", IMC);
    }
    else if(IMC >= 30 && IMC < 35){
        printf("Seu IMC e igual a %.2f\n!!AVISO!!\nVoce esta obeso.\n\n", IMC);
    }
    else if(IMC >= 35 && IMC <40){
        printf("Seu IMC e igual a %.2f\n!!AVISO!!\nVoce esta com obesidade severa, procure tratamento.\n\n", IMC);
    }
    else if(IMC >= 40){
        printf("Seu IMC e igual a %.2f\n!!!!AVISO!!!!\nVoce esta com obesidade morbida, procure urgentemente tratamento, risco de vida eminente.\n\n", IMC);
    }


    return 0;
}
