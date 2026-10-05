#include <iostream>
using namespace std;

int main() 
{
	int wiek;			// zmienna całkowitoliczbowa
	bool pelnoletnosc;	// zmienna prawda/fałsz

	cout << "Podaj wiek: ";
	cin >> wiek;
	pelnoletnosc = wiek >= 18;
	//cout << pelnoletnosc << endl;
	//if (pelnoletnosc) {
	//	cout << "Zapraszamy do sali po lewej, witamy w kasynie";
	//}
	//else {
	//	cout << "Zapraszamy do sali po prawej, witamy w sali zabaw";
	//}
	if (wiek < 18)
		cout << "Jeszcze nie masz praw wyborczych";
	else if (wiek < 21)
		cout << "Mozesz juz głosowac, ale jeszcze nie mozesz startowac w wyborach";
	else {
		cout << "Mozesz zarowno glosowac jak i startowac w wyborach\n";
		cout << "Mozesz startowac w wyborach na: \n - posla \n";
		if (wiek >= 25) cout << " - wojta/burmistrza/itp.\n";
		if (wiek >= 30) cout << " - senatora\n";
		if (wiek >= 35) cout << " - burmistrza\n";
	}

	return 0;
}