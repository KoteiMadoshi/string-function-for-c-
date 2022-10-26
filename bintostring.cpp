#include <iostream>
#include <string>
#include <fstream>
#include <bitset>
#include "bintostring.hpp"

using namespace std;

//	Funzione "main" della conversione da stringa binaria a stringa di caratteri
//	E' previsto il salvataggio su file di tutte le stringe, sia binaria che di caratteri
void convertBinToString() {
	string bin, str;
	ofstream File("bintostring.txt", ofstream::app);

	cout << "Inserire testo in binario: ";
	getline(cin, bin);
	File << bin << "\n";
	str = bintostring(bin);
	File << str << "\n\n";
	cout << endl << str << endl ;

	File.close();
}


//	Funzione di conversione, prende in input una stringa binaria e restituisce una stringa di caratteri
//	La stringa binaria in ingresso deve essere necessariamente composta da byte separati da uno spazio
//	Esempio: "01100011 01101001 01100001 01101111", che diventerà "ciao"
string bintostring(string bin) {
	string str, aux;
	char lett;

	for (int i = 0; i < bin.length(); i++) {	//	continua fino alla fine della stringa binaria
		for (int j = i; j < i + 8; j++) {		//	per gli 8 caratteri presenti a partire dalla posizione i
			aux.push_back(bin[j]);				//	inserisci il bit letto in aux
		}
		lett = static_cast<char>(std::bitset<8>(aux).to_ulong());	//	converte la stringa contenente gli 8 bit in una carattere
		str = str + lett;	//	aggiungi il carattere alla stringa di ritorno
		aux.clear();	//	resetta la stringa ausiliaria che ci serve per leggere i singoli bit
		i = i + 8;	//	manda avanti l'indice di 8, posizionandosi sullo spazio che viene poi ignorato dall'incremento del for
	}

	return str;
}