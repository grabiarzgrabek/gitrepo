#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    cout << "podaj pierwszą liczbę: ";
    cin >> a;
    cout << "podaj drugą liczbę: ";
    cin >> b;
    cout << "podaj trzecią liczbę: ";
    cin >> c;
    if (a>=b && a>c){
    cout << "liczba " <<a<< " jest największa";
    }
    else if (b>a && b>=c){
    cout << "liczba " <<b<< " jest największa";
    }
    else if (a == b && a == c && b == c){
    cout << "Liczby są równe";
    }
    else{
    cout << "liczba " <<c<< " jest największa";
            }


    return 0;
}
