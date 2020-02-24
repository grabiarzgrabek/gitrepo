/*
 * szyfr_cezara.cpp
 */


#include <iostream>
using namespace std;

void male_litery(char t[]){
    int i = 0;
    while (t[i] != '\0'){
        //for (i = 65; i<91; i++){
        //cout << tabzn[i] << i+32 <<(int)tabzn[i] << endl;
        if ((int)t[i] > 64 || (int)t[i] < 90) {
            t[i] = (char)((int)t[i]+32);
        }
        i++;
    }
}

void szyfruj(char t[], int k) {
    int i = 0;
    int kod = 0;
    while (t[i] != '\0'{
        kod = (int)t[i] + k;
        if (kod > 122) {
            kod -= 26;
        }
        t[i] = (char)kod;
        i++;
    }
}

void deszyfruj(char t[], int k) {
    int i = 0;
    int kod = 0;
    while (t[i] != '\0'{
        kod = (int)t[i] - k;
        t[i] = (char)kod;
        i++;
    }
}

int main(int argc, char **argv)
{
    int r = 30;
    char tekst[r];
    cout << "podaj tekst; " << endl;
    cin.getline(tekst, r); 
    int klucz = 0
    cout << "podaj klucz: " << endl;
    cin >> klucz;
    klucz = klucz % 26;
    szyfruj(tekst, klucz);
    cout << tekst << endl;
    deszyfruj(tekst, klucz);
    cout << tekst << endl;
       
	return 0;
}

