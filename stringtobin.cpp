#include <iostream>
#include <string>
#include <fstream>
#include <bitset>
#include "stringtobin.hpp"

using namespace std;

//	Funzione "main" della conversione da stringa di caratteri a stringa binaria
//	E' previsto il salvataggio su file di tutte le stringe, sia di caratteri che binaria
void convertStringToBin() {
	string str, bin("");
	ofstream File("stringtobin.txt", ofstream::app);

	cout << "Inserire stringa da convertire in binario: ";
	getline(cin, str);
	File << str << "\n";
	bin = stringtobin(str);
	File << bin << "\n\n";
	cout << endl << bin << endl;

	File.close();
}

//	Funzione di conversione, prende in input una stringa di caratteri e restituisce una stringa binaria
//	La stringa binaria in uscita sarà composta da byte separati da uno spazio
//	Esempio: una stringa in input "ciao" diventerà "01100011 01101001 01100001 01101111"
string stringtobin(string str) {
	string bin("");			//	inizializzazione stringa di ritorno bin

	for (int i = 0; i < str.length(); i++) {				//	fino a che non finisce la stringa di input str
		bin = bin + bitset<8>(str[i]).to_string() + " ";	//	aggiungi alla stringa bin gli otto bit rappresentanti il carattere in posizione i di str
	}

	return bin;
}