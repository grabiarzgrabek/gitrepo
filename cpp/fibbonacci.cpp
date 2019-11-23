/*
 * fibonacci.cpp
 */


#include <iostream>
using namespace std;

int fibonacci_it(int n) {
	int a = 0; //Fn-1
	int b = 1; //Fn-2
	int wynik = 0;
	if (n == 0) return 0;
	if (n == 1) return 1;
	for(int i = 0; i < n; i++) {
		wynik = a + b; //1//2//3
		b = a; //1//1//2
		a = wynik; //1//2//3
	}
	return wynik;
}

int main(int argc, char **argv)
{
	int ROZMIAR;
	cout << "Ilosc liczb do wypisania: ";
	cin >> ROZMIAR;
	for (int i = 1; i < ROZMIAR + 1; i++){
        cout << i << ": fib(" << fibonacci_it(i - 2) << ", " << fibonacci_it(i - 1) << ") = " << fibonacci_it(i) << endl;
	}
	return 0;
}
