#!/usr/bin/python3

def safe_print_list(my_list=[], x=0):
    count = 0

    for index in range(x):
        try:
            print(f"{my_list[index]}", end='')
        except IndexError:
            break
        else:
            count += 1

    print()
    return count
