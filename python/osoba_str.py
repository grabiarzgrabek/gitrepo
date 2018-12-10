#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  osoba_str.py

def zapisz dane (imie, nazwisko):
    osoba = [imie, nazwisko]
    return osoba

def main(args):
    o1 = zapisz dane('Adam', 'Słodowy')
    print(o1[0], o1[1])
    
    o2 = zapisz dane2('Ewa', 'Kos')
    print(o2['imie'], o2['nazwisko'])
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
