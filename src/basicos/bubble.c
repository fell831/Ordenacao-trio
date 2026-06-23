#include <stdio.h>
#include <stdbool.h>



void bubble_sort(int vetor[], int tamanho) {
    int i, j, atual;
    bool trocas;

   
    for (i = 0; i < tamanho - 1; i++) {
        trocas = false;

       
        for (j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                // (swap)
                atual = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = atual;
                
                
                trocas = true;
            }
        }

        
        if (!trocas) {
            break;
        }
    }
}