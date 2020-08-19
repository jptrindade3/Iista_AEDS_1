#include <stdio.h>
#include <stdlib.h>

int calcfat(int x){
    int i=1, fat=1;
    while(x >= i){
        fat = fat*i;
        ++i;
    }
return fat;
}

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

int calcMMC(int y, int z){

    int i=2, a=1;

    while(y != 1 && z != 1 || y != 1 && z == 1 || y == 1 && z != 1){
            if((y%i) != 0 && (z%i) != 0){
                i = ++i;
            }
            else if((y%i) != 0 && (z%i) == 0){
                z = z/i;
                a = a*i;
            }
            else if((y%i) == 0 && (z%i) != 0){
                y = y/i;
                a = a*i;
            }
            else if((y%i) == 0 && (z%i) == 0){
                y = y/i;
                z = z/i;
                a = a*i;
            }
    }

    return a;
}


int main(){

    //Variáveis gerais utilizadas
    int w, x, y, z;
    //Letra das questões
    char X, a, b, c, d, e, f, g, h, i, j, k;
    //Variaveis specíficas de cada questão
    int fat, MDC2, MDC4, multiplo, I=1, An, MMC, I2;
    float Sn;

    printf("Digite a letra que corresponde a determinada funcao para utiliza-la:\n");
    printf("a) fat(n);\nb) MDC(a,b);\nc) MDC(a,b,c,d);\nd) Multiplos(n,x);\ne) Primo(x);\nf) Decrescente(x);");
    printf("\ng) P.A.(a,r,n);\nh) Dig(n);\ni) MMC(a,b);\nj) N_esimo primo(n);\nk) Hora(h,m,s)\n\nFuncao lertra: ");
        scanf("%c", &X);

        if(X == 'a'){
            printf("Insira um numero para calcular seu fatorial: ");
                scanf("%d", &x);

            fat = calcfat(x);
            printf("O resultado de %d! e igual a %d\n", x, fat);
        }

        else if(X == 'b'){
            printf("Para saber o MDC de 2 numeros, digite-os a seguir:\nPrimeiro numero: ");
                scanf("%d", &x);
            printf("\nSegundo numero: ");
                scanf("%d", &y);

            MDC2 = calcMDC(x,y);
            printf("\nO MDC entre %d e %d e igual a %d\n", x, y, MDC2);
        }

        else if(X == 'c'){
            printf("Para saber o MDC de  numeros, digite-os a seguir:\nPrimeiro numero: ");
            scanf("%d", &w);
            printf("\nSegundo numero: ");
            scanf("%d", &x);
            printf("\nTerceiro numero: ");
            scanf("%d", &y);
            printf("\nQuarto numero:");
            scanf("%d", &z);

            MDC4 = calcMDC(z,y);
            MDC4 = calcMDC(x, MDC4);
            MDC4 = calcMDC(w, MDC4);
            printf("\nO MDC entre os numeros %d, %d, %d e %d e igual a %d\n", w, x, y, z, MDC4);
        }

        else if(X == 'd'){
            printf("Escreva 2 numeros inteiros  e veja todos os multiplos do menor deles ate o maior;\nPrimeiro numero: ");
                scanf("%d", &w);
            printf("\nSegundo numero: ");
                scanf("%d", &x);

            if(x > w){
                printf("0");
                while((w*I) <= x){
                    y = w*I;
                    printf(",%d", y);
                    ++I;
                }
            }

            else if(w > x){
                printf("0");
                while((x*I) <= w){
                    y = x*I;
                    printf(",%d", y);
                    ++I;
                }
            }

            else{
                printf("Os valores digitados sao iguais\n.");
            }

        }

        else if(X == 'e'){
        int I=2;
            printf("Digite um numero para saber se ele e primo\nNumero a ser testado:");
                scanf("%d", &x);

            while(I <= x){
                if(x%I == 0 && I != x){
                    printf("o numero %d nao e primo\n", x);
                    return 0;
                    break;
                }
                else if(x%I == 0 && x == I){
                    printf("o numero %d e primo\n", x);
                    return 1;
                    break;
                }
                else if(x == 1){
                    printf("o numero %d nao e primo\n", x);
                    return 0;
                }
                else{
                    ++I;
                }
            }
        }

        else if(X == 'f'){
            printf("Digite um numero e veja todos os que o antecedem ate 0\nNumero escolhido: ");
                scanf("%d", &x);

            while((x-I) > 0){
                x = x - I;
                printf("%d ", x);
            }
        }

        else if(X == 'g'){

    printf("Para fazer a soma dos n termos de 1 P.A., de valores a:\nRazao: ");
        scanf("%d", &w);
    printf("Termo inicial: ");
        scanf("%d", &x);
    printf("Quantidade n de termos: ");
        scanf("%d", &y);

    An = x + ((y-1)*w);
    Sn = (y*(x + An))/2;
    printf("\nA soma dos n termos dessa pa e igual a %.2f\n", Sn);
        }

        else if(X == 'h'){
            int x, y, z=0;
            printf("Digite um numero e veja a soma dos seus algarismos: ");
            scanf("%d", &x);

            while(x/10 != 0){
                y = x % 10;
                z = z + y;
                x = x / 10;
            }
            z = z + x;
            printf("A soma dos algarismos e igual a %d\n", z);
        }

        else if(X == 'i'){
            printf("Insira o valor de 2 numeros inteiros para calcular o MMC\nPrimeiro numero:");
                scanf("%d", &w);
            printf("\nSegundo numero:");
                scanf("%d", &x);

            MMC = calcMMC(w,x);

            printf("%d\n", MMC);

    return 0;;
        }

        else if(X == 'j'){
                int y=2, I=2, I2=0;
    printf("Digite um numero para saber o primo que ocupa esse posicao\nPosicao do primo:");
        scanf("%d", &x);


            while(I <= y){
                if(y%I == 0 && I != y){//aqui nao é primo
                    ++y;
                    I = 2;
                }
                else if(y%I == 0 && y == I && I2 < x){//aqui é primo
                    ++I2;
                    if(I2 == x){
                        printf("O %dº numero primo e igual a %d\n", x, y);
                    }
                    else if(I2 < x){
                        ++y;
                        I = 2;
                    }
                }
                else{//aqui ta processando
                    ++I;
                }
            }
        }

        else if(X == 'k'){
            int x, y, z;

                printf("digite um horario hh:mm:ss e veja o resultado deste somado a mais 1 seg:\nOBS:(horas de 0 a 24)\nHoras: ");
                    scanf("%d", &x);
                printf("Minutos: ");
                    scanf("%d", &y);
                printf("Segundos: ");
                    scanf("%d", &z);


                if( x > 23 || y > 59 || z > 59){
                    printf("Algum dos valores não respeita o sistema de horas\n");
                }

                else if(z < 59){
                    ++z;
                    printf("O horario acrescido de 1 seg e igual a %d:%d:%d\n", x, y, z);
                }

                else if(z == 59 && y < 59){
                    z = 0;
                    ++y;
                    printf("O horario acrescido de 1 seg e igual a %d:%d:%d\n", x, y, z);
                }
                else if(z == 59 && y == 59 && x < 23){
                    z = 0;
                    y = 0;
                    ++x;
                    printf("O horario acrescido de 1 seg e igual a %d:%d:%d\n", x, y, z);
                }
                else if(z == 59 && y == 59 && x == 23){
                    z = 0;
                    y = 0;
                    x = 0;
                    printf("O horario acrescido de 1 seg e igual a 00:00:00\n");
                }
            }

        else{
            printf("\nAlternativa invalida\n");
        }

    return 0;
}
