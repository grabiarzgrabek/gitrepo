/*
 * reszta.cpp
 */

#include <iostream>
using namespace std;

int nominaly[100];
int liczbaNominalow;

void wczytajNominaly(){
	cout << "Podaj liczbe nomina³ów: ";
	cin >> liczbaNominalow;

	cout << "Podaj nomina³y w kolejnosci malej¹cej: " << endl;
	int i = 0;
	int nominal = 0;
	cin >> nominal;
	nominaly[i] = nominal;
	i++;
	while(i < liczbaNominalow){
		cin >> nominal;
		if (nominal > nominaly[i-1]) {
			cout << "Nomina³ wiekszy od poprzedniego!" << endl;
			continue;
		}
		nominaly[i] = nominal;
		i++;
	}

	//for(int i = 0; i < liczbaNominalow; i++){
		//cin >> nominaly[i];
	//}
	for(int i = 0; i < liczbaNominalow; i++){
		cout << nominaly[i] << " "; }
	}


int znajdzReszte(int reszta){
	cout << "Wyp³acone nomina³y: " << endl;
	int aktualnyNominal = 0;

	while(reszta > 0 && aktualnyNominal < liczbaNominalow){
		cout << "reszta = " << reszta << endl;
		//znajdz najwiekszy dostepny nominal mniejszy ood reszt;
		cout << "aktualny nomina³: " << nominaly[aktualnyNominal] << endl;
		//oblicz wymagana ilosc nominalów
		//pomniejsz reszte

	}

}
// [50, 50, 50, 20, 10, 10, 5, 5, 5, 1]
int main(int argc, char **argv)
{
	wczytajNominaly();
	int cena;
	int wplata;
	cout << "Podaj cenê: ";
	cin >> cena;

	do { // petla blokuj¹ca
		cout << "Podaj wp³atê: ";
		cin >> wplata;
	} while(wplata < cena);

	znajdzReszte(wplata - cena);

	return 0;
}
