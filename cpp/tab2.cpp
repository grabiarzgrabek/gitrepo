/*
 * tab4.cpp
 */


#include <iostream>
#include <iomanip>
using namespace std;

#define N	6
#define M	6


int main(int argc, char **argv)
{
    int a = 0;
    int r = 0;
    cout << "Podaj a: ";
    cin >> a;
    cout << "podaj r: ";
    cin >> r;
    
	int tab2W[N][M];
	int i, j;
	for (i = a; i < N; i+=r){
		cout << i ;
		for(j= a; j < M; j+=r){
			tab2W[i][j] = i * j;
			cout << setw(4) << tab2W[i][j] << " ";
			}
		cout << endl;


		}

	return 0;
}
