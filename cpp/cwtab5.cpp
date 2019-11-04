/*
 * cwtab5.cpp
 */


#include <iostream>
#include <cstring>
using namespace std;
#define ROZMIAR 15

int main(int argc, char **argv)
{
    char napis[ROZMIAR];
    int i;
    cout << "Podaj słowo: " << endl;
    cin.getline(napis, ROZMIAR);
    
    for (i = 0; i<strlen(napis); i++){
        if(napis[i]>95){
        cout << (char)(napis[i] - 32);
    }
        else if(napis[i]< 95 && napis[i] > 64) {
        cout << (char)(napis[i] + 32);
    }
}

cout<<endl;
    
    return 0;
 }
