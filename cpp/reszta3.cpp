/*
 * reszta.cpp
 */

#include <iostream>
using namespace std;

int nominaly[100];
int liczbaNominalow;

void wczytajNominaly(){
	cout << "Podaj liczbe nominalow: ";
	cin >> liczbaNominalow;

	cout << "Podaj nominaly w kolejnosci malejacej: " << endl;
	int i = 0;
	int nominal = 0;
	cin >> nominal;
	nominaly[i] = nominal;
	i++;
	while(i < liczbaNominalow){
		cin >> nominal;
		if (nominal > nominaly[i-1]) {
			cout << "Nominal jest wiekszy od poprzedniego" << endl;
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
	cout << "Wyplacone nominaly: " << endl;
	int aktualnyNominal = 0;

	while(reszta > 0 && aktualnyNominal < liczbaNominalow){
		cout << "reszta = " << reszta << endl;
		//znajdz najwiekszy dostepny nominal mniejszy od reszty;
		cout << "aktualny nominal: " << nominaly[aktualnyNominal] << endl;
		//oblicz wymagana ilosc nominalów
		//pomniejsz reszte

	}

}
int main(int argc, char **argv)
{
	wczytajNominaly();
	int cena;
	int wplata;
    int reszta, P, i;
	int aktualnyNominal = 0;
    int N[liczbaNominalow] = nominaly;
	cout << "Podaj cene: ";
	cin >> cena;

	do { // petla blokująca
		cout << "Podaj wplate: ";
		cin >> wplata;
	} while (wplata < cena);

    cout << "aktualny nominal: " << nominaly[aktualnyNominal] << endl;
	cout << reszta << wplata - cena << endl;
    
    if (reszta >= N[i]) {
    P = reszta / N[i];
    reszta=reszta-(N[i]*P);
    cout << N[i] << " razy " << P << endl;
}
    i++;

	return 0;
}
