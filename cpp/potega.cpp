/*
 * silnia.cpp
 */


#include <iostream>
using namespace std;

// n! = 1 dla n={0, 1}
// n! 1* .. *n dla N+-{1}
// 4! = 1 * 2 * 3 * 4

long int potega_it(float x, int n) {
	long int potega = 1;
	for (int i=0; i < n; i++){
		potega = potega * x;
	}
	return potega;
}

// n! = 1 dla n={0, 1}
// n! = (n-1)*n dla N+

float potega_re(float x, int n){
	if (n == 0)
		return 1;
	else
	return potega_re(x, n-1) * x;
}

int main(int argc, char **argv)
{
	float x; //podstawa
    int n; //wykladnik
	cout << "Podaj podstawe: " << endl;
	cin >> x;
    cout << "Podaj wykladnik: " << endl;
	cin >> n;
	cout << "Potega: " << potega_it(x, n) << endl;
	cout << "Potega: " << potega_re(x, n) << endl;
	return 0;
}
