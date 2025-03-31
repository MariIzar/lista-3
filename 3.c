#include <stdio.h>
int main(){
    float num1, num2, num3;
    printf("Digite 3 numeros reais ");
    scanf("%f %f %f", &num1, &num2, &num3);
    if (num1+num2>num3 && num2+num3>num1 && num1+num3>num2){
        printf("podem ser lados de um triangulo" );
    }
    else {
        printf("nao podem ser lados de um triangulo");
    };
    return 0;
}