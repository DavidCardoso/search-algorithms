/**
* @file 		main.cpp
* @brief 		Programa Algoritmos de Busca
* @details 		O objetivo deste trabalho é confirmar ou corrigir a hipótese de que são significativas as diferenças
*               entre os tempos de execução das funções de busca sequencial, binária e ternária; e que as versões
*               recursivas são mais rápidas do que as iterativas para todos os casos. Para isso, serão implementados
*               os três modelos de busca em ambas as versões iterativa e recursiva. As implementações deverão ser
*               testadas para diferentes cargas (workloads) a fim de permitir a análise dos resultados e, com isso,
*               concluir sobre a hipótese inicialmente dada.
* @author		David Cardoso
* @since		10/09/2016
* @date			13/09/2016
* @copyright 	2016 - All rights reserveds
* @sa 			http://projetos.imd.ufrn.br/davidcardoso-ti/imd0030-projeto1.git
*/

#include <iostream>
#include <sstream>
#include <fstream>
#include <cmath>
#include <string>
#include <cstring>

using namespace	std;

/**
 * @brief 		Função Principal
 * @details 	Programa Algoritmos de Busca
 * @param  argc Contém a quantidade de argumentos passados via linha de comando
 * @param  argv Contém os argumentos passados via linha de comando
 * @return      integer
 */
int main(int argc, char const *argv[]){

	int size_vector; 		/**< size_vector 	- total de elementos do vetor que será realizado a busca */
	int key;				/**< key 			- chave a ser encontrada no vetor */
	char search_type[3];	/**< search_type 	- tipo do algoritmo de busca */

	// valida parametros passados via linha de comando
    if(argc != 4) {
        cerr << "Erro: Informe o total de elementos, a chave e o algoritmo de busca." << endl;
        return 0;
    }else{
		istringstream ss1(argv[1]);
		istringstream ss2(argv[2]);

        if (!(ss1 >> size_vector) || size_vector < 0 || !(ss2 >> search_type)){
            cerr << "Parametros invalidos!" << endl;
            cerr << "Erro: Informe o total de elementos, a chave e o algoritmo de busca." << endl;
            return 0;
        }
    }

    switch(search_type){

    	case 'BSI': // Busca Sequencial Iterativa

    	break;

    	case 'BSR': // Busca Sequencial Recursiva

    	break;

    	case 'BBI': // Busca Binaria Iterativa

    	break;

    	case 'BBR': // Busca Binaria Recursiva

    	break;

    	case 'BTI': // Busca Ternaria Iterativa

    	break;

    	case 'BTR': // Busca Ternaria Recursiva

    	break;

    	default:
    		cerr << "Nenhum algoritmo de busca equivalente ao informado pelo usuario!" << endl;
    		cerr << "Algoritmos validos: BSI, BSR, BBI, BBR, BTI ou BTR."
    		cerr << "Finalizando programa..." << endl;
    		return 0;
    }

	return 0;
}