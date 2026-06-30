#include <stdio.h>

void insertion_sort(int vetor[], int tamanho) {
    int i;
    int atual;
    int j;

    // Percorre o vetor a partir do segundo elemento
    for (i = 1; i < tamanho; i++) {

        // Elemento que será inserido na posição correta
        atual = vetor[i];

        // Índice do elemento anterior
        j = i - 1;
    while (j >= 0 && vetor[j] > atual) {
    vetor[j + 1] = vetor[j];
    j--;
}

vetor[j + 1] = atual;       
      
    }
}