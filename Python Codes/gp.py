import sys
from sys import stdin
MOD = 10**9 + 7

def nthTermOfGP(n, a, r):

    if(n==1):
        return a % MOD
    c=(a*r) % MOD
    c=nthTermOfGP(n-1,c,r)
    return c