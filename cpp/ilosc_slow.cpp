/*
 * tekst.cpp
 */


#include <iostream>

#define ROZMIAR 1000

using namespace std;

int main(int argc, char **argv)
{
    char tekst[ROZMIAR];
    int i;
    int j;
    int k = 1;
    cout<<"Wprowadz tekst: "<<endl;
    cin.getline(tekst, ROZMIAR);
    for (i = 0; i < ROZMIAR ; i++){
        cout << tekst[i];
        }
    for (int j=0;j<ROZMIAR;j++){
    if (tekst[j]==' '&&tekst[j] != '\0'){
        k++;
    }
    }
    cout << endl;
    cout<<"Liczba slow w twoim tekscie to "<<k+2<<"."<<endl;


    return 0;
}
