#include <stdio.h>

int main() {
    float n1, n2, r;
    
    printf("Digite o valor do salario: ");
    scanf("%f", &n1);
    
    printf("Digite o valor da prestacao: ");
    scanf("%f", &n2);
    
    r = 0.20 * n1;
    
    if (n2 > r) {
        printf("Emprestimo nao concedido.");
    } else {
        printf("Emprestimo concedido.");
    }
}

