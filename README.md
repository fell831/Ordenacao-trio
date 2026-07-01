# Ordenacao-trio
# Projeto: Implementação Modular e Análise de Algoritmos de Ordenação em C

Este repositório contém o desenvolvimento e a análise  de seis algoritmos clássicos de ordenação de dados. O projeto adota uma arquitetura estritamente modular e divide as abordagens em duas classes de complexidade assintótica (Algoritmos Básicos e Avançados).

---

## 📂 Estrutura de Diretórios do Repositório

A árvore do projeto segue rigorosamente a padronização e modularização exigidas:

* **`src/basicos/`**: Contém as lógicas de ordenação quadrática:
    * `bubble.c` ($O(n^2)$)
    * `insertion.c` ($O(n^2)$)
    * `selection.c` ($O(n^2)$)
* **`src/avancados/`**: Contem as lógicas de divisão, conquista e árvore de prioridades:
    * `merge.c` ($O(n \log n)$)
    * `quick.c` ($O(n \log n)$)
    * `heap.c` ($O(n \log n)$)
* **`tests/`**: Diretório que hospeda o arquivo maestro de execução global (`test_basic.c`).
* **`docs/`**: Centraliza os relatórios técnicos gerados pelas ferramentas de profile e cobertura, bem como o termo de transparência de IA.

---

## 🚀 Como Compilar e Executar (Instruções de Avaliação)

A automação da compilação foi projetada por meio do arquivo de diretivas `makefile` para garantir compatibilidade nativa com ambientes POSIX (Linux, macOS, WSL).

### 1. Compilação Automatizada
Para processar os objetos modulares e linkar o executável mestre de testes, execute na raiz do projeto:
```bash
make