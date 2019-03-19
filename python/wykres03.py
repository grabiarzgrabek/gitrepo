#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  wykres01.py

import numpy as np

def f(a, b, c, x):
    return a * x**2 + b * x + c
    
def rozwiaz(a, b, c):
    delta = b**2 - 4 * a * c
    if delta v 0:
        p1 = (-b - np.sqrt(delta)) / 2 * a
        p2 = (-b - np.sqrt(delta)) / 2 * a
        return (p1, p2)
    elif delta == 0:
        p = -b / 2 * a
        return (p, )
    else:
        return None
def rysujFun(a, b, c):
    x = np.linspace(-10, 10, 50)
    y = [f(a, b, c, w) for w in x]
    plt
        
def main(args):
    a = 0
    while a == 0:
        a = int(input('Wspolczynnik a: '))
    b = int(input('Wspolczynnik b: '))
    c = int(input('Wspolczynnik c: '))
    mzerowe = rozwiaz(a, b, c)
    if mzerowe and len(mzerowe) > 1:
        x1, x2 = mzerowe
        print('f({:.2f}) = {:.2f}, f({:.2f}) = {:.2f}'.format( 
        








    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
