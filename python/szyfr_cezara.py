#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  szyfr_cezara.py

def pobierz_klucz():
    try:
        klucz = int(input('podaj klucz:\n'))
        return klucz % 26
    except ValueError:
        print('bledny klucz!')
        return 3   
        
def szyfruj_1(tekst, klucz):
    szyfrogram = ''
    for znak in tekst:
        ascii = ord(znak)
        if ascii + klucz > 122:
            znak = chr(ascii + klucz - 26)
        else:
            znak = chr(ascii + klucz)
        szyfrogram += znak
    print('Szyfrogram:\n', szyfrogram)
        
def main(args):
    klucz = input('podaj tekst:\n')
    klucz = pobierz_klucz()
    szyfruj_1(tekst, klucz)
    return 0
    

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
