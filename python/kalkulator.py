#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  kalkulator.py
  
def pokaz_liste():
    print('''Lista działań:
          +  – dodawanie
          -  – odejmowanie
          *  – mnożenie
          /  – dzielenie
          // – dzielenie całkowite
          %  – dzielenie modulo
          ^  – potęgowanie
          !  – silnia
          sin – sinus
          cos – cosinus
          koniec – wyjście z programu
          ''')
          
def pobierz_liczbe(komunikat ='pobierz liczbe: '):
    a = input(komunikat)
    if a.isdigit():
        return int(a)
    return False 
        
def main(args):
    pokaz_liste()
    while True:
        d = input("wybierz dzialanie")
        if d == '+':
            pass
        if d == '-':
            pass
        if d == '*':
            pass
        if d == '+':
            pass
        elif d == '/':
            a = pobierz_liczbe('podaj dzielna:')
            b = pobierz_liczbe('podaj dzielnik:')
            if a and b:
                wynik = dziel(a, b)
        elif d == '//':
            pass
        elif d == 'l':
            pokaz_liste()
        elif d == '':
            return 0 
        else: 
            print("bledny wybor")
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
