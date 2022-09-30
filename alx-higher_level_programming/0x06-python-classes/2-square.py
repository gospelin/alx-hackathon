#!/usr/bin/python3

"""This the documentation of the module '2-square'."""


class Square:
    """Creates a Square class."""

    def __init__(self, size=0):
        """Initialize method of that stores the size of the Square object.

        Args:
            size: (int) The size of the square must be >= 0
        """
        if not isinstance(size, int):
            raise TypeError("size must be an integer")
        elif (size < 0):
            raise ValueError("size must be >= 0")
        else:
            self.__size = size
