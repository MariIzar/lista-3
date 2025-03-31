#include <stdio.h>

int main() {
    float a1, b1, c1, a2, b2, c2;
    float D, Dx, Dy;
    printf("Digite os coeficientes e os termos independentes do sistema de equacoes 2x2:\n");
    printf("a1, b1, c1 (para a primeira equacao): ");
    scanf("%f %f %f", &a1, &b1, &c1);
    printf("a2, b2, c2 (para a segunda equacao): ");
    scanf("%f %f %f", &a2, &b2, &c2);
    D = a1 * b2 - a2 * b1;
    if (D != 0) {
        printf("O sistema tem uma solução unica.\n");
    } else {
        Dx = c1 * b2 - c2 * b1;
        Dy = a1 * c2 - a2 * c1;

        if (Dx == 0 && Dy == 0) {
            printf("O sistema tem infinitas solucoes.\n");
        } else {
            printf("O sistema não tem solucao.\n");
        }
    }
    return 0;
}