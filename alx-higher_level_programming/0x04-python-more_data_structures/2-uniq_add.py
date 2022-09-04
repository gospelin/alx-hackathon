#!/usr/bin/python3

from types import new_class


def uniq_add(my_list=[]):
    sum = 0
    new_list = []

    # for num in my_list:
    #    if num not in new_list:
    #        new_list.append(num)
    
    new_list = [x for x in my_list if x not in new_list]
    
    for index in new_list:
        sum += index

    # my_list = set(my_list)
    #for index in my_list:
    #    sum += index

    return sum
