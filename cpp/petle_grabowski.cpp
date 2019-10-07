/*
 * petle2.cpp
 */


#include <iostream>
#include <iomanip>

using namespace std;

void drukujTabliczke(int x, int y) {
    int i, j;
    for (i = 1; i <= x; i++) {
        for (j = 1; j <= y; j++) {
            cout << i * j << " ";
        }
        cout << endl;
    }
}

void prostokat(int x, int y, char a) {
    int i, j;
    for (i = 1; i <= x; i++) {
        for (j = 1; j <= y; j++) {
            cout << a;
        }
        cout << endl;
    }
}

void prostokat2(int x, int y, char z) {
    int i, j;
    for (i = 1; i <= x; i ++) {
        for (j = 1; j <= y; j++) {
            if (i == 1 || i == x)
                cout << z;
                    else if(j ==1 || j == y)
                        cout << z;
                    else
                        cout << " ";

                }
                cout << endl;
    }
}
void choinka(int n, char h){
  int i,j;
  for (i = 1; i<=n; i++){
      for (j=1;j<=i;j++){
          cout << h;}
      
      cout << endl;
} 
}
int main(int argc, char **argv)
{   
   int x, y;
   char znak; 
   cout << "Podaj rozmiar x, y: ";
   cin >> x >> y;
   cout << "Podaj znak: ";
   cin >> znak;
   prostokat(x, y, znak);

{
    int a, b;
    char znak2;
    cout << "Podaj rozmiar x, y: ";
    cin >> b >> a;
    cout << "Podaj znak: ";
    cin >> znak2;
    prostokat2(a, b, znak2);
{
    int n;
    char znak3; 
    cout << "Podaj liczbe poziomów: ";
    cin >> n;
    cout << "Podaj znak: ";
    cin >> znak3;
    choinka(n, znak3);
    cout << endl;
}
}
	return 0;
}
