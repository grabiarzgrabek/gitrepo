/*
 * tablica2.cpp
 */


#include <iostream>
using namespace std;

void pobierzOceny(int t[], int r) {
	cout << "Podaj " << r << " ocen: " << endl;
	int i;
	for (i=0; i < r; i++) {
		cin >> t[i];
	}
}

void drukujTab(int t[], int r) {
	int i;
	for (i=0; i < r; i++) {
		cout << t[i] << " ";
	}
}

float srednia(int t[], int r) {
	int i;
	float srednia;
    for (i=0; i < r; i++){
		srednia += t[i];
    }
    return srednia / r;
}

int main(int argc, char **argv)
{
	cout << "Podaj liczbe ocen: ";
	int rozmiar;
	cin >> rozmiar;
	int tablica[rozmiar];

	pobierzOceny(tablica, rozmiar);
	drukujTab(tablica, rozmiar);
    cout << "Srednia: " << srednia(tablica, rozmiar) << endl;

	return 0;
}
