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
	};

	//for(int i = 0; i < liczbaNominalow; i++){
		//cin >> nominaly[i];
	//}
	for(int i = 0; i < liczbaNominalow; i++){
		cout << nominaly[i] << " "; }
	{
    cout << endl;
}

int policzNominal(int n) {
    int ile = 0;
    for (i = 0; i < liczbaNominalow; i++) {
        if (n>nominaly[i]) break;
        if (nominaly[i] == n)
        ile++;
    }
    return ile;
}
    


void znajdzReszte(int reszta){
	cout << "Wyplacone nominaly: " << endl;
	int aktualnyNominal = 0;

	while(reszta > 0 && aktualnyNominal < liczbaNominalow){
		cout << "reszta = " << reszta << endl;
        
        while(aktualnyNominal < liczbaNominalow && reszta < nominaly[aktualnyNominal])
            ++aktualnyNominal;
		cout << "aktualny nominal: " << nominaly[aktualnyNominal] << endl;
        
        if (aktualnyNominal < liczbaNominalow && reszta >= nominaly[aktualnyNominal]) {
            int liczbaBanknotow = reszta / nominal;
            cout << "Dostepnych bominalow: " << policzNominal(nominal) << endl;
            reszta = reszta - liczbaBanknotow * nominal;
            cout << liczbaBanknotow << "x" << nominal << "zł" << endl;
        }
    }
    if (reszta > 0);
    cout << "Brak nominalow do wydania reszty" << endl;

}
// [50, 50, 50, 20, 10, 10, 5, 5, 5, 1]
int main(int argc, char **argv)
{
	wczytajNominaly();
	int cena;
	int wplata;
	cout << "Podaj cene: ";
	cin >> cena;

	do { // petla blokująca
		cout << "Podaj wplate: ";
		cin >> wplata;
	} while (wplata < cena);

    znajdzReszte(wplata - cena);

	return 0;
}
