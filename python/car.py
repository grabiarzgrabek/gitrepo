#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  car.py

# marka, np. Fiat
# model, np. Tipo
# rok produkcji, np. 2002
# metoda wiek(), króra zwróci wiek
from datetime import date
from osoba_obj import Osoba

class Kirowca(Osoba):
    
    def __init__self, imie, nazwisko, kategoria):
        super().__init__(imie, nazwisko)
        self.kategoria = kategoria
        
class Samochod:
    
    def __init__(self, marka, model, rocznik):
        self.marka = marka
        self.model = model
        self.rok = rocznik
        self.kierowca = kierowca
        
         def wiek(self):
             dzis = date.today()
             return dzis.year - self.rok
             


def main(args):
    s1 = Samochod('Fiat', 'Tipo', 2000)
    s2 = Samochod('Peugeot', '308', 2007)
    print(s1.moidel, s1.wiek())
    print(s2.moidel, s22.wiek())
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
