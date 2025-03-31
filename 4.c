#include <stdio.h>
#include <math.h>
int main(){
    float a, b, x;
    printf ("Digite os coeficientes a e b ");
    scanf ("%f %f", &a, &b);
    x=-b/a;
    printf ("entao a raiz e: %f", x);
    return 0;
}