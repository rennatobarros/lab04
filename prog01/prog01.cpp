/**
 * @file prog01.cpp
 * @brief Arquivo com a implementação dos métodos para verificação do palíndromo
 */

#include <iostream>
#include <cctype>
#include <vector>

#include "lista.h"
#include "prog01.h"

using namespace std;


/**
 * @brief      Subistitiuir letras acentuadas por letras não acentuadas
 *
 * @param      String com a frase passada por referência
 */
void removerCaracteresAcentuados(string& frase){
	/* 
		Modelo retirado do link: http://www.cplusplus.com/reference/string/string/find/
	*/

	vector <string> com_acento = {	"á", "Á", "é", "É", "í", "Í", "ó", "Ó", "ú", "Ú",
									"â", "Â", "ê", "Ê", "î", "Î", "ô", "Ô", "û", "Û",
									"ã", "Ã", "ẽ", "Ẽ", "ĩ", "Ĩ", "õ", "Õ", "ũ", "Ũ",
									"à", "À", "è", "È", "ì", "ì", "ò", "Ò", "ù", "Ù",
									"ä", "Ä", "ë", "ë", "ï", "Ï", "ö", "Ö", "ü", "Ü",
									"ç", "Ç", "ñ", "Ñ"};

	vector <string> sem_acento = {	"a", "a", "e", "e", "i", "i", "o", "o", "u", "u",
										"a", "a", "e", "e", "i", "i", "o", "o", "u", "u",
										"a", "a", "e", "e", "i", "i", "o", "o", "u", "u",
										"a", "a", "e", "e", "i", "i", "o", "o", "u", "u",
										"a", "a", "e", "e", "i", "i", "o", "o", "u", "u",
										"c", "c", "n", "n"};

	for (unsigned int i = 0; i < frase.size(); ++i){
		for (unsigned int j = 0; j < com_acento.size(); ++j){
			size_t caracter_acentuado = frase.find(com_acento[j]);

			if (caracter_acentuado != string::npos){
				frase.replace(caracter_acentuado, com_acento[j].size(), sem_acento[j]);
			}
		}
	}
}


/**
 * @brief      Remove caracteres que não sejam alfanuméricos
 *
 * @param      String com a frase passada por referência
 */
void removerCaracteresEspeciais(string& frase){
	/** 
		Modelo retirado do link: http://www.cplusplus.com/reference/string/string/find_first_of/ 
	*/

	size_t caracteres_especiais = frase.find_first_of("'-_!#$%&*()+`{}^:><?|/;.,~][´=ªº ");

	/** Percorre a string buscando algum caracter especial e removendo-o. */
	while(caracteres_especiais != string::npos){
		frase.erase(caracteres_especiais, 1);
		caracteres_especiais = frase.find_first_of("'-_!#$%&*()+`{}^:><?|/;.,~][´=ªº ");
	}
}

/**
 * @brief      Determina se é palindromo
 *
 * @param  frase  String com a frase/palavra digitada
 *
 * @return     True caso seja palindromo, False caso contrário
 */
bool isPalindrome(string frase){
	bool palindromo = true;
	unsigned int i = 0;

	ListaLigada<char> pilha;

	/** Insere os caracteres da frase na pilha */
	for (i = 0; i < frase.size() ; ++i){
		/** Trata todos os caracteres como minúsculos */
		frase[i] = tolower(frase[i]);
		pilha.InsereNoInicio(frase[i]);
	}

	unsigned int j = 0;

	/** Faz a verificação elemento por elemento e retorna false caso não seja palindroma */
	while( (j < frase.size()) and palindromo){
		
		/** Salva o valor do nó */
		auto aux = pilha.getHead()->getValor();

		if (aux != frase[j]){
			palindromo = false;
		}else{
			pilha.RemoveNoInicio();
			j++;
		}
	}

	return palindromo;
}