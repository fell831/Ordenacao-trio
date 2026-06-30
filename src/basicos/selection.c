#include <stdio.h>

void selection_sort(int vetor[], int tamanho) {
    int i;
    int j;
    int menor;
    int atual;

    for (i = 0; i < tamanho - 1; i++) {

        menor = i;

        for (j = i + 1; j < tamanho; j++) {

        if (vetor[j] < vetor[menor]) {
            menor = j;
        
        }
        
    }
    
    if (menor != i) {
        atual = vetor[i];
        vetor[i] = vetor[menor];
        vetor[menor] = atual;
        }
    }
}

