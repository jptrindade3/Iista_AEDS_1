#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float conceito(float nota){
        fflush(stdin);
        if( nota > 100 || nota < 0){
            printf("valor invalido\n");
            nota = -1;
        }
        else if(100 >= nota && nota >= 90){
            printf("Seu conceito nessa materia e A\n");
            nota = 5;
        }
        else if(89 >= nota && nota >= 80){
            printf("Seu conceito nessa materia e B\n");
            nota = 4;
        }
        else if(79 >= nota && nota >= 61){
            printf("Seu conceito nessa materia e C\n");
            nota = 3;
        }
        else if(60 >= nota && nota >= 41){
            printf("Seu conceito nessa materia e D\n");
            nota = 2;
        }
        else if(40 >= nota && nota >= 31){
            printf("Seu conceito nessa materia e E\n");
            nota = 1;
        }
        else{
            printf("Seu conceito nessa materia e F\n");
            nota = 0;
        }
    return  nota;
}


float creditos(float cred){
    float control;

    fflush(stdin);
     if( cred > 60 || cred < 20){
        printf("valor invalido");
     }
    else{
        control = cred;
    }

    return control;
}



int main()
{
    float nota1, nota2, nota3, nota4, prod1, prod2, prod3, prod4, cred1, cred2, cred3, cred4, RSG;

    printf("Para calcular seu RSG, insira o valor da sua nota e dos creditos de cada materia\n");

    printf("\nPrimeira materia\nNota:");
        scanf("%f", &nota1);
        printf("Creditos:");
        scanf("%f", &cred1);

        nota1 = conceito(nota1);
        cred1 = creditos(cred1);
        prod1 = cred1*nota1;

    printf("\nSegunda materia\nNota:");
        scanf("%f", &nota2);
        printf("Creditos:");
        scanf("%f", &cred2);

        nota2 = conceito(nota2);
        cred2 = creditos(cred2);
        prod2 = cred2*nota2;

    printf("\nTerceira materia\nNota:");
        scanf("%f", &nota3);
        printf("Creditos:");
        scanf("%f", &cred3);

        nota3 = conceito(nota3);
        cred3 = creditos(cred3);
        prod3 = cred3*nota3;

    printf("\nQuarta materia\nNota:");
        scanf("%f", &nota4);
        printf("Creditos:");
        scanf("%f", &cred4);

        nota4 = conceito(nota4);
        cred4 = creditos(cred4);
        prod4 = cred4*nota4;

        RSG = (prod1 + prod2 + prod3 + prod4)/(cred1 + cred2 + cred3 + cred4);
        printf( "\nSeu RSG e igual a %.1f\n\n", RSG);

return 0;
}
