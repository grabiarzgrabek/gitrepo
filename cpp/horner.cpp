/*
 * horner.cpp
 */


#include <iostream>
using namespace std;

void drukujw(int n, float tbwsp[]) {

    int i = 0;
    for (i = 0; i < n; i++) {
        cout << tbwsp[i] << "x^" << n-i << "+";
    }
    cout << tbwsp[i] << endl;

}

float horner_it(int n, float tbwsp[], float x){
    int i;
    float wynik = tbwsp[0];
    for (i = 1; i<n+1; i++) {
        wynik = wynik * x + tbwsp[i];
    }
    return wynik;
}

float horner_re(int n, float tbwsp[], float x) {
    if (n==0)
        return tbwsp[0];
    else
        return horner_re(n-1, tbwsp, x) * + tbwsp[n];
}

int main(int argc, char **argv)
{
    int n = 0;
    float *tbwsp;
    float x;
    cout << "podaj stopień: "; cin >> n;
    tbwsp = new float [n+1];
    cout << "podaj argument: "; cin >> x;
    
    for (int i=0; i<n+1; i++) {
        cout << "Wspolczynnik przy potedze " << n-i << ": ";
        cin >> tbwsp[i];
    }
    
    cout << "Wartosc wielomianu o postaci: ";
    drukujw(n, tbwsp);
    cout << horner_it(n, tbwsp, x) << endl;
    cout << horner_re(n-1, tbwsp, x) << endl;
	
	return 0;
}

