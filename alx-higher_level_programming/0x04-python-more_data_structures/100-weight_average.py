#!/usr/bin/python3

def weight_average(my_list=[]):
    if not my_list:
        return 0

    sum = 0
    divisor = 0
    weight = 0

    new_list = [x * y for x, y in my_list]
    divisor = [divisor + y for x, y in my_list]

    for num in new_list:
        sum += num

    for num in divisor:
        weight += num

    average = sum / weight
    return average
