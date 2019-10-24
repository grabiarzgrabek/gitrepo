/*
 * tablica2w.cpp
 * 
 * Copyright 2019  <>
 */


#include <iostream>
#include <iomanip>
using namespace std;

#define N   3
#define M   3

int main(int argc, char **argv)
{
	int tab2W[N][M];
    int i, j;
    
    srand(time(NULL)); // inicjacja generatora liczb pseudolosowych
    
    for (i=0; i < N; i++) {
        for (j=0; j < M; i++) {
            //cout << i << "-" << j << endl;
            tab2W[i][j] = rand() % 10;
            cout << setw(4) << tab2W[i][j] << " ";
        }
        cout << endl;
    }
	return 0;
}

