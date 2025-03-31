#include <stdio.h>
int main (){
    int num;
    printf ("Digite um numero inteiro ");
    scanf ("%d" , &num);
    if (num%7 == 0){
        printf ("Esse numero e divisivel po 7");
    }
    else {
        printf ("Esse numero nao e divisivel por 7");
    };
    return 0;
}