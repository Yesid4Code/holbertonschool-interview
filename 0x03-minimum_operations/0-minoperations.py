#!/usr/bin/python3
'''
This file contain a function that calculate the fewest number of operation
needed to copy a characer
'''


def minOperations(n):
    '''
    Function that calculate the fewest number of operation needed
    to copy a characer 'n' times.
    Args:
        n: integer, number of final characters desired.
    Return:
        integer that represent the number of operations to achive the solutions
        0 if n  is imposible to achive.
    '''
    if (type(n) != int or n <= 1):
        return 0

    operations = 0
    i = 2
    while (i <= n):
        while (n % i == 0):
            operations += i
            n /= i
        i += 1
    return operations
