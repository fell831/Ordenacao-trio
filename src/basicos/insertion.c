#include <stdio.h>

void insertion_sort(int vetor[], int tamanho) {
    int i, atual, j;
    for (i = 1; i < tamanho; i++) {
        atual = vetor[i];
        j = i - 1;
        while (j >= 0 && vetor[j] > atual) {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = atual;
    }
}