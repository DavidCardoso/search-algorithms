 # Programa Algoritmos de Busca
 # Created by David Cardoso
 # IMD0030 LP1 - Prof. Silvio Sampaio - BTI UFRN
 # @date 10/09/2016
 # @copyright (c) 2016 - All rights reserveds

PROG 		= busca.exe
CC 			= g++
CPPFLAGS 	= -std=c++11 -Wall -pedantic -g -O0
OBJS 		= main.o aux.o searchs.o

$(PROG):$(OBJS)
	$(CC) -o $(PROG) $(OBJS)

# principal
main.o: aux.h searchs.h main.cpp
	$(CC) $(CPPFLAGS) -c main.cpp

# funcoes de buscas
searchs.o: searchs.h searchs.cpp
	$(CC) $(CPPFLAGS) -c searchs.cpp

# funcoes e recursos auxiliares
aux.o: aux.h aux.cpp
	$(CC) $(CPPFLAGS) -c aux.cpp

# remove arquivos executaveis e objetos compilados
clean:
	rm -f core $(PROG) $(OBJS)

# testa o executavel com o valgrind
valgrind:
	valgrind -v --leak-check=full --show-reachable=yes --track-origins=yes ./$(PROG) 2000000 1 BSI

# up stack - aumenta o tamanho da pilha
upstack:
	sudo ulimit -s unlimited

# down stack - volta o tamanho da pilha para o default
downstack:
	sudo ulimit -s 8192

# execute o shell script AUTORUN
run:
	./AUTORUN.md

# remove arquivos de saida .csv
rmcsv:
	rm csv/*.csv

