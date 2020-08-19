
#include <stdio.h>
#include <math.h>

 int main () {

float a, b, c, x;
double x1, x2, D;

//coleta de coeficientes do usuario
printf("Tendo em vista a equacao geral ax^2 + b + c,\nde valores aos coeficientes a seguir:\n");
printf( "valor de a: \n" );
scanf("%f", &a );
printf( "valor de b: \n" );
scanf("%f", &b );
printf( "valor de c: \n" );
scanf("%f", &c );

//equaçao definida pelo usuario
printf("A equacao construida foi: (%.1f)x^2 + (%.1f)x + (%.1f)\n", a, b, c);

//calculo de delta
D = pow(b,2) - (4*a*c) ;

//calculo das raízes de x
      if ( D < 0 ){
      	printf("e suas raizes nao pertencem ao conjunto dos reais\n");
      	printf("Delta = %.2f", D);
      }
      else{
      	x2= ( -b - sqrt(D))/(2*a);
      	x1= ( -b + sqrt(D))/(2*a);
          printf( "e suas raizes sao: %.2lf e %.2lf\nDelta = %.2f", x1, x2, D);
          }
   return 0;
 }
