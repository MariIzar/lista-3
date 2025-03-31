#include <stdio.h>
int main (){
    int num1, num2, dif;
    float div;
    printf("Digite dois numeros: ");
    scanf ("%d %d", &num1, &num2);
    dif=num1-num2;
    printf ("A diferenca e: %d\n", dif);
    if (num2!=0){
        div=(float) num1/num2;
        printf ("divisao: %f\n",div);}
    else {
        printf("nao eh possivel dividir por 0 ");
        }
    return 0;
}