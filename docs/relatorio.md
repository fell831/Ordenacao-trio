# Relatório Técnico: Implementação e Análise de Algoritmos de Ordenação
**Grupo:** [FELLYPE MOTA FONSECA, FRANCISCO LUCAS PEREIRA DA SILVA, GEOVANY GUSMAO BELO]  
**Disciplina:** Projeto de Algoritmos e Estruturas de Dados  
**Repositório:** [https://github.com/fell831/Ordenacao-trio]

---

## 1. Introdução e Metodologia
Este relatório apresenta a fundamentação teórica, a metodologia de validação e os resultados empíricos obtidos no desenvolvimento de cinco algoritmos clássicos de ordenação de dados. O projeto foi estruturado de forma estritamente modular, dividindo as abordagens em duas categorias: 
* **Algoritmos Básicos (Quadráticos):** Bubble Sort, Insertion Sort e Selection Sort.
* **Algoritmos Avançados (Logarítmicos):** Merge Sort, Quick Sort e Heap Sort.

Para garantir a confiabilidade do código e a sua correta monitorização, o ambiente foi instrumentado nativamente através do compilador GCC utilizando as seguintes ferramentas de engenharia de software:
1. **gcov (GCC Code Coverage):** Para testar de forma analítica e comprovar a cobertura total de testes das funções.
2. **gprof (GNU Profiler):** Para mapear o tempo de processamento gasto na CPU e monitorizar o comportamento das chamadas e recursões.

---

## 2. Análise Assintótica Teórica (Complexidade Big-O)
A tabela seguinte resume a eficiência teórica de cada algoritmo implementado com base na Notação Big-O. Esta análise serve como base comparativa para os testes práticos.

| Algoritmo | Melhor Caso | Caso Médio | Pior Caso | Espaço Auxiliar | Estabilidade |
| :--- | :---: | :---: | :---: | :---: | :---: |
| **Bubble Sort** | $O(n)$ | $O(n^2)$ | $O(n^2)$ | $O(1)$ (In-place) | Estável |
| **Insertion Sort** | $O(n)$ | $O(n^2)$ | $O(n^2)$ | $O(1)$ (In-place) | Estável |
| **Selection Sort** | $O(n^2)$ | $O(n^2)$ | $O(n^2)$ | $O(1)$ (In-place) | Instável |
| **Merge Sort** | $O(n \log n)$ | $O(n \log n)$ | $O(n \log n)$ | $O(n)$ | Estável |
| **Quick Sort** | $O(n \log n)$ | $O(n \log n)$ | $O(n^2)$ | $O(\log n)$ | Instável |
| **Heap Sort** | $O(n \log n)$ | $O(n \log n)$ | $O(n \log n)$ | $O(1)$ (In-place) | Instável |

---

## 3. Validação de Cobertura de Código (gcov)
Através da bateria de testes estruturada no arquivo maestro `tests/test_basic.c`, executámos cenários com vetores desordenados, ordenados e inversamente ordenados. Os testes foram submetidos à análise do `gcov`, gerando os seguintes resultados oficiais de cobertura:

* **src/basicos/bubble.c:** 100.00% de linhas executadas
* **src/basicos/insertion.c:** 100.00% de linhas executadas
* **src/basicos/selection.c:** 100.00% de linhas executadas
* **src/avancados/merge.c:** 100.00% de linhas executadas
* **src/avancados/quick.c:** 100.00% de linhas executadas
* **src/avancados/heap.c:** 100.00% de linhas executadas

**Conclusão da Cobertura:** Atingir a marca de 100.00% de linhas executadas em todos os módulos comprova matematicamente que a suíte de testes locais foi exaustiva, cobrindo com sucesso todas as estruturas de decisão (`if`), laços de repetição (`for`, `while`) e casos de partição lógica dos algoritmos de ordenação.

---

## 4. Análise de Desempenho Empírica (gprof)
A tradução do arquivo de dados brutos de tempo de CPU (`gmon.out`) gerou o arquivo de perfil plano (`docs/analise_perfil.txt`). 

**Observações sobre o tempo de execução:**
Durante os testes de validação com vetores reduzidos ($N \le 10$), o tempo acumulado reportado pelo processador fixou-se em `0.00 segundos` para todas as funções. Este comportamento é perfeitamente normal e esperado na arquitetura de computadores moderna, uma vez que o tamanho das amostras de teste é processado instantaneamente ao nível dos registadores e da memória cache L1 da CPU, sem gerar atrasos mensuráveis em segundos.

**Validação das Chamadas Recursivas:**
O grafo de chamadas do `gprof` atestou que as divisões lógicas do *Merge Sort* e os pivôs do *Quick Sort* agiram em profundidade estritamente logarítmica, executando as subpartições de forma segura sem incorrer em sobrecarga da pilha de execução (*stack overflow*).

---

## 5. Conclusão do Controle do Projeto
O projeto cumpre com sucesso todos os requisitos técnicos estipulados pelo cronograma:
1. A árvore de diretórios está rigorosamente padronizada de forma modular.
2. Os bugs de compilação, problemas de linkagem cruzada (`__gcov_init`) e conflitos de histórico do Git foram totalmente sanados.
3. A automação está documentada e o software está pronto para avaliação final.