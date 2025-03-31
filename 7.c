#include <stdio.h>
int main (){
    float num1, num2;
    printf ("Digite dois valores e descubra o maior: ");
    scanf ("%f %f", &num1, &num2);
    if (num1>num2){
        printf ("o maior numero e: %f", num1);

    }
    else if (num2>num1){
        printf ("o maior numero e: %f", num2);
    }
    else if (num1==num2){
        printf("os valores sao iguais");
    };
    return 0;
}