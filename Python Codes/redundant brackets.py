from sys import *
from collections import *
from math import *

def findRedundantBrackets(s:str):
    stack = []

    for ch in s:

        if ch == ")":
            top = ch
            flag = True

            while (len(stack) != 0 and top != "("):
                if top == "+" or top == "-" or top == "*" or top == "/":
                    flag = False
                top = stack.pop()
 
            if flag == True:
                return True

        else:
            stack.append(ch)

    return False