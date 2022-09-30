#!/usr/bin/python3

"""Square class Documentation.

This is the documentation of the module '1-square.py'.
This is a typical example of creating a simple class, it's simple task
is to have a private instance attribute of size to be returned by the object

To create an object of this class

    square = Square(3)
"""


class Square:
    """Creates a Square Class."""

    def __init__(self, size):
        """Initialize method that stores the size of the square.

        Args:
            size: size of the square
        """
        self.__size = size
