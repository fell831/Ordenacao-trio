#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int particionar(int v[], int baixo, int alto) {
    int pivo = v[alto]; 
    int i = (baixo - 1);

    for (int j = baixo; j <= alto - 1; j++) {
        if (v[j] < pivo) {
            i++;
            trocar(&v[i], &v[j]);
        }
    }
    trocar(&v[i + 1], &v[alto]);
    return (i + 1);
}

void quickSortRecursivo(int v[], int baixo, int alto) {
    if (baixo < alto) {
        int pi = particionar(v, baixo, alto);
        quickSortRecursivo(v, baixo, pi - 1);
        quickSortRecursivo(v, pi + 1, alto);
    }
}

// Nome da função principal seguindo o padrão exigido
void quickSort(int v[], int n) {
    quickSortRecursivo(v, 0, n - 1);
}