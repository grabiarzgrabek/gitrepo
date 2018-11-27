#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  funkcje.py
#  
#  Copyright 2018  <>
a, b = 4, 2

def odejmij():
    return a - b


def main(args):
    print("Hello")
    c = odejmij()
    print(c**2)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
