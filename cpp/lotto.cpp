#include <iostream>

#include <time.h>


using namespace std;

int liczba;
int x,y,z,a,b,c;

int main()
{
    cout << "Witaj w losowaniu! Wybierz 6 liczb z przedzialu od 1 do 49:"<< endl;
    cin >> x;
    cin >> y;
    cin >> z;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << "Twoje liczby to: " << x <<" " << y <<" " << z <<" " << a <<" " << b <<" " << c <<" "<< endl;
    cout << "wylosowane liczby to:"<< endl;
    srand(time(NULL));

    for (int i=1; i<=6; i++)
    {
        liczba = rand()%49+1;
        cout << liczba << endl;
    }
    return 0;

}

