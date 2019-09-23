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
 * else {cout << "trójkąt o podanych bokach nie istnieje"<< endl;}
 */


#include <iostream>
#include <cmath>

using namespace std;

    int a;
    int b;
    int c;

int main(int argc, char **argv)
{   
    cout << "Podaj pierwszą liczbe: ";
    cin >> a;
    cout << "Podaj drugą liczbe: ";
    cin >> b;
    cout << "Podaj trzecią liczbe: ";
    cin >> c;
    
    if (a + b <= c) {
    cout << "Trójkąt o podanych bokach nie istnieje";}
    else if (a+c<=b){
    cout << "Trójkąt o podanych bokach nie istnieje";}
    else if (b+c<=a){
    cout << "Trójkąt o podanych bokach nie istnieje";}
    else {
    cout << "Podane liczby mogą tworzyć boki trójkąta";}
    
    if(c==sqrt(a*a+b*b)){
    cout << "i jest to trojkat prostokątny";}
    else if(b==sqrt(a*a+c*c)){
    cout << "i jest to trojkat prostokątny";}
    else if(a==sqrt(b*b+c*c)){
    cout << "i jest to trojkat prostokątny";}
    else {
    cout << ", nie jest to trójkąt prostokątny";}

	return 0;
}

