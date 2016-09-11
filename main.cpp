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
* @sa 			http://projetos.imd.ufrn.br/davidcardoso-ti/imd0030-projeto1/blob/master/main.cpp
*/

#include <iostream>         // in|out streams
#include <sstream>          // memory streams
#include <fstream>          // file streams
#include <cmath>            // biblioteca matemática
#include <string>           // classe string
#include <cstring>          // manipulação de strings
#include <chrono>           // usado para calcula tempo de execução
#include "aux.h"            // funções e recursos auxiliares
#include "searchs.h"        // funções de busca
#include <sys/resource.h>   // usado para aumentar o tamanho da pilha em UNIX Based Systems

using namespace	std;
using namespace std::chrono;

/**
 * @brief 		Função Principal
 * @details 	Programa Algoritmos de Busca
 * @param  argc Contém a quantidade de argumentos passados via linha de comando
 * @param  argv Contém os argumentos passados via linha de comando
 * @return      integer
 */
int main(int argc, char const *argv[]){

	int size_vector; 		            /**< size_vector 	- total de elementos do vetor que será realizado a busca */
	int key;				            /**< key 			- chave a ser encontrada no vetor */
    char* tmp_type = new char[4];       /**< tmp_type       - tipo do algoritmo de busca recebido via linha de comando */
	enum Searchs search_type = NA;      /**< search_type 	- enumeração de tipo do algoritmo de busca */

	// valida parametros passados via linha de comando
    if(argc != 4) {
        cerr << "Erro: Informe o total de elementos, a chave e o algoritmo de busca." << endl;
        cerr << "Finalizando programa..." << endl;
        return -1;
    }else{
        istringstream ss1(argv[1]);
        istringstream ss2(argv[2]);
		istringstream ss3(argv[3]);

        if ( !(ss1 >> size_vector) || size_vector <= 0 || !(ss2 >> key) || key < 0 || !(ss3 >> tmp_type)){
            cerr << "Parametros invalidos!" << endl;
            cerr << "Erro: Informe o total de elementos, a chave e o algoritmo de busca." << endl;
            cerr << "Finalizando programa..." << endl;
            return -1;
        }
        else{
            // define a enumeração de acordo com o parametro passado via linha de comando
            if(strcmp(tmp_type, "BSI") == 0) search_type = BSI;
                else
            if(strcmp(tmp_type, "BSR") == 0) search_type = BSR;
                else
            if(strcmp(tmp_type, "BBI") == 0) search_type = BBI;
                else
            if(strcmp(tmp_type, "BBR") == 0) search_type = BBR;
                else
            if(strcmp(tmp_type, "BTI") == 0) search_type = BTI;
                else
            if(strcmp(tmp_type, "BTR") == 0) search_type = BTR;
        } 
    }

    // aumentando o tamanho da pilha em UNIX Based Systems
    // struct rlimit r1;
    // getrlimit(RLIMIT_STACK, &r1);
    // r1.rlim_cur = 16000000;
    // setrlimit(RLIMIT_STACK, &r1);

    // limpa console
    system("clear");

    pSearch p_search;                                           /**< p_search   - Ponteiro para função de busca */
    bool    selected = seleciona_busca(search_type, &p_search); /**< selectec   - testa se selecionou corretamente a função de busca */
    
    // seleciona busca
    if(!selected){
        cerr << "Nenhum algoritmo de busca equivalente ao informado pelo usuario!" << endl;
        cerr << "Algoritmos validos: BSI, BSR, BBI, BBR, BTI ou BTR." << endl;
        cerr << "Finalizando programa..." << endl;
        return -1;
    }

    int* workload       = new int[size_vector];   /**< workload       - vetor a ser usado como workload */
    int  workload_size  = size_vector;            /**< workload_size  - tamanho do workload a ser executado */   
    
    // preenche o workload
    workloadFill(workload, workload_size);

    cout << "Tamanho\tTempo" << endl;
    
    // workload MISS
    while(workload_size > 0){

        // inicio da medição
        high_resolution_clock::time_point time_initial = high_resolution_clock::now();
        
        // MISS - sempre busca elemento que não existe (impar)
        // HIT  - busca elemento existente (par)
        p_search(key, workload, workload_size);
        
        // fim da medição
        high_resolution_clock::time_point time_final = high_resolution_clock::now();
            
        // duração da medição
        long double workload_time = duration<long double, std::micro>(time_final - time_initial).count();
        
        cout << workload_size << "\t" << workload_time << endl;
        
        workload_size = workload_size / 2;
    }

    // libera memoria
    delete[] tmp_type;
    delete[] workload;

	return 0;
}