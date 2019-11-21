/*
 * fibbonacci.cpp
 */


#include <iostream>
using namespace std;

int fibbonacci_it(int n) {
    int a = 0; //Fn-1
    int b = 1; //Fn-2
    int wynik = 0:
    if (n == 0) return 0;
    if (n == 1) return 1;
    for (int i=2; i<n; i++) {
        wynik = a + b;
        cout << i << ': fib(" << b << ", " << a << ") = << wynik << endl;
        b = a;
        a = wynik;
    }
}

int main(int argc, char **argv)
{
    fibbonacci_it(19);
	
	return 0;
}

