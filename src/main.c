#include <stdio.h>


void bubble_sort(int vetor[], int tamanho);

int main() {
    int meu_vetor[] = {45, 12, 89, 5, 23};
    int tam = sizeof(meu_vetor) / sizeof(meu_vetor[0]);

    printf("Vetor original: ");
    for(int i = 0; i < tam; i++) printf("%d ", meu_vetor[i]);
    printf("\n");

   
    bubble_sort(meu_vetor, tam);

    printf("Vetor ordenado: ");
    for(int i = 0; i < tam; i++) printf("%d ", meu_vetor[i]);
    printf("\n");

    return 0;
}