#!/usr/bin/python3

"""This the documentation of the module '2-square'."""


class Square:
    """Creates a Square class."""

    def __init__(self, size=0):
        """Initialize method of that stores the size of the Square object.

        Args:
            size: (int) The size of the square must be >= 0
        """
        self.__size = size

    def area(self):
        """Calculates the area of the square."""
        return self.__size ** 2

    @property
    def size(self):
        return self.__size

    @size.setter
    def size(self, value):
        if not isinstance(value, int):
            raise TypeError("size must be an integer")
        elif (value < 0):
            raise ValueError("size must be >= 0")
        else:
            self.__size = value
