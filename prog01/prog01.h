/**
 * @file prog01.h
 * @brief Arquivo com a definição dos métodos para verificação do palíndromo
 */

#ifndef _PROG01_
#define _PROG01_

#include <string>
 
/** Método para verificação se é palindromo ou não */
bool isPalindrome(string);

/** Método para ignorar os caracteres especiais */
void removerCaracteresEspeciais(string&);

/** Método para tratar letras acentuadas como sem acento */
void removerCaracteresAcentuados(string&);

#endif