/*
 * tablica2.cpp
 * 
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;

void pobierz0ceny(int t[], int r) {
    cout << "podaj " << r << " ocen" << endl;
    int i;
    for (i=0; i < r; i++) {
        cin >> t[i];
    }
}
void drukujTab(int t[], int r) {
    int i;
    for(i=0; i<r; i++) {
        cout << t[i];
    }
}
void srednia(int t[], int r) {
    int i;
    for(i=0; i<r; i++) {
        cout << t[i];
    }
}

int main(int argc, char **argv)
{
    int rozmiar=5;
	int tablica[rozmiar];
    
    pobierz0ceny(tablica, rozmiar);
    drukujTab(tablica, rozmiar);
    srednia(tablica, rozmiar)
    
	return 0;
}
