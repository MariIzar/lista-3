#include <stdio.h>
int main (){
    int a, b, c;
    printf("digite os lados do triangulo: ");
    scanf ("%d %d %d", &a, &b, &c);
    if ((a<c+b) && (b<a+c) && (c<b+a)){
        if ((a==b) && (a==c)){
            printf("equilatero");
        }
        else if ((a==b) || (a==c) || (b==c)){
            printf("isosceles");
        }
        else {
            printf ("escaleno");
        }
    }
    else {
        printf ("nao sao lados de um triangulo");
    }
    return 0;
}