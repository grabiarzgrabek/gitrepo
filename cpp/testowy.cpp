/*
 * cwiczenie2_funkcje.cpp
 */


#include <iostream>

using namespace std;


int main(int argc, char **argv)
{
	int rozmiar = 20;
	int tablica[rozmiar];
	int i = 0;
	cout << "Podaj maksymalnie 20 ocen: " << endl;
	for (i=0; i<rozmiar; i++) {
		cin >> tablica[i];
	}
	for (i=0; i<rozmiar; i++) {
		cout << tablica[i] << " ";
	}
	return 0;
}
