#!/usr/bin/python3

def complex_delete(a_dictionary, value):
    delete_list = []

    #for key, num in a_dictionary.items():
    #    if num == value:
    #        delete_list.append(key)
    
    delete_list = [key for (key, num) in a_dictionary.items() if num == value]

    for key in delete_list:
        del a_dictionary[key]
    
    #a_dictionary = {key: num for (key, num) in a_dictionary.items() if num == value}

    return a_dictionary
