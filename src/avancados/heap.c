#include <stdio.h>

void trocarHeap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int v[], int n, int i) {
    int maior = i;
    int esq = 2 * i + 1;
    int dir = 2 * i + 2;

    if (esq < n && v[esq] > v[maior]) maior = esq;
    if (dir < n && v[dir] > v[maior]) maior = dir;

    if (maior != i) {
        trocarHeap(&v[i], &v[maior]);
        heapify(v, n, maior);
    }
}

// Nome da função principal seguindo o padrão exigido
void heapSort(int v[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(v, n, i);
    }

    for (int i = n - 1; i > 0; i--) {
        trocarHeap(&v[0], &v[i]);
        heapify(v, i, 0);
    }
}