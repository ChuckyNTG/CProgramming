CC = gcc

outputMakefile: arrays.o printer.o
	gcc -o $@ arrays.o printer.o

%.o:%.c
	$(CC) -c $< -o $@
