/*
 * zad_12_110_grabowski.cpp
 */


#include <iostream>
using namespace std;

void dziel(int *&tab, int p) {
	int n=1;
	tab = new int[p];
	for(int i=0;i<p;i++) {
		if(p%n == 0) {
			tab[i] = n;
			n++;
		}
		else {
			tab[i]=0;
			n++;
		}
	}
}
void wyswietl(int *tab,int p) {
        for(int i=0;i<p;i++)
        {
        	if(tab[i]>0) {
        		cout<<tab[i]<<" ";
    		}
        }
        cout<<endl;
}
void boubble_sort(int *tab,int p)
{
  double z; 
  for(int i=0;i<p;i++)
    for(int j=0;j<p-i-1;j++) 
    if(tab[j]<tab[j+1]) {
	  z = tab[j];
      tab[j] = tab[j+1];
      tab[j+1] = z;
    }
}

int main(int argc, char** argv) {
	int p;
	int *tab;
	cout<<"Podaj liczbe:"<<endl;
	cin>>p;
	dziel(tab,p);
	cout<<"Dzielniki:"<<endl;
	wyswietl(tab,p);
	boubble_sort(tab,p);
	wyswietl(tab,p);
	
	return 0;
}
