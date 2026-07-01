#include <stdio.h>

// Função auxiliar para trocar dois elementos de posição
void trocar(int *a, int *b) {
    int temporario = *a;
    *a = *b;
    *b = temporario;
}

// Função de partição que escolhe o pivô (último elemento)
int particionar(int vetor[], int baixo, int alto) {
    int pivo = vetor[alto];
    int i = (baixo - 1);

    for (int j = baixo; j < alto; j++) {
        if (vetor[j] < pivo) {
            i++;
            trocar(&vetor[i], &vetor[j]);
        }
    }
    trocar(&vetor[i + 1], &vetor[alto]);
    return (i + 1);
}

// Função principal do Quick Sort
void quick_sort(int vetor[], int baixo, int alto) {
    if (baixo < alto) {
        // Primeiro guardamos o índice do pivô posicionado
        int indice_particao = particionar(vetor, baixo, alto);
        
        // CORRIGIDO: Ordena recursivamente a metade esquerda e a metade direita
        quick_sort(vetor, baixo, indice_particao - 1);
        quick_sort(vetor, indice_particao + 1, alto);
    }
} 