/** 
 * @mainpage Palindromo
 * @author Renato Barros de Lima Freitas
 * @date 28/05/2018
 * @version 1.0
 *
 * @file main.cpp
 * @brief Arquivo principal do programa
*/

#include <iostream>


#include "lista.h"
#include "prog01.h"

using namespace std;


int main(int argc, char const *argv[]){
	
	/*ListaLigada<int> lista1;
	cout << "Tamanho: " << lista1.size() << endl;
	lista1.InsereNoFinal(2);
	lista1.InsereNoFinal(3);
	lista1.InsereNoFinal(4);
	lista1.InsereNaPosicao(0,1);
	lista1.InsereNoFinal(6);
	lista1.InsereNaPosicao(4,5);
	lista1.InsereNoFinal(7);
	//cout << lista1.getHead()->getNext()->getValor() << endl;
	cout << "Tamanho: " << lista1.size() << endl;
	cout << lista1 << endl;
	lista1.RemoveNaPosicao(3);
	cout << "Tamanho: " << lista1.size() << endl;
	cout << lista1 << endl;
	lista1.RemoveNoInicio();
	cout << "Tamanho: " << lista1.size() << endl;
	cout << lista1 << endl;
	lista1.RemoveNoFinal();
	cout << "Tamanho: " << lista1.size() << endl;
	cout << lista1 << endl; */

	/** Frase digitada pelo usuário */
	string phrase;

	cout << "Digite uma palavra/frase : " << endl;
	getline(cin, phrase);

	cout << "\nPalavra/Frase Digitada: " << endl;
	cout << phrase << endl << endl;

	removerCaracteresEspeciais(phrase);

	if( isPalindrome( phrase ) ){
		cout << "A palavra/frase digitada " << "é palindroma" << endl;
	}else{
		cout << "A palavra/frase digitada " << "não é palindroma" << endl;
	}

	return 0;
}
