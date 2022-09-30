#!/usr/bin/python3

"""This the documentation of the module '2-square'."""


from turtle import position


class Square:
    """Creates a Square class."""

    def __init__(self, size=0, position=(0, 0)):
        """Initialize method of that stores the size of the Square object.

        Args:
            size: (int) The size of the square must be >= 0
            position: (int) filled by spaces
        """
        self.__size = size
        self.__position = position

    def area(self):
        """Calculate the area of the square."""
        return self.__size ** 2

    @property
    def size(self):
        """Return square size."""
        return self.__size

    @size.setter
    def size(self, value):
        """Setter method for the size attribute.

        Args:
            value: (int) the positive size of the square
        """
        if not isinstance(value, int):
            raise TypeError("size must be an integer")
        elif (value < 0):
            raise ValueError("size must be >= 0")
        else:
            self.__size = value

    def my_print(self):
        """Print the square based on specified size using #."""
        if self.__size == 0:
            print()
            return

        for index in range(self.__position[1]):
            print()

        for index in range(0, self.__size):
            for j in range(self.__position[0]):
                print(" ", end='')
            for k in range(self.__size):
                print("#", end='')
            print()

    @property
    def position(self):
        """Return position."""
        return self.__position

    @position.setter
    def position(self, value):
        if isinstance(value, tuple):
            if (len(value) == 2 and (value[0] >= 0 or value[1] >= 0)):
                self.__position = value
            else:
                raise TypeError(
                    "position must be a tuple of 2 positive integers")
        else:
            raise TypeError(
                "position must be a tuple of 2 positive integers")
