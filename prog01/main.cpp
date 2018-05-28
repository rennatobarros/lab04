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

	std::string phrase;

	std::cout << "Digite uma palavra/frase : " << std::endl;
	std::getline(std::cin, phrase);

	std::cout << "\nPalavra/Frase Digitada: " << std::endl;
	std::cout << phrase << std::endl << std::endl;
	
	/*	std::cout << "Frase após o downcase: " << std::endl;	*/ 
	//str_downcase( phrase );
	/*	std::cout << phrase << std::endl << std::endl;	*/

	/*	std::cout << "Frase após a remoção dos caracteres especiais: " << std::endl;	*/
	//erase_special_chars( phrase );
	/*	std::cout << phrase << std::endl << std::endl;	*/

	/*	std::cout << "Frase após a remoção dos acentos: " << std::endl;	*/
	//remove_accent( phrase );
	/*	std::cout << phrase << std::endl << std::endl;	*/

	if( isPalindrome( phrase ) )
		std::cout << "A palavra/frase digitada " << "é palindroma" << std::endl;
	else
		std::cout << "A palavra/frase digitada " << "não é palindroma" << std::endl;

	return 0;

	return 0;
}
