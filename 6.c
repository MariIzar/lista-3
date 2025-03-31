#include <stdio.h>
#include <math.h>
int main(){
    float a, b, c, delta, x1, x2;
    printf ("Digite os coeficientes a, b, c: ");
    scanf ("%f %f %f", &a, &b, &c);
    delta= b*b-4*a*c;
    if (delta>0){
        x1= -b + sqrt(delta) / 2*a;
        x2= -b - sqrt(delta) / 2*a;
        printf ("as raizes sao: %2f %2f", x1, x2);
    }
    else {
        float imaginaria = sqrt(-delta) / (2 * a);
        printf("As raizes sao imaginarias: %2f + %2f e %2f - %2f\n", -b / (2 * a), imaginaria, -b / (2 * a),imaginaria);
    }
    return 0;
}
