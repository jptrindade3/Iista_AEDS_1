#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
   float x, y;

   printf("digite o valor da aplicacao inicial (R$):\n");
   scanf("%f", &x);

   y = x * pow(1.01,3);

   printf("Apos 3 meses, seu montante sera de R$%.2f", y);

   return 0;
}
