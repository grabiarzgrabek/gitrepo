/*
 * zlozonosc2.cpp
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cout << "Podaj n" << endl;
    cin >> n;
    int i = 1;
    for (i = 1; i == n; i++) {
        cout << i;
        return 0;
    }
    while (i <= n) {
        cout << i << " ";
        i+=2;
    }
	
	return 0;
}

