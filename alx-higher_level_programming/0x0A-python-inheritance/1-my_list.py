#!/usr/bin/python3
"""This is the official documentation for the '1-my_list' module."""
class MyList(list):
    def print_sorted(self):
        new_list = self.copy()
        new_list.sort()
        print(new_list)
