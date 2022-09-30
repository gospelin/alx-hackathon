#!/usr/bin/python3

def read_file(filename=""):
    with open(filename, 'r', encoding="utf-8") as input_file:
        read_data = input_file.read()
        print(read_data)
