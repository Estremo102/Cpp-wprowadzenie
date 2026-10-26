//#include <iostream>
//using namespace std;
//int main()
//{
//	int ile, ile2;
//	do {
//		cout << "Podaj liczbe: ";
//		cin >> ile;
//	} while (ile == 0);
//	ile2 = ile;
//	/*
//	if (ile > 0) {
//		cout << "Liczba jest dodatnia";
//	}
//	*/
//	cout << "Zaczynamy odliczanie\n";
//	if (ile > 0) {
//		while (ile > 0) {
//			cout << ile-- << endl;
//			// różne zapisy dekrementacji czyli
//			// zmniejszenia zmiennej o 1
//			//ile = ile - 1;
//			//ile -= 1;
//			//ile--;
//		}
//	}
//	else {
//		while (ile < 0) {
//			// przeciwieństwem dekrementacji jest
//			// inkrementacja czyli zwiększenie o 1
//			cout << ile++ << endl;
//		}
//	}
//	cout << "Teraz w druga strone";
//	if (ile2 < 0) ile2 *= -1;
//	for (int i = 0; i < ile2; i++) {
//		cout << i + 1 << endl;
//	}
//	/*bool ever = true;
//	for (;ever;) {
//		oczywiście jakby zostawić puste for(;;) 
//		to też będzie pętla nieskończona
//	}*/
//}