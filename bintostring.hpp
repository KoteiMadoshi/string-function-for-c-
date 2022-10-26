#ifndef BINTOSTRING_HPP_INCLUDED
#define BINTOSTRING_HPP_INCLUDED

#include <iostream>
#include <string>

using namespace std;

//	Funzione "main" della conversione da stringa binaria a stringa di caratteri
//	E' previsto il salvataggio su file di tutte le stringe, sia binaria che di caratteri
void convertBinToString();

//	Funzione di conversione, prende in input una stringa binaria e restituisce una stringa di caratteri
//	La stringa binaria in ingresso deve essere necessariamente composta da byte separati da uno spazio
//	Esempio: "01100011 01101001 01100001 01101111", che diventerà "ciao"
string bintostring(string bin);

#endif
