/*
 * koduj.cpp
 * Copyright 2019  <>
 * znakiem koncz¹cym tablice znakow¹ jest \0
 */


#include <iostream>

using namespace std;

void ascii(){
    int i = 0;
    for (i = 65; i<91; i++){
        cout << i <<" - "<<char(i) << endl;
    }
}

void litery2liczby(char tabzn[], int rozmiar){
    int i = 0;
    for (i = 0; i<rozmiar; i++){
        cout << tabzn[i] <<" - "<<(int)tabzn[i] << endl;
    }
    }

void koduj(char tabzn[], int rozmiar){
    int i = 0;
    for (i = 0; i<rozmiar; i++){
        cout << tabzn[i] <<" - "<<(int)tabzn[i] << endl;
    }
    }

int main(int argc, char **argv)
{
    int rozmiar = 17;
    char napis2[rozmiar] = "Potezna wiadomosc";
    koduj(napis2, rozmiar);
    return 0;
}
