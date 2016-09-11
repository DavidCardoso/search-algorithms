/**
* @file 		searchs.h
* @brief 		Funções de busca
* @details 		Contém a declaração das funções que fazem buscas do tipo sequencial, binária e ternárias, 
*            	nas suas respectivas formas iterativa e recursiva.
* @author		David Cardoso
* @since		10/09/2016
* @date			13/09/2016
* @copyright 	2016 - All rights reserveds
* @sa 			http://projetos.imd.ufrn.br/davidcardoso-ti/imd0030-projeto1/blob/master/searchs.h
*/

#ifndef 	_SEARCHS_H_
#define 	_SEARCHS_H_
#pragma		once

#include <iostream>
#include <sstream>
#include <fstream>
#include <cmath>
#include <string>
#include <cstring>
#include <chrono>
#include "aux.h"

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
int busca_sequencial_ite	(int chave, int* vetor, int tamanho);

/**
 * @brief			Função busca sequencial na forma recursiva
 * @details			Esse tipo de busca testa cada elemento do vetor até encontrar a chave ou atingir o final do vetor.
 *            		O vetor não precisa estar ordenado.
 * @param  chave   	valor a ser encontrado no vetor
 * @param  vetor   	vetor a ser percorrido
 * @param  tamanho 	tamanho do vetor
 * @return         	retorna o indice da posição que se encontra a chave ou -1, caso não encontre
 */
int busca_sequencial_rec	(int chave, int* vetor, int tamanho);

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
int busca_binaria_ite		(int chave, int* vetor, int tamanho);

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
int busca_binaria_rec		(int chave, int* vetor, int tamanho);

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
int busca_ternaria_ite		(int chave, int* vetor, int tamanho);

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
int busca_ternaria_rec		(int chave, int* vetor, int tamanho);


#endif