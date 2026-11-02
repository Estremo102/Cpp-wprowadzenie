#include <iostream>
using namespace std;

int main() {
	// goto
	cout << "Pierwszy napis\n";
	goto abc;
	cout << "Drugi napis\n";
abc:
	cout << "Trzeci napis" << endl;

	cout << "Odpowiednik petli";
	int i = 0;
petla:
	cout << "Obieg petli goto numer " << i++ << endl;
	if (i < 10) goto petla;

	//continue
	for (i = 0; i < 25; i++) {
		if (i % 3 == 0) {
			//cout << "obieg pętli podzielny przez 3\n";
			continue;
		}
		cout << "Obieg petli for numer " << i << endl;
	}
}