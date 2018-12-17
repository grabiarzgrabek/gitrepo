#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  grabowski_petle.py
#  
#  Copyright 2018  <>

suma=0
def cw1(a,b):
    while (suma < 75):
        a = int(input("Podaj liczbę:"))
        
        suma += b
        print(suma)
        b = int(input("Podaj liczbę:"))
        
        print()
    print("Suma liczb:", suma)
    

def cw2():
    licznik = 0
    for i in range(1, 10):
        for j in range(0, 10): 
            if i != j: 
                print("{}{}".format(i, j))
                licznik = licznik + 1
    print("suma:", licznik)

def main(args):
    cw2()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
