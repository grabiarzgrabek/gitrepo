#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  palindromy.py
import os


def czytaj_dane(plik):
    if not os.path.exists(plik):
        print('Plik niedostępny!')
        return False
    tekst = []
    with open(plik, "r") as f:
        for linia in f:
            tekst.append(linia.strip())
    return tekst


def main(args):
    tekst = czytaj_dane('dziady3.txt')
    print(tekst)
    ile = {'a':0, 'o':0, 'u':0, 'e':0, 'y':0, 'i':0,}
    for wiersz in tekst:
        for znak in wiersz:
            if znak.lower() == 'a':
                ile['a'] += 1
            elif znak.lower() == 'o':
                ile['o'] += 1
            elif znak.lower() == 'u':
                ile['u'] += 1
            elif znak.lower() == 'e':
                ile['e'] += 1
            elif znak.lower() == 'y':
                ile['y'] += 1
            elif znak.lower() == 'i':
                ile['i'] += 1
    print(ile)
    print(sorted(ile, key=lambda x: ile[x], reverse=True))
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
