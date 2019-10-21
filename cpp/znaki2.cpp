/*
 * znaki.cpp
 * znakiem konczacym tablice znakowa jest /0
 */


#include <iostream>

using namespace std;

void ascii() {
    int i = 0;
    for (i = 65; i < 91; i++) {
        cout << i << " - " << char(i) << endl;
    }
}
void litery2liczby(char tabzn[], int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        cout << tabzn[i] << " - " << (int)tabzn[i] << endl;
    
}
}

int main(int argc, char **argv)
{
    int rozmiar =10;
    char napis[rozmiar] = "aaaaaaaaaa";
    
    ascii();
    litery2liczby(napis, rozmiar);
    
    //cout << char(300);

	return 0;
}

