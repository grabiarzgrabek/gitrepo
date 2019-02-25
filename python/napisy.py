#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  napisy.py

def pobierz_dane1():
    imie = input('Podaj imie: ')
    nazwisko = input('Podaj nazwisko: ')
    print("Witaj {} {}!".format(imie.strip().capitalize(),nazwisko.strip().capitalize()))
    imie = imie.strip()
    nazwisko = nazwisko.strip()
    if len(imie) > len(nazwisko):
        print("imie > nazwisko")
    elif len(imie) < len(nazwisko):
        print("imie < nazwisko")
    else:
        print("imie = nazwisko")
        
# sprawdz plec
    if imie[-1] == 'a':
        print("kobieta")
    else:
        print("mezczyzna")
    
def pobierz_dane2():
    nazwa = input("imie i nazwisko: ").strip()
    while nazwa.count(' ') != 1:
        nazwa = input("imie i nazwisko: ").strip()
    samogloski = set(['a', 'o', 'u', 'e', 'y', 'i', 'ę', 'ą'])
    inne = set([',', '.', '!','?', ' ', '\t'])
    
    ileSa = 0
    ileSp = 0
    for znak in nazwa:
        if znak in samogloski:
            ileSa += 1
        elif znak not in inne:
            ileSp += 1
    if ileSa > ileSp:
        print("samogloski > spolgloski")
    elif ileSa < ileSp:
        print("spolgloski > samogloski")
    else:
        print("samogloski = spolgloski")

def pobierz_dane3():
    nazwa = input("imie i nazwisko: ").strip()
    while nazwa.count(' ') != 1:
        nazwa = input("imie i nazwisko: ").strip()
    samogloski = set(['a', 'o', 'u', 'e', 'y', 'i', 'ę', 'ą'])
    inne = set([',', '.', '!','?', ' ', '\t'])
    
    

def main(args):
    pobierz_dane1()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
