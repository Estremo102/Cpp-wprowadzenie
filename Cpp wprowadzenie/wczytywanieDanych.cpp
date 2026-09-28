#include <iostream>
using namespace std;

int main() 
{
	string imie;
	string pierwszeImie; // camelCase
	string pierwsze_imie; // snake_case
	string PierwszeImie; // PascalCase
	//string 1imie; niepoprawna zmienna
	string imie1; // liczby można używać, ale nie jako piewszy znak
	//string pierwsze.imie; niepoprawna zmienna
	//string (pierwsze)imie; niepoprawna zmienna
	//string imie^pierwsze; niepoprawna zmienna
	int wiek;

	cout << "Jak masz na imie?\n"; // pytamy się użytkownika o imię
	cin >> imie;
	cout << "Witaj " << imie << "!" << endl;
	cout << "Ile masz lat?" << endl;
	cin >> wiek;
	//cout << "Twój rok urodzenia to " << 2026 - wiek << endl;
	int rok = 2026 - wiek;
	cout << "Twoj rok urodzenia to " << rok << "\n" << wiek;
	/*
	komentarze blokowe wyglądają w ten sposób 
	*/

	return 0;
}