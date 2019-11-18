/*
 * euklides.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int a,  b;
    cout << "podaj dwie liczby calkowite: " << endl;
    cin >> a >> b;
    
    while (a > 0) {
        a = a % b;
        b = b - a;
    }
    cout << "NWD; " << b << endl;
	return 0;
}

