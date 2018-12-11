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

class Kierowca(Osoba):
    
    licznik = 0
    
    def __init__(self, imie, nazwisko, kategoria):
        super().__init__(imie, nazwisko)
        self.kategoria = kategoria
        Kierowca.licznik += 1
        
    def __del__(self):
        Kierowca.licznik -= 1
        
    @staticmethod # metoda statyczna
    def KierowcaLicz():
        return Kierowca.licznik
        
class Samochod:
    
    def __init__(self, marka, model, rocznik):
        self.marka = marka
        self.model = model
        self.rok = rocznik
        
        
    def wiek(self):
        dzis = date.today()
        return dzis.year - self.rok
             


def main(args):
    s1 = Samochod('Fiat', 'Tipo', '2000')
    s2 = Samochod('Peugeot', '308', '2007')
    s3 = Samochod('Fiat', 'Tipo', '2000')
    s4 = Samochod('Peugeot', '308', '2007')
    
    
    k1 = Kierowca('Adam', 'Słodowy', 'B')
    # print(k1.imie, k1.kategoria)
    print(k1.imie, k1.nazwisko, k1.kategoria)
    print(s1.marka, s1.model, s1.rok)
    print(k1.licznik)
    k2 = Kierowca('Ewa', 'Bąk', 'BC')
    print(k2.licznik)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
