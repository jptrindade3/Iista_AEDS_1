#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   int a, b, c;
   float s;
   double area;

   printf("de valores aos lados de um triangulo retangulo para saber sua area\nCateto 1:\n");
   scanf("%d", &a);
   printf("Cateto 2:\n");
   scanf("%d", &b);
   printf("Hiotenusa:\n");
   scanf("%d", &c);

      s = (a + b + c)/2;
      area = sqrt(  s*(s-a)*(s-b)*(s-c)  );

   printf("A area do seu triangulo e igual a %.2lf", area);


    return 0;
}
