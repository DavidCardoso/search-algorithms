/**
* @file 		searchs.cpp
* @brief 		Funções de busca
* @details 		Contém a implementaçao das funções que fazem buscas do tipo sequencial, binária e ternária, 
*            	nas suas respectivas formas iterativa e recursiva.
* @author		David Cardoso
* @since		10/09/2016
* @date			13/09/2016
* @copyright 	2016 - All rights reserveds
* @sa 			http://projetos.imd.ufrn.br/davidcardoso-ti/imd0030-projeto1/blob/master/searchs.cpp
*/

#include <iostream>
#include <sstream>
#include <fstream>
#include <cmath>
#include <string>
#include <cstring>
#include <chrono>
#include "aux.h"
#include "searchs.h"

using namespace std;
using namespace std::chrono;


/**
 * @brief			Função busca sequencial na forma iterativa
 * @details			Esse tipo de busca testa cada elemento do vetor até encontrar a chave ou atingir o final do vetor.
 *            		O vetor não precisa estar ordenado.
 * @param  chave   	valor a ser encontrado no vetor
 * @param  vetor   	vetor a ser percorrido
 * @param  tamanho 	tamanho do vetor
 * @return         	retorna o indice da posição que se encontra a chave ou -1, caso não encontre
 */
int busca_sequencial_ite	(int chave, int* vetor, int tamanho){
    int posicao = 0; /**< posicao - Inicializa posição de busca */
    
    do{
        // Verifica se encontrou elemento
        if(chave == vetor[posicao]){
            return posicao;
        }
        
        // Incrementa posição de busca
        posicao = posicao + 1;
    } while( posicao < tamanho );
    
    // Não encontrou elemento
    return -1;
}

/**
 * @brief			Função busca sequencial na forma recursiva
 * @details			Esse tipo de busca testa cada elemento do vetor até encontrar a chave ou atingir o final do vetor.
 *            		O vetor não precisa estar ordenado.
 * @param  chave   	valor a ser encontrado no vetor
 * @param  vetor   	vetor a ser percorrido
 * @param  tamanho 	tamanho do vetor
 * @return         	retorna o indice da posição que se encontra a chave ou -1, caso não encontre
 */
int busca_sequencial_rec	(int chave, int* vetor, int tamanho){

	// Verifica se encontrou elemento
	if(chave == vetor[tamanho-1])
		return tamanho-1;
	else if(tamanho-1 >= 0)
		busca_sequencial_rec(chave, vetor, tamanho-1);
	
	// Não encontrou elemento
	return -1;
}

/**
 * @brief			Função busca binária na forma iterativa
 * @details			Esse tipo de busca utiliza a idea de 'dividir para conquistar'.
 *            		O vetor é dividido gradativamente em duas partes e sendo testado em qual parte deve estar a chave 
 *            		até encontrá-la ou atingir um subvetor unitário.
 *            		O vetor precisa estar ordenado.
 * @param  chave   	valor a ser encontrado no vetor
 * @param  vetor   	vetor a ser percorrido
 * @param  tamanho 	tamanho do vetor
 * @return         	retorna o indice da posição que se encontra a chave ou -1, caso não encontre
 */
int busca_binaria_ite		(int chave, int* vetor, int tamanho){
	int meio; /**< meio - indice entre as duas partes do vetor */
	int left = 0;
	int right = tamanho-1;

    // busca em sequencia CRESCENTE
	while(left <= right){
		// calcula o elemento entre as duas partes
	    meio = (left+right)/2;
	    // se chave está na parte esquerda
	    if(chave < vetor[meio]){
			right = meio-1;
		// se chave está na parte direita
	    }else if(chave > vetor[meio]){
			left = meio+1;
	    }else{
	    	// encontrou elemento
			return meio;
	    }
	}

	// Não encontrou elemento
    return -1;
}

/**
 * @brief			Função busca binária na forma recursiva
 * @details			Esse tipo de busca utiliza a idea de 'dividir para conquistar'.
 *            		O vetor é dividido gradativamente em duas partes e sendo testado em qual parte deve estar a chave 
 *            		até encontrá-la ou atingir um subvetor unitário.
 *            		O vetor precisa estar ordenado.
 * @param  chave   	valor a ser encontrado no vetor
 * @param  vetor   	vetor a ser percorrido
 * @param  tamanho 	tamanho do vetor
 * @return         	retorna o indice da posição que se encontra a chave ou -1, caso não encontre
 */
int busca_binaria_rec		(int chave, int* vetor, int tamanho){
	return -1;
}

/**
 * @brief			Função busca ternária na forma iterativa
 * @details			Esse tipo de busca utiliza a idea de 'dividir para conquistar'.
 *            		O vetor é dividido gradativamente em três partes e sendo testado em qual parte deve estar a chave 
 *            		até encontrá-la ou atingir um subvetor unitário.
 *            		O vetor precisa estar ordenado.
 * @param  chave   	valor a ser encontrado no vetor
 * @param  vetor   	vetor a ser percorrido
 * @param  tamanho 	tamanho do vetor
 * @return         	retorna o indice da posição que se encontra a chave ou -1, caso não encontre
 */
int busca_ternaria_ite		(int chave, int* vetor, int tamanho){
	return -1;
}

/**
 * @brief			Função busca ternária na forma recursiva
 * @details			Esse tipo de busca utiliza a idea de 'dividir para conquistar'.
 *            		O vetor é dividido gradativamente em três partes e sendo testado em qual parte deve estar a chave 
 *            		até encontrá-la ou atingir um subvetor unitário.
 *            		O vetor precisa estar ordenado.
 * @param  chave   	valor a ser encontrado no vetor
 * @param  vetor   	vetor a ser percorrido
 * @param  tamanho 	tamanho do vetor
 * @return         	retorna o indice da posição que se encontra a chave ou -1, caso não encontre
 */
int busca_ternaria_rec		(int chave, int* vetor, int tamanho){
	return -1;
}