/*
 * sortowanie.cpp
 */


#include <iostream>
using namespace std;

void wypelnij(int tab[], int n) {
    srand(time(NULL));
    for (int i = 0; i<n; i++) {
        tab[i] = rand() % n;
    }
}

void wyswietl(int tab[], int n) {
    for (int i = 0; i<n; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;
}
 void copytab(int tab[], int tab2[], int n) {
     for (int i = 0; i<n; i++) {
         tab2[i] = tab[i]
     }
 }
 
 void zamien(int &a, int &b) {
    int tmp=a;
    a = b;
    b = tmp;
 }

void selection_sort(int tab[], int n) {
    int i, j, k;
    for(i=0; i<n; i++) {
        k = i;
        for (j=i+1; j<n; j++) {
            tab[k+1]=tab[k];
            k=j;
        }
        zamien(tab[k], tab[i]);
    }
}

int main(int argc, char **argv) {
    int tab[50];
    int tab2[50];
    int n;
    
    cout << "ile elementów ma zawierac tablica (max=50)? ";
    cin >> n;
    wypelnij(tab, n);
    wyswietl(tab2, tab1, n);
	return 0;
}

