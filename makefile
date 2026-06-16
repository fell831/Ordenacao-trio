CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -O2
GCOV_FLAGS = -fprofile-arcs -ftest-coverage -g
PROFILE_FLAGS = -pg -g -O0

SRCS = src/main.c src/basicos/bubble.c src/basicos/selection.c src/basicos/insertion.c \
       src/avancados/merge.c src/avancados/quick.c src/avancados/heap.c
TEST_SRCS = tests/test_basic.c $(filter_out src/main.c,$(SRCS))
OBJS = $(SRCS:.c=.o)
TEST_OBJS = $(TEST_SRCS:.c=.o)

TARGET = sort_main
TEST_TARGET = test_basic

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(TEST_TARGET): $(TEST_OBJS)
	$(CC) $(CFLAGS) -o $@ $^