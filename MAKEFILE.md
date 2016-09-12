 # MAKEFILE
 
 @brief _Makefile do Programa Algoritmos de Busca_

 @details **Projeto 1** da disciplina **IMD0030 LP1**, ministrada pelo Prof. Silvio Sampaio no curso BTI da UFRN.
 
 @author David Cardoso

 @date 10/09/2016

 @copyright (c) 2016 - All rights reserveds

## Variáveis
PROG 		= busca.exe

CC 			= g++

CPPFLAGS 	= -std=c++11 -Wall -pedantic -g -O0

OBJS 		= main.o aux.o searchs.o

# Executável
	"$(PROG):$(OBJS)"

		"$(CC) -o $(PROG) $(OBJS)"

## Principal
main.o: aux.h searchs.h main.cpp

	"$(CC) $(CPPFLAGS) -c main.cpp"

## Funções de buscas
searchs.o: searchs.h searchs.cpp

	"$(CC) $(CPPFLAGS) -c searchs.cpp"

## Funções e recursos auxiliares
aux.o: aux.h aux.cpp

	"$(CC) $(CPPFLAGS) -c aux.cpp"

# Comandos

## Remover arquivos executaveis e objetos compilados
clean:

	rm -f core $(PROG) $(OBJS)

## Testar o executavel com o valgrind
valgrind:

	valgrind -v --leak-check=full --show-reachable=yes --track-origins=yes ./$(PROG) 2000000 4000000 BSI

## Up stack - aumenta o tamanho da pilha
upstack:

	sudo ulimit -s unlimited

## Down stack - volta o tamanho da pilha para o default
downstack:

	sudo ulimit -s 8192

## Executar o shell script AUTORUN
run:

	./AUTORUN.md

## Remover arquivos de saida .csv
rmcsv:

	rm csv/*.csv

