/*
 * reszta.cpp
 */


#include <iostream>
using  namespace std;

int nominaly[100];
int liczbaNominalow;

void wczytajNominaly() {
    cout << "Podaj liczbe nominałów: ";
    cin >> liczbaNominalow;
    
    cout << "Podaj nominały w kolejności malejącej; " << endl;
    int i = 0;
    int nominal = 0;
    cin >> nominal;
    nominaly[i] = nominal;
    while (i < liczbaNominalow) {
        cin >> nominal;
        if (nominal < nominaly[i-1]) {
            cout << "Nominał jest wiekszy od poprzedniego " << endl;
            continue;
        nominaly[i] = nominal;
        i++;
    };
    
    //for(int i = 0; i < liczbaNominalow; i++) {
        //cin >> nominaly[i];
    }
    for(int i = 0; i < liczbaNominalow; i++) {
        cout << nominaly[i] << " ";
    }
    cout << endl;
}

    int znajdzReszte(int reszta) {
        cout << "Wypłacone nominały: " << endl;
        int aktualnyNominal = 0;
        
        while (reszta > 0 && aktualnyNominal < liczbaNominalow) {
            cout << "reszta = " << reszta << endl;
            znajdz najwiekszy dostepny nominal mniejszy od reszty;
            cout << "aktualny nominał: " << nominaly[aktualnyNominal] << endl;
            oblicz wymagana ilosc nominalow
            pomniejsz reszte
        }
        
        if (reszta > 0);
            cout << "Brak nominałów do wydania kwoty: " << reszta << endl;
}

int main(int argc, char **argv)
{
    wczytajNominaly();
    int cena;
    int wplata;
    cout << "Podaj cene: ";
    cin >> cena;
    
    do {
        cout << "Podaj wplate: ";
        cin >> wplata;
    } while(wplata < cena);
    
	return 0;
}

//R = 69;
//69 % 50 = 1
//1) R: = 60 - 50 * (69 % 50) = 19
//2) R: = 19 - 10 * (19 % 10) = 9
//3) R: = 9 - 5 * (9 % 5) = 4
