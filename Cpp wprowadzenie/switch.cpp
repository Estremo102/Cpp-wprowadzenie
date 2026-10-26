#include <iostream>
using namespace std;

int main()
{
	cout << "Ktory podzespol sprawdzic?\n"
		<< "nr 10 - Silnik \nnr 25 - Radar\nnr 35 - Stery\n"
		<< "Podaj numer: ";
	int wybor;
	cin >> wybor;

	/*if (wybor == 10)
	{
		cout << "sprawdzamy silnik";
	}
	else if (wybor == 25)
	{
		cout << "sprawdzamy radar";
	}
	else if (wybor == 35)
	{
		cout << "sprawdzamy stery";
	}
	else
	{
		cout << "nieznany numer " << wybor << " podzespol niezindentyfikowany";
	}*/
	switch (wybor)
	{
		case 10:
			cout << "sprawdzamy silnik";
			break;
		case 25:
			cout << "sprawdzamy radar";
			//break;
		case 26:
			cout << "sprawdzamy czujniki radaru";
			break;
		case 35:
			cout << "sprawdzamy stery";
			break;
		default:
			cout << "nieznany numer " << wybor << " podzespol niezindentyfikowany";
			break;
	}
	/*cout << "Krowo krowo jakie dajesz mleko? ";
	string mleko;
	cin >> mleko;
	switch (mleko)	ten switch wywoła błąd w kompilacji, 
	{				w C++ w przeciwieństwie do np C#
	case "czarne":	nie można oprzeć instrukcji switch o typ tekstowy
		
	}*/
}