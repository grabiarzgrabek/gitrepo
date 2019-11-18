/*
 * euklides.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int a,  b, i;
    a = b = i = 0;
    cout << "podaj dwie liczby calkowite: " << endl;
    cin >> a >> b;
    while (a != b) {
        if (a > b)
            a = a - b;
        else 
        b = b - a;
    }
    cout << "NWD; " << a << endl;
	return 0;
}

