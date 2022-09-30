#!/usr/bin/python3

"""This the documentation of the module ``3-say_my_name``."""


def say_my_name(first_name, last_name=""):
    if not first_name and not last_name:
        raise TypeError("Provide at least first_name or last_name as string")

    if not isinstance(first_name, str):
        raise TypeError("first_name must be a string")

    if not isinstance(last_name, str):
        raise TypeError("last_name must be a string")


    print(f"My name is {first_name} {last_name}")
