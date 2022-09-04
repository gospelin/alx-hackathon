#!/usr/bin/python3

from operator import ne


def search_replace(my_list, search, replace):
    new_list = my_list[:]

    # for index in range(len(new_list)):
    #    if new_list[index] == search:
    #        new_list[index] = replace

    new_list = list(map(lambda x: replace if x == search else x, my_list))
    return new_list
