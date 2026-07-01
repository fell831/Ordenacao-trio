#include <stdio.h>

// 1. PROTÓTIPOS DAS FUNÇÕES (Básicos e Avançados)
void bubble_sort(int vetor[], int tamanho);
void insertion_sort(int vetor[], int tamanho);
void selection_sort(int vetor[], int tamanho);
void merge_sort(int vetor[], int esquerdo, int direito);
void quick_sort(int vetor[], int baixo, int alto);
void heap_sort(int vetor[], int tamanho);

// Função auxiliar para exibir os resultados
void imprimir_vetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

// 2. PONTO DE ENTRADA ÚNICO

int main() {
    printf("=========================================\n");
    printf("   EXECUTANDO CENARIOS DE TESTE LOCAIS   \n");
    printf("=========================================\n\n");

    // Dentro da main do seu tests/test_basic.c, certifique-se de ter:
int vetor_bubble[] = {12, 5, 3, 1, 8, 7};
int tamanho_bubble = sizeof(vetor_bubble) / sizeof(vetor_bubble[0]);

printf("[Bubble Sort] Antes : ");
imprimir_vetor(vetor_bubble, tamanho_bubble);

bubble_sort(vetor_bubble, tamanho_bubble); // Chamada crucial para o gcov rastrear!

printf("[Bubble Sort] Depois: ");
imprimir_vetor(vetor_bubble, tamanho_bubble);
printf("-----------------------------------------\n");


    // --- TESTE DO INSERTION SORT (Básico) ---
    int vetor_ins[] = {15, 3, 9, 1, 22, 8};
    int tam_ins = sizeof(vetor_ins) / sizeof(vetor_ins[0]);
    printf("[Insertion Sort] Antes : ");
    imprimir_vetor(vetor_ins, tam_ins);
    insertion_sort(vetor_ins, tam_ins);
    printf("[Insertion Sort] Depois: ");
    imprimir_vetor(vetor_ins, tam_ins);
    printf("-----------------------------------------\n\n");

    // --- TESTE DO SELECTION SORT (Básico) ---
    int vetor_sel[] = {45, 12, 88, 5, 0, -2};
    int tam_sel = sizeof(vetor_sel) / sizeof(vetor_sel[0]);
    printf("[Selection Sort] Antes : ");
    imprimir_vetor(vetor_sel, tam_sel);
    selection_sort(vetor_sel, tam_sel);
    printf("[Selection Sort] Depois: ");
    imprimir_vetor(vetor_sel, tam_sel);
    printf("-----------------------------------------\n\n");

    // --- TESTE DO MERGE SORT (Avançado) ---
    int vetor_merge[] = {38, 27, 43, 3, 9, 82, 10};
    int tam_merge = sizeof(vetor_merge) / sizeof(vetor_merge[0]);
    printf("[Merge Sort] Antes : ");
    imprimir_vetor(vetor_merge, tam_merge);
    merge_sort(vetor_merge, 0, tam_merge - 1);
    printf("[Merge Sort] Depois: ");
    imprimir_vetor(vetor_merge, tam_merge);
    printf("-----------------------------------------\n\n");

    // --- NOVO: TESTE DO QUICK SORT (Avançado) ---
    int vetor_quick[] = {10, 7, 8, 9, 1, 5};
    int tam_quick = sizeof(vetor_quick) / sizeof(vetor_quick[0]);
    printf("[Quick Sort] Antes : ");
    imprimir_vetor(vetor_quick, tam_quick);
    
    // Note os parâmetros de limites (0 e tamanho - 1) para o Quick Sort
    quick_sort(vetor_quick, 0, tam_quick - 1);
    
    printf("[Quick Sort] Depois: ");
    imprimir_vetor(vetor_quick, tam_quick);
    printf("-----------------------------------------\n\n");

    // --- NOVO: TESTE DO HEAP SORT (Avançado) ---
    int vetor_heap[] = {12, 11, 13, 5, 6, 7};
    int tam_heap = sizeof(vetor_heap) / sizeof(vetor_heap[0]);
    printf("[Heap Sort] Antes : ");
    imprimir_vetor(vetor_heap, tam_heap);
    
    heap_sort(vetor_heap, tam_heap);
    
    printf("[Heap Sort] Depois: ");
    imprimir_vetor(vetor_heap, tam_heap);
    printf("=========================================\n");

    return 0;
}
