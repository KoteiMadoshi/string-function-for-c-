#include <iostream>
#include <string>
#include <fstream>
#include "reversestring.hpp"

using namespace std;

//	Funzione "main" dell'inversione della stringa
//	E' previsto il salvataggio su file di tutte le stringe, inserite ed invertite
void invertireStringa() {
	string s;
	string out;
	ofstream File("stringheinvertite.txt", ofstream::app);

	cout << "Inserisci testo: ";
	getline(cin, s);
	File << s << "\n";
	out = reverse_String(s);
	File << out << "\n\n";
	cout << endl << out;
	File.close();
}

//	Funzione di inversione, prende in input una stringa e restituisce la sua inversa
string reverse_String(string s) {
	string out;

	for (int i = 0; i < s.length(); i++) {		//	fino alla fine della stringa 
		out.push_back(s[s.length() - i - 1]);	//	inserisci i caratteri nella stringa di output partendo dall'ultimo carattere e andando indietro fino al primo
	}

	return out;
}