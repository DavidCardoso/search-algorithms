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

#include "aux.h" 		// funcoes e recursos auxiliares
#include "searchs.h"	// funcoes de busca

using namespace std;


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
int busca_binaria_ite		(int chave, int* vetor, int left, int right){
	
	//int left; 			/**< left - inicio do trecho a ser testado */
	//int right; 			/**< right - fim do trecho a ser testado */
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
int busca_ternaria_ite		(int chave, int* vetor, int left, int right){
	
	//int left; 			/**< left  - inicio do trecho a ser testado */
	//int right; 			/**< right - fim do trecho a ser testado */
	int meio1; 				/**< meio1 - indice entre as partes 1 e 2 */
	int meio2; 				/**< meio2 - indice entre as partes 2 e 3 */

    // busca em sequencia CRESCENTE
	while(left <= right){
		// calcula o elemento entre as partes 1 e 2
	    meio1 = (right-left)/3 + left;
	    // calcula o elemento entre as partes 2 e 3
	    meio2 = ((right-left)/3)*2 + left;

	    // se chave está na parte 1
	    if(chave < vetor[meio1]){
			right = meio1-1;
	    }
		// se chave está na parte 2
	    else if(chave > vetor[meio1] && chave < vetor[meio2]){
			left  = meio1+1;
			right = meio2-1;
		}
		// se chave está na parte 3
	    else if(chave > vetor[meio2]){
			left = meio2+1;
	    }
	    // Verifica se encontrou elemento
	    else if(chave == vetor[meio1]){
	    	return meio1;
	    }else
			return meio2;	    
	}

	// Não encontrou elemento
    return -1;
}

/**
 * @brief 	Função busca TERNÁRIA na forma RECURSIVA
 */
int busca_ternaria_rec		(int chave, int* vetor, int left, int right){
	
	//int left; 			/**< left  - inicio do trecho a ser testado */
	//int right;			/**< right - fim do trecho a ser testado */
	int meio1; 				/**< meio1 - indice entre as partes 1 e 2 */
	int meio2; 				/**< meio2 - indice entre as partes 2 e 3 */
	
	// busca em sequencia CRESCENTE
	while(left <= right){
		// calcula o elemento entre as partes 1 e 2
	    meio1 = (right-left)/3 + left;
	    // calcula o elemento entre as partes 2 e 3
	    meio2 = ((right-left)/3)*2 + left;

		// Verifica se encontrou elemento
		if(chave == vetor[meio1]){
	    	return meio1;
	    }else if(chave == vetor[meio2]){
			return meio2;
	    }

	    // se chave está na parte 1
	    if(chave < vetor[meio1]){
			return busca_ternaria_rec(chave, vetor, left, meio1-1);
	    }
		// se chave está na parte 2
	    else if(chave > vetor[meio1] && chave < vetor[meio2]){
			return busca_ternaria_rec(chave, vetor, meio1+1, meio2-1);
		}
		// se chave está na parte 3
	    else if(chave > vetor[meio2]){
			return busca_ternaria_rec(chave, vetor, meio2+1, right);
	    }
	}
	// Não encontrou elemento
	return -1;
}