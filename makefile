 # Programa Algoritmos de Busca
 # Created by David Cardoso
 # IMD0030 LP1 - Prof. Silvio Sampaio - BTI UFRN
 # @date 10/09/2016
 # @copyright (c) 2016 - All rights reserveds

PROG = busca.exe
CC = g++
CPPFLAGS = -std=c++11 -Wall -pedantic -g -O0
#LDFLAGS = 
OBJS = main.o myfuncs.o

$(PROG):$(OBJS)
	$(CC) -o $(PROG) $(OBJS)

main.o: searchs.h main.cpp
	$(CC) $(CPPFLAGS) -c main.cpp
	
searchs.o: searchs.h searchs.cpp
	$(CC) $(CPPFLAGS) -c searchs.cpp
	
clean:
	rm -f core $(PROG) $(OBJS)

vg:
	valgrind -v --leak-check=full --show-reachable=yes --track-origins=yes ./$(PROG)