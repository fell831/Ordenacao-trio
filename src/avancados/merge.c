#include <stdio.h>
#include <stdlib.h>

void merge(int v[], int esq, int meio, int dir) {
    int i, j, k;
    int n1 = meio - esq + 1;
    int n2 = dir - meio;

    int *L = (int *)malloc(n1 * sizeof(int));
    int *R = (int *)malloc(n2 * sizeof(int));

    for (i = 0; i < n1; i++) L[i] = v[esq + i];
    for (j = 0; j < n2; j++) R[j] = v[meio + 1 + j];

    i = 0; j = 0; k = esq;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            v[k] = L[i];
            i++;
        } else {
            v[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) { v[k] = L[i]; i++; k++; }
    while (j < n2) { v[k] = R[j]; j++; k++; }

    free(L);
    free(R);
}

void mergeSortRecursivo(int v[], int esq, int dir) {
    if (esq < dir) {
        int meio = esq + (dir - esq) / 2;
        mergeSortRecursivo(v, esq, meio);
        mergeSortRecursivo(v, meio + 1, dir);
        merge(v, esq, meio, dir);
    }
}

// Nome da função principal seguindo o padrão exigido
void mergeSort(int v[], int n) {
    mergeSortRecursivo(v, 0, n - 1);
}