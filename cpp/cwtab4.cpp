/*
 * cwtab4.cpp
 */



#include <iostream>

#include <cstring>

using namespace std;

#define ROZMIAR 15

int main(int argc, char **argv)
{
    char tekst[ROZMIAR];
    int i = 0;
    cout << "Podaj wyraz do odwrocenia: " << endl;
    cin.getline(tekst, ROZMIAR);
    for (i = strlen(tekst); i > 0; i--){
        cout << tekst[i-1];
    }
    cout << endl;
    
    return 0;
} 
