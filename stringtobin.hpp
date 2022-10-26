#ifndef STRINGTOBIN_HPP_INCLUDED
#define STRINGTOBIN_HPP_INCLUDED
#include <iostream>
#include <string>

using namespace std;


//	Funzione "main" della conversione da stringa di caratteri a stringa binaria
//	E' previsto il salvataggio su file di tutte le stringe, sia di caratteri che binaria
void convertStringToBin();

//	Funzione di conversione, prende in input una stringa di caratteri e restituisce una stringa binaria
//	La stringa binaria in uscita sarà composta da byte separati da uno spazio
//	Esempio: una stringa in input "ciao" diventerà "01100011 01101001 01100001 01101111"
string stringtobin(string str);

#endif
