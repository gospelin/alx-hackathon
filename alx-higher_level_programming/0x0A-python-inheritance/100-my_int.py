#!/usr/bin/python3

class MyInt(int):
    def __ne__(self, number):
        return int.__eq__(self, number)

    def __eq__(self, number):
        return int.__ne__(self, number)
