CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -O2
GCOV_FLAGS = -fprofile-arcs -ftest-coverage -g
PROFILE_FLAGS = -pg -g -O0

# Lista de todos os arquivos de algoritmos puros
ALGORITMOS = src/basicos/bubble.c src/basicos/selection.c src/basicos/insertion.c \
             src/avancados/merge.c src/avancados/quick.c src/avancados/heap.c

# O arquivo principal de testes do desenvolvedor
TEST_SRCS = tests/test_basic.c $(ALGORITMOS)
TEST_OBJS = $(TEST_SRCS:.c=.o)

TEST_TARGET = test_basic

# CORRIGIDO: Agora o alvo padrão 'all' vai construir diretamente o test_basic
all: $(TEST_TARGET)

$(TEST_TARGET): $(TEST_OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Regra de limpeza para ajudar nos testes locais
clean:
	rm -f src/basicos/*.o src/avancados/*.o tests/*.o $(TEST_TARGET) $(TEST_TARGET).exe *.gcda *.gcno *.gcov gmon.out