/*
 * dekoduj.cpp
 * Copyright 2019  <>
 * znakiem koncz�cym tablice znakow� jest \0
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

void odkoduj (int tabli[], int rozmiar){
    int i = 0;
    for (i = 0; i<rozmiar; i++){
        cout << tabli[i] <<" - "<<(char)tabli[i] << endl;
    }
    }

int main(int argc, char **argv)
{
    int napis3[17] = {80, 111, 116, 101, 122, 110, 97, 32, 119, 105, 97, 100, 111, 109, 111, 115, 99};
    odkoduj(napis3, 17);
    return 0;
}
