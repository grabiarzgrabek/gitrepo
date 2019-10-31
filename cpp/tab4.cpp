/*
 * tab4.cpp
 */


#include <iostream>
#include <iomanip>

/*
 * tab4.cpp
 *
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    float tab[5][7];
    float a = 0;
    float r = 0;
    cout<<"Podaj a: ";
    cin >>a;
    cout<< "Podaj r: ";
    cin>>r;
    for(int i=0;i<5;i++){
        for(int j=0;j<7;j++){
            tab[i][j] = a;
            cout<<tab[i][j]<<" ";
            a += r;
            }
            cout<<endl;
        }
    return 0;
}


