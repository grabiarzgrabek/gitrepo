/*
 * znaki.cpp
 * znakiem konczacym tablice znakowa jest /0
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	char znak = 'a';
    char napis [11] = "moj_napis";
    
    cout << napis[0] << endl;
    
    //char napis [11] = {'m', 'o', 'j', '-'};
    cout << "Podaj znak:" << endl;
    cin >> znak;
    cout << znak << endl;
    cout << "Podaj napis:" << endl;
    cin >> napis;
    cout << napis << endl;
    
	return 0;
}

