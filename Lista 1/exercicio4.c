#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
int b, b1, b2 , b3, b4, bd;

    //informação do binário de 4 bits
    b = pow(2,4);
    printf("Em um binario de 4 bits e possivel o aporte de %d valores!\n", b);

    //conversão de binário para decimal
    printf("Escreva um binario de 4 bits:\n");
    scanf("%d", &b1);
    scanf("%d", &b2);
    scanf("%d", &b3);
    scanf("%d", &b4);

     bd = b1*pow(2,3) + b2*pow(2,2) + b3*pow(2,1) +b4*pow(2,0);

    printf("Esse numero binario corresponde ao numero %d no sistema decimal.", bd);

    return 0;
}
