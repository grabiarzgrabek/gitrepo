#!/usr/bin/env python
# -*- coding: utf-8 -*-
#  sortowanie.py
#  
from random import randint

def wypelnij(lista,n):
    for i in range(n):
        lista.append(randint(0, 100))
        
def wyswietl(lista):
    for i in lista:
        print(i, " ", end='')
    print()
    
def zamien(tab, j, i):
    tmp = tab[j]
    tab[j] = tab[i]
    tab[i] = tmp
    
def sort_bubble(tab):
    n = len(tab)
    for i in range(n-1, 0, -1):
        for j in range(0, i):
            if tab[j] < tab[j+1]:
                zamien(tab, j)
    
#    void bubble_sort(int tab[], int n){
#	int ile = 0;
#	for(int i = n-1; i>0; i--){
#		cout << "Indeks i = " << i << " ";
#		for(int j = 0; j < i; j++){
#		if(tab[j] < tab[j+1]){
#		zamien(tab[j], tab[j+1]);
#		ile++;
#			}
#		}
#		cout << endl;
#		}
#	cout << "Zamian: " << ile << endl;
    
def sort_selection(tab)
    n = len(tab)
        for i in range(0, n, 1):
            int k = i
            for j in range(0, i):
                if tab[j] < tab[k]:
                k = j
            zamien(j, k)
#void selection_sort(int tab[], int n){
#	int i, j, k;
#	int ile = 0;
#	for (i = 0; i < n; i++){
#			k = i;
#			for(j=i+1; j<n; j++){
#			if(tab[j]<tab[k]){
#					k=j;
#			}
#			}
#		zamien(tab[k], tab[i]);
#					ile++;
    
def main(args):
    n = int(input('Ile wylosowac liczb? '))
    lista = []
    wypelnij(lista, n)
    wyswietl(lista)
    sort_bubble(lista)
    selection_sort(lista)
    wyswietl(lista)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
