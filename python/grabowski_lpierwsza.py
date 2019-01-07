#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  lpierwsza.py

def licza():
    n=int(input("Podaj liczbe która chcesz sprawdzić:"))
    i = 2
    while not i*i<=n:
        if not i==0:
            i=+1
        if i==0:
            print("liczba złożona")
    if not i*i<=n:
        print("liczba pierwsza")
    if not n%i:
        print("liczba złożona")

          
        
            
    


def main(args):
    licza()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
