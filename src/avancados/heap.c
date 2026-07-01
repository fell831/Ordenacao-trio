#include <stdio.h>

// Função auxiliar para reorganizar uma subárvore com raiz no índice i
void heapify(int vetor[], int tamanho, int i) {
    int maior = i; 
    int esquerdo = 2 * i + 1; 
    int direito = 2 * i + 2;  

    if (esquerdo < tamanho && vetor[esquerdo] > vetor[maior])
        maior = esquerdo;

    if (direito < tamanho && vetor[direito] > vetor[maior])
        maior = direito;

    if (maior != i) {
        int atual = vetor[i];
        vetor[i] = vetor[maior];
        vetor[maior] = atual;

        // Aplica recursivamente o heapify na subárvore afetada
        heapify(vetor, tamanho, maior);
    }
}

// Função principal do Heap Sort
void heap_sort(int vetor[], int tamanho) {
    // Constrói o max-heap original
    for (int i = tamanho / 2 - 1; i >= 0; i--)
        heapify(vetor, tamanho, i);

    // Extrai um por um os elementos do heap
    for (int i = tamanho - 1; i > 0; i--) {
        // Move a raiz atual para o fim do vetor
        int atual = vetor[0];
        vetor[0] = vetor[i];
        vetor[i] = atual;

        // Reorganiza o heap restante
        heapify(vetor, i, 0);
    }
}