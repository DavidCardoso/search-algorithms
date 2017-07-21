/**
* @file 		aux.cpp
* @brief 		Funções e outros recursos auxiliares.
* @details 		Contém a implementação de funções e outros recursos auxiliares.
* @author		David Cardoso
* @since		10/09/2016
* @date			13/09/2016
* @copyright 	2016 - All rights reserveds
* @sa 			https://github.com/davidcardoso-ti/search-algorithms/blob/master/aux.cpp
*/

#include "aux.h" 		// funcoes e recursos auxiliares
#include "searchs.h"	// funcoes de busca

using namespace std;


/**
 * @brief 	Função para selecionar o tipo de busca
 */
bool seleciona_busca(Searchs opcao, pSearch* p_search){

    switch(opcao){ /**< switch case   - seleciona busca de acordo com o parametro informado pelo usuario */

        case BSI: // Busca Sequencial Iterativa
            *p_search = &busca_sequencial_ite;
            return true;
        break;

        case BSR: // Busca Sequencial Recursiva
            *p_search = &busca_sequencial_rec;
            return true;
        break;

        case BBI: // Busca Binaria Iterativa
            *p_search = &busca_binaria_ite;
            return true;
        break;

        case BBR: // Busca Binaria Recursiva
            *p_search = &busca_binaria_rec;
            return true;
        break;

        case BTI: // Busca Ternaria Iterativa
            *p_search = &busca_ternaria_ite;
            return true;
        break;

        case BTR: // Busca Ternaria Recursiva
            *p_search = &busca_ternaria_rec;
            return true;
        break;

        default:
            return false;
    }
}

/**
 * @brief 	Função workloadFill
 */
void workloadFill(int* v, int size_vector){
    for (int i = 0; i < size_vector; i++) {
        v[i] = i*2;
    }
}
