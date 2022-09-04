#!/usr/bin/python3

from hashlib import new


def multiply_by_2(a_dictionary):
    new_dictionary = a_dictionary.copy()
    #for keys, values in new_dictionary.items():
    #    new_dictionary[keys] = values * 2
    
    new_dictionary = {k: v*2 for (k, v) in a_dictionary.items()}
    return new_dictionary
