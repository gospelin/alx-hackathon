#!/usr/bin/python3
"""Module to find the max integer in a list
"""


def max_integer(list=[]):
    """Function to find and return the max integer in a list of integers
        If the list is empty, the function returns None
    """
    if len(list) == 0:
        return None
    
    if type(list[0]) not in [int, float]:
        raise ValueError("Value must be an number")

    result = list[0]
    i = 1
    while i < len(list):
        if type(list[i]) not in [int, float]:
            raise ValueError("Value must be an number")
        if list[i] > result:
            result = list[i]
        i += 1
    return result