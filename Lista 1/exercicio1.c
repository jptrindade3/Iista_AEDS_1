#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   float x, y, z , pi;
   pi = 3.14159265359;

   printf("Digite o valor de um angulo em graus;\n");
   scanf("%f", &x);

   y = (x * pi)/180;
   z = sin(y);

   printf("O seno de %.2f graus e igual a %.2f", x, z);

    return 0;
}
