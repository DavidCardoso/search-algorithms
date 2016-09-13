#!/bin/bash

#@brief _Shell script p/ automatizar testes com vários workloads de buscas_

###########################################################
# AUTOMATIZAR TESTES COM VÁRIOS WORKLOADS DE BUSCAS #######
###########################################################

## Limpar console
clear

## Variáveis
INICIO="[ INI ]"

FIM="[ FIM ]"

PROG="./busca.exe"

DATA=$(date '+DATA: %d/%m/%Y HORA: %H:%M:%S')

EXT=".csv"

PATH_CSV="csv/"

KEY_HIT=4000000

KEY_MISS=3999999

SIZE=5000000

# Início
echo "Iniciando execucao do ./AUTORUN.md ..."

echo " "

## Cria diretorio csv/ se não existir OU finaliza execução
if [ -e "$PATH_CSV" ] ; then

	echo "O diretorio $PATH_CSV existe."

	echo " "

else

	echo "O diretorio $PATH_CSV nao existe!"

	echo "Criando o diretorio '$PATH_CSV' ..."

	mkdir "$PATH_CSV"

	if [ -e "$PATH_CSV" ] ; then

		echo "O diretorio $PATH_CSV foi criado com sucesso!"

		echo " "

	else

		echo "O diretorio $PATH_CSV nao pode ser criado."

		echo "Finalizando..."

		echo " "

		exit

	fi

fi

###########################################################
## BUSCA ITERATIVA ########################################
###########################################################

### Workload HIT - Busca Sequencial Iterativa
ARGUMENTOS="${SIZE} ${KEY_HIT} BSI" 

echo 	${INICIO} 	${ARGUMENTOS} - ${DATA}

		${PROG} 	${ARGUMENTOS} >> "${PATH_CSV}${ARGUMENTOS}${EXT}"

echo 	${FIM} 		${ARGUMENTOS} - ${DATA}

echo " "

### Workload MISS - Busca Sequencial Iterativa
ARGUMENTOS="${SIZE} ${KEY_MISS} BSI"

echo 	${INICIO} 	${ARGUMENTOS} - ${DATA}

		${PROG} 	${ARGUMENTOS} >> "${PATH_CSV}${ARGUMENTOS}${EXT}"

echo 	${FIM} 		${ARGUMENTOS} - ${DATA}

echo " "

### Workload HIT - Busca Binaria Iterativa
ARGUMENTOS="${SIZE} ${KEY_HIT} BBI"

echo 	${INICIO} 	${ARGUMENTOS} - ${DATA}

		${PROG} 	${ARGUMENTOS} >> "${PATH_CSV}${ARGUMENTOS}${EXT}"

echo 	${FIM} 		${ARGUMENTOS} - ${DATA}

echo " "

### Workload MISS - Busca Binaria Iterativa
ARGUMENTOS="${SIZE} ${KEY_MISS} BBI"

echo 	${INICIO} 	${ARGUMENTOS} - ${DATA}

		${PROG} 	${ARGUMENTOS} >> "${PATH_CSV}${ARGUMENTOS}${EXT}"

echo 	${FIM} 		${ARGUMENTOS} - ${DATA}

echo " "

### Workload HIT - Busca Ternaria Iterativa
ARGUMENTOS="${SIZE} ${KEY_HIT} BTI"

echo 	${INICIO} 	${ARGUMENTOS} - ${DATA}

		${PROG} 	${ARGUMENTOS} >> "${PATH_CSV}${ARGUMENTOS}${EXT}"

echo 	${FIM} 		${ARGUMENTOS} - ${DATA}

echo " "

### Workload MISS - Busca Ternaria Iterativa
ARGUMENTOS="${SIZE} ${KEY_MISS} BTI"

echo 	${INICIO} 	${ARGUMENTOS} - ${DATA}

		${PROG} 	${ARGUMENTOS} >> "${PATH_CSV}${ARGUMENTOS}${EXT}"

echo 	${FIM} 		${ARGUMENTOS} - ${DATA}

echo " "

###########################################################
## BUSCA RECURSIVA ########################################
###########################################################

### Workload HIT - Busca Sequencial Recursiva
ARGUMENTOS="${SIZE} ${KEY_HIT} BSR"

echo 	${INICIO} 	${ARGUMENTOS} - ${DATA}

		${PROG} 	${ARGUMENTOS} >> "${PATH_CSV}${ARGUMENTOS}${EXT}"

echo 	${FIM} 		${ARGUMENTOS} - ${DATA}

echo " "

### Workload MISS - Busca Sequencial Recursiva
ARGUMENTOS="${SIZE} ${KEY_MISS} BSR"

echo 	${INICIO} 	${ARGUMENTOS} - ${DATA}

		${PROG} 	${ARGUMENTOS} >> "${PATH_CSV}${ARGUMENTOS}${EXT}"

echo 	${FIM} 		${ARGUMENTOS} - ${DATA}

echo " "

### Workload HIT - Busca Binaria Recursiva
ARGUMENTOS="${SIZE} ${KEY_HIT} BBR"

echo 	${INICIO} 	${ARGUMENTOS} - ${DATA}

		${PROG} 	${ARGUMENTOS} >> "${PATH_CSV}${ARGUMENTOS}${EXT}"

echo 	${FIM} 		${ARGUMENTOS} - ${DATA}

echo " "

### Workload MISS - Busca Binaria Recursiva
ARGUMENTOS="${SIZE} ${KEY_MISS} BBR"

echo 	${INICIO} 	${ARGUMENTOS} - ${DATA}

		${PROG} 	${ARGUMENTOS} >> "${PATH_CSV}${ARGUMENTOS}${EXT}"

echo 	${FIM} 		${ARGUMENTOS} - ${DATA}

echo " "

### Workload HIT - Busca Ternaria Recursiva
ARGUMENTOS="${SIZE} ${KEY_HIT} BTR"

echo 	${INICIO} 	${ARGUMENTOS} - ${DATA}

		${PROG} 	${ARGUMENTOS} >> "${PATH_CSV}${ARGUMENTOS}${EXT}"

echo 	${FIM} 		${ARGUMENTOS} - ${DATA}

echo " "

### Workload MISS - Busca Ternaria Recursiva
ARGUMENTOS="${SIZE} ${KEY_MISS} BTR"

echo 	${INICIO} 	${ARGUMENTOS} - ${DATA}

		${PROG} 	${ARGUMENTOS} >> "${PATH_CSV}${ARGUMENTOS}${EXT}"

echo 	${FIM} 		${ARGUMENTOS} - ${DATA}

echo " "

# Fim
echo "Finalizado execucao do ./AUTORUN.md"

echo " "