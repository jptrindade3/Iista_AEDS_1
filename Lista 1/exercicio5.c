#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int c, d;
    float a, b;
    printf("um inteiro ocupa 32 bits na memoria\n");

    a = pow(2,31)/ 2;
    b = pow(2,31)/ -2;
    printf("Os limites superior e inferior de um inteiro sao %.0f e %.0f\n", a, b);
    c = 1073741824 + 1;
    d = -1073741824 - 1;
    printf (" %d \n %d",c ,d);

    return 0;
}
