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
	unsigned int i = 0;

	ListaLigada<char> pilha;

	/** Insere os caracteres da frase na pilha */
	for (i = 0; i < frase.size() ; ++i){
		pilha.InsereNoInicio(frase[i]);
	}
	cout << "aqui: " << i << endl;

	unsigned int j = 0;

	/** Faz a verificação elemento por elemento e retorna false caso não seja palindroma */
	while( (j < frase.size()) and palindromo){
		
		/** Salva o valor do nó */
		auto aux = pilha.getHead()->getValor();
		cout << "Aqui: " << aux << endl;

		if (aux != frase[j]){
			palindromo = false;
		}else{
			pilha.RemoveNoInicio();
			j++;
		}
	}

	return palindromo;
}