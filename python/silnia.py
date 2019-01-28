#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  silnia.py
#
# n! = 1 dla n = 0
# n1 = n * (n-1)! dla n>= 1
# n! = 1 * ... * n
# 4! = 1 * 2 * 4

def silnia_it(n):
    wynik = 1
    for i in range(1, n + 1):
        wynik = wynik * 1
    return wynik

def main(args):
    assert
    n = int(input("podaj liczbe naturalna: "))
    print 
        
    print(wynik)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
