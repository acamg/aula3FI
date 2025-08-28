#include <stdio.h>

int main() {
    int vetor[10];
    int maior_valor;

    printf("Digite 10 valores inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    maior_valor = vetor[0];

    for (int i = 1; i < 10; i++) {
        if (vetor[i] > maior_valor) {
            maior_valor = vetor[i];
        }
    }

    printf("\nO maior valor no vetor é: %d\n", maior_valor);
    
    return 0;
}