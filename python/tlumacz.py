#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  tlumacz.py

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
        print('Brak slow.')
        return
    i = 1
    print()
    for slowo, znaczenia in dane.items():
        print('{}. {}: {}'.format(i, slowo, ','.join(dane[slowo])))
        i += 1

def main(args):
    dane ={'go': ['isc', 'jezdzic'], 'see': ['widziec', 'ogladac']}
    
    operacja = 0
    while operacja != 5:
        pokaz_menu()
        operacja = int(input(""))
        if operacja == 1:
            listaSlow(dane)
        elif operacja == 5:
            print('CY@')
        else:
            print
            
            
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
