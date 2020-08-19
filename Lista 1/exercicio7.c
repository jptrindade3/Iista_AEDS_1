#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r, l, d, somainvest, val, premio;
    printf("3 amigos, Rafael, Leonardo e Donatelo decidiram fazer um bolao na loteria e investiram diferemtes valores.\nDefina o valor do premio a ser ganho na loteria:\n");
        scanf("%f", &premio);

    printf("defina o valor investido por cada amigo:\nRafael:");
        scanf("%f", &r);
    printf("Leonardo:");
        scanf("%f", &l);
    printf("Donatelo:");
        scanf("%f", &d);

    somainvest = r+l+d;
    val = premio/somainvest;
    r = val*r;
    l = val*l;
    d = val*d;


    printf("\nnos valores proporcionais recebidos do premio pelos amigos sao:\n Rafael: R$ %.2f\n Leonardo: R$ %.2f\n Donatelo R$ %.2f\n\n", r, l, d);

    return 0;
}
