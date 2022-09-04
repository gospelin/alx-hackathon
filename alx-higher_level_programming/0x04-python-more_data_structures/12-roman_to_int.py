#!/usr/bin/python3

def roman_to_int(roman_string):
    if not roman_string:
        return 0
    if not isinstance(roman_string, str):
        return 0

    arabic_num = 0
    list_num = []
    rom_dict = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}

    for ch in roman_string:
        for key, value in rom_dict.items():
            if ch == key:
                list_num.append(value)

    for index in range(len(list_num) - 1):
        if list_num[index] < list_num[index + 1]:
            arabic_num -= list_num[index]
        else:
            arabic_num += list_num[index]

    length = len(list_num) - 1
    arabic_num += list_num[length]
    return arabic_num
