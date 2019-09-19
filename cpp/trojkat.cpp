/*
 * trojkat.cpp
 * 
 * napisz program ktory pobiera od uzytkownika trzy liczby,
 * dlugosc boków i sprawdza czy da sie z nich zbudowac trojkat.
 * program powinien wyprowadzic odpowiedni komunikat
 * Jeśli da sie zbudowac trojkat, sprawdz czy jest prostokatny.
 * podaj odpowiedni komunikat
 * 
 *  and (liczba1 + liczba3 > liczba2) and (liczba2 + liczba3 > liczba1)
 * 
 */


#include <iostream>

using namespace std;

    int liczba1;
    int liczba2;
    int liczba3;

int main(int argc, char **argv)
{   
    cout << "Podaj pierwszą liczbe: ";
    cin >> liczba1;
    cout << "Podaj drugą liczbe: ";
    cin >> liczba2;
    cout << "Podaj trzecią liczbe: ";
    cin >> liczba3;
    
    if (liczba1 + liczba2 > liczba3) {
    if (liczba1 + liczba3 > liczba2) {
    if (liczba2 + liczba3 > liczba1) {
        cout << "Podane liczby mogą tworzyć boki trójkąta";}
	
	return 0;
}

