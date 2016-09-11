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

// #include <iostream>
// #include <sstream>
// #include <fstream>
// #include <cmath>
// #include <string>
// #include <cstring>
// #include <chrono>
#include "aux.h"
#include "searchs.h"

using namespace std;
using namespace std::chrono;


/**
 * @brief 	Função busca SEQUENCIAL na forma ITERATIVA
 */
int busca_sequencial_ite	(int chave, int* vetor, int left, int tamanho){
    int posicao = 0; /**< posicao - Inicializa posição de busca */
    
    do{
        // Verifica se encontrou elemento
        if(chave == vetor[posicao]){
            return posicao;
        }
        // Incrementa posição de busca
        posicao = posicao + 1;
    } while( posicao <= tamanho );
    
    // Não encontrou elemento
    return -1;
}

/**
 * @brief 	Função busca SEQUENCIAL na forma RECURSIVA
 */
int busca_sequencial_rec	(int chave, int* vetor, int left, int tamanho){

	// Verifica se encontrou elemento
	if(chave == vetor[tamanho])
		return tamanho;
	else if(tamanho >= 0)
		busca_sequencial_rec(chave, vetor, 0, tamanho-1);
	
	// Não encontrou elemento
	return -1;
}

/**
 * @brief 	Função busca BINÁRIA na forma ITERATIVA
 */
int busca_binaria_ite		(int chave, int* vetor, int left, int tamanho){
	
	//int left; 			/**< left - inicio do trecho a ser testado */
	int right = tamanho; 	/**< right - fim do trecho a ser testado */
	int meio; 				/**< meio - indice entre as duas partes do vetor */

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
 * @brief 	Função busca BINÁRIA na forma RECURSIVA
 */
int busca_binaria_rec		(int chave, int* vetor, int left, int right){
	
	int meio; 		/**< meio - indice entre as duas partes do vetor */
	
	// busca em sequencia CRESCENTE
	while(left <= right){
		// calcula o elemento entre as duas partes
		meio = (left+right)/2;
		// Verifica se encontrou elemento
		if(chave == vetor[meio]){
			return meio;
		}
		// se chave está na parte direita
		else if (chave > vetor[meio]){
			return busca_binaria_rec(chave, vetor, meio+1, right);
		}
		// se chave está na parte esquerda
		else{
			return busca_binaria_rec(chave, vetor, left, meio-1);
		}
	}
	// Não encontrou elemento
	return -1;
}

/**
 * @brief 	Função busca TERNÁRIA na forma ITERATIVA
 */
int busca_ternaria_ite		(int chave, int* vetor, int left, int tamanho){
	
	//int left; 			/**< left - inicio do trecho a ser testado */
	int right = tamanho; 	/**< right - fim do trecho a ser testado */
	int meio; 				/**< meio - indice entre as duas partes do vetor */

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
 * @brief 	Função busca TERNÁRIA na forma RECURSIVA
 */
int busca_ternaria_rec		(int chave, int* vetor, int left, int tamanho){
	return -1;
}