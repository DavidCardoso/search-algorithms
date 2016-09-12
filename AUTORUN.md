#!/bin/bash

@brief _Shell script p/ automatizar testes com vários workloads de buscas_

###########################################################
# AUTOMATIZAR TESTES COM VÁRIOS WORKLOADS DE BUSCAS #######
###########################################################

## Limpar console
clear

## Variáveis
INICIO="[ INI ]"

FIM="[ FIM ]"

PROG="./busca.exe"

EXT=".csv"

PATH_CSV="csv/"


###########################################################
## BUSCA ITERATIVA ########################################
###########################################################

### Workload HIT - Busca Sequencial Iterativa
ARGUMENTOS="2000000 4000000 BSI" 

echo 	${INICIO} 	${ARGUMENTOS} $(date)

		${PROG} 	${ARGUMENTOS} >> "${PATH_CSV}${ARGUMENTOS}${EXT}"

echo 	${FIM} 		${ARGUMENTOS} $(date)

echo " "

### Workload MISS - Busca Sequencial Iterativa
ARGUMENTOS="2000000 3999999 BSI"

echo 	${INICIO} 	${ARGUMENTOS} $(date)

		${PROG} 	${ARGUMENTOS} >> "${PATH_CSV}${ARGUMENTOS}${EXT}"

echo 	${FIM} 		${ARGUMENTOS} $(date)

echo " "

### Workload HIT - Busca Binaria Iterativa
ARGUMENTOS="2000000 4000000 BBI"

echo 	${INICIO} 	${ARGUMENTOS} $(date)

		${PROG} 	${ARGUMENTOS} >> "${PATH_CSV}${ARGUMENTOS}${EXT}"

echo 	${FIM} 		${ARGUMENTOS} $(date)

echo " "

### Workload MISS - Busca Binaria Iterativa
ARGUMENTOS="2000000 3999999 BBI"

echo 	${INICIO} 	${ARGUMENTOS} $(date)

		${PROG} 	${ARGUMENTOS} >> "${PATH_CSV}${ARGUMENTOS}${EXT}"

echo 	${FIM} 		${ARGUMENTOS} $(date)

echo " "

### Workload HIT - Busca Ternaria Iterativa
ARGUMENTOS="2000000 4000000 BTI"

echo 	${INICIO} 	${ARGUMENTOS} $(date)

		${PROG} 	${ARGUMENTOS} >> "${PATH_CSV}${ARGUMENTOS}${EXT}"

echo 	${FIM} 		${ARGUMENTOS} $(date)

echo " "

### Workload MISS - Busca Ternaria Iterativa
ARGUMENTOS="2000000 3999999 BTI"

echo 	${INICIO} 	${ARGUMENTOS} $(date)

		${PROG} 	${ARGUMENTOS} >> "${PATH_CSV}${ARGUMENTOS}${EXT}"

echo 	${FIM} 		${ARGUMENTOS} $(date)

echo " "

###########################################################
## BUSCA RECURSIVA ########################################
###########################################################

### Workload HIT - Busca Sequencial Recursiva
ARGUMENTOS="2000000 4000000 BSR"

echo 	${INICIO} 	${ARGUMENTOS} $(date)

		${PROG} 	${ARGUMENTOS} >> "${PATH_CSV}${ARGUMENTOS}${EXT}"

echo 	${FIM} 		${ARGUMENTOS} $(date)

echo " "

### Workload MISS - Busca Sequencial Recursiva
ARGUMENTOS="2000000 3999999 BSR"

echo 	${INICIO} 	${ARGUMENTOS} $(date)

		${PROG} 	${ARGUMENTOS} >> "${PATH_CSV}${ARGUMENTOS}${EXT}"

echo 	${FIM} 		${ARGUMENTOS} $(date)

echo " "

### Workload HIT - Busca Binaria Recursiva
ARGUMENTOS="2000000 4000000 BBR"

echo 	${INICIO} 	${ARGUMENTOS} $(date)

		${PROG} 	${ARGUMENTOS} >> "${PATH_CSV}${ARGUMENTOS}${EXT}"

echo 	${FIM} 		${ARGUMENTOS} $(date)

echo " "

### Workload MISS - Busca Binaria Recursiva
ARGUMENTOS="2000000 3999999 BBR"

echo 	${INICIO} 	${ARGUMENTOS} $(date)

		${PROG} 	${ARGUMENTOS} >> "${PATH_CSV}${ARGUMENTOS}${EXT}"

echo 	${FIM} 		${ARGUMENTOS} $(date)

echo " "

### Workload HIT - Busca Ternaria Recursiva
ARGUMENTOS="2000000 4000000 BTR"

echo 	${INICIO} 	${ARGUMENTOS} $(date)

		${PROG} 	${ARGUMENTOS} >> "${PATH_CSV}${ARGUMENTOS}${EXT}"

echo 	${FIM} 		${ARGUMENTOS} $(date)

echo " "

### Workload MISS - Busca Ternaria Recursiva
ARGUMENTOS="2000000 3999999 BTR"

echo 	${INICIO} 	${ARGUMENTOS} $(date)

		${PROG} 	${ARGUMENTOS} >> "${PATH_CSV}${ARGUMENTOS}${EXT}"

echo 	${FIM} 		${ARGUMENTOS} $(date)

echo " "