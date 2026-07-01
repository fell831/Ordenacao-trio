#include <stdio.h>

void merge(int vetor[], int esquerdo, int meio, int direito) {
    int i, j, k;
    int n1 = meio - esquerdo + 1;
    int n2 = direito - meio;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++) L[i] = vetor[esquerdo + i];
    for (j = 0; j < n2; j++) R[j] = vetor[meio + 1 + j];

    i = 0; j = 0; k = esquerdo;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            vetor[k] = L[i];
            i++;
        } else {
            vetor[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        vetor[k] = L[i];
        i++; k++;
    }
    while (j < n2) {
        vetor[k] = R[j];
        j++; k++;
    }
}

void merge_sort(int vetor[], int esquerdo, int direito) {
    if (esquerdo < direito) {
        int meio = esquerdo + (direito - esquerdo) / 2;
        merge_sort(vetor, esquerdo, meio);
        merge_sort(vetor, meio + 1, direito);
        merge(vetor, esquerdo, meio, direito);
    }
}
