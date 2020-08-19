#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, seg;
    float horas, min;

     printf("digite uma quantidade inteira de tempo na unidade segundos:\n");
     scanf("%d", &x);

     seg = x;
     min = seg/60;
     horas = min/60;

     printf("Esse valor equivale a:\n %.2f minuto(s)\n %.2f hora(s)\n %d segundo(s)\n", min, horas, x);

    return 0;
}
