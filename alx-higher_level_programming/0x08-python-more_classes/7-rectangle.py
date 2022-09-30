#!/usr/bin/python3

"""This is the official documentation of the module '2-rectangle'."""


class Rectangle:

    number_of_instances = 0
    print_symbol = "#"

    def __init__(self, width=0, height=0):
        self.width = width
        self.height = height
        Rectangle.number_of_instances += 1

    def __str__(self):

        rectangle = ""

        if self.width == 0 or self.height == 0:
            return rectangle

        for i in range(self.__height):
            rectangle += f'{(self.print_symbol * self.__width)}\n'

        return rectangle[:-1]

    def __repr__(self):
        return f'Rectangle({(self.__width)}, {(self.__height)})'

    def __del__(self):
        Rectangle.number_of_instances -= 1
        print("Bye rectangle...")

    @property
    def width(self):
        return self.__width

    @width.setter
    def width(self, value):
        if value < 0:
            raise ValueError("width must be >= 0")

        if not isinstance(value, int):
            raise TypeError("width must be an integer")

        self.__width = value

    @property
    def height(self):
        return self.__height

    @height.setter
    def height(self, value):
        if value < 0:
            raise ValueError("height must be >= 0")

        if not isinstance(value, int):
            raise TypeError("height must be an integer")

        self.__height = value

    def area(self):
        return self.__width * self.__height

    def perimeter(self):
        if self.__width == 0 or self.__height == 0:
            return 0

        return 2 * (self.__width + self.__height)
