#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  tlumacz.py

from random import randint
import os
import json

def pokaz_menu():
    """Funkcja wyświetla działania dostępne dla użytkownia"""
    print("""
    Wybierz działanie:
    1. Lista słów
    2. Wprowadzanie / edycja słów
    3. Tłumaczenie
    4. Zmień język
    5. Koniec
""")


def listaSlow(dane):
    if not dane:
        print('Brak słów.')
        return
    i = 1
    print()
    for slowo, znaczenia in dane.items():
        print('{}. {}: {}'.format(i, slowo, ','.join(dane[slowo])))
        i += 1


def pobierzZnaczenia():
    znaczenia = input('Podaj znaczenie(a) oddzielone przecinkami:\n')
    znaczenia = znaczenia.split(',')
    znaczenia = [z.strip() for z in znaczenia]
    return znaczenia


def pobierzDane(dane):
    slowo = input('Podaj słowo: ').strip()
    if slowo in dane.keys():
        print('Słowo w bazie.')
        print('{}: {}'.format(slowo, ','.join(dane[slowo])))
        if input('Czy chcesz zmienić znaczenia (t/n)?').lower() == 't':
            dane[slowo] = pobierzZnaczenia()
    else:
        dane[slowo] = pobierzZnaczenia()

def tlumacz(dane):
    if not dane:
        print('Brak słów.')
        return
    slowa = list(dane.keys())
    op = 't'
    while op == 't':
        if len(slowa) > 1:
            slowo = slowa[randint(0, len(slowa) - 1)]
        else:
            slowo = slowa[0]
        print('przetlumacz:', slowo)
        znaczenia = pobierzZnaczenia()
        poprawne = [z for z in znaczenia if z in dane[slowo]]
        if poprawne:
            print('Poprawne:', ', '.join(poprawne))
            slowa.remove(slowo)
        else:
            print('brak poprawnych znaczen')
        if slowa:
            op = input('nastepne (t/n)?').lower()
        else:
            print('przetlumaczyles wszystko!')
            return

def wczytaj_dane(plik, roz='.dat'):
    dane = {}
    if os.path.isfile(plik + roz):
        with open(plik + roz, "r") as f:
            dane = json.load(f)
    else:
        print('plik {} nie istnieje.'.format(plik + roz))
    return dane

def main(args):
    #dane ={'go': ['iść', 'jeździć'], 'see': ['widzieć', 'oglądać']}
    
    konf_plik = 'baza'
    konf_dane = wczytaj_dane(konf_plik)
    print(konf_dane)
    return
    
    operacja = 0
    while operacja != 5:
        pokaz_menu()
        operacja = int(input(""))
        if operacja == 1:
            listaSlow(dane)
        elif operacja == 2:
            pobierzDane(dane)
        elif operacja == 3:
            tlumacz(dane)
        elif operacja == 5:
            print('\nDo zobaczenia!')
        else:
            print('Błędny wybór!')
            
    return 0

if __name__ == '__main__':
    import sys
sys.exit(main(sys.argv))

