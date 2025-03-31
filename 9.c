#include <stdio.h>
#include <math.h>
int main (){
    int a, b, c;
    printf("digite os lados do triangulo: ");
    scanf ("%d %d %d", &a, &b, &c);
    if ((a<c+b) && (b<a+c) && (c<b+a)){
        if (a==sqrt(b*b+c*c)){
        printf ("o triangulo e retangulo");
        }
        else if (a<sqrt(b*b+c*c)){
            printf ("o triangulo e acutangulo");
        }
        else if (a>sqrt(b*b+c*c)){
            printf("o triangulo e obtusangulo");
        };
    }
    else {
        printf ("nao e um triangulo");
    }
    return 0;
}