/**
 * @file prog01.cpp
 * @brief Arquivo com a implementação dos métodos para verificação do palíndromo
 */

#include <iostream>
#include <vector>

#include "lista.h"
#include "prog01.h"

using namespace std;

bool isPalindrome(string frase){
	bool palindromo = true;
	unsigned int i;

	ListaLigada<char> pilha;

	/** Insere os caracteres da frase na pilha */
	for (i = 0; i < frase.size() ; ++i){
		pilha.InsereNoInicio(frase[i]);
	}

	while( i < frase.size() and palindromo){
		auto aux = pilha.getHead()->getValor();

		if (aux == frase[i]){
			pilha.RemoveNoInicio();
			i++;
		}else{
			palindromo = false;
		}
	}

	return palindromo;
}