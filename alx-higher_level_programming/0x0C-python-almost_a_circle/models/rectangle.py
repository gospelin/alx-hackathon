#!/usr/bin/python3

from models.base import Base

class Rectangle(Base):

    def __init__(self, width, height, x=0, y=0, id=None):
        self.width = width
        self.height = height
        self.x = x
        self.y = y
        super().__init__(id)

    @property
    def width(self):
        return self.__width

    @width.setter
    def width(self, value):
        if type(value) is not int:
            raise TypeError(f"width must be an integer")

        if value <= 0:
            raise ValueError(f"width must be > 0")
        self.__width = value

    @property
    def height(self):
        return self.__height

    @height.setter
    def height(self, value):
        if type(value) is not int:
            raise TypeError("height must be an integer")
        if value <= 0:
            raise ValueError("height must be > 0")
        self.__height = value

    @property
    def x(self):
        return self.__x
    
    @x.setter
    def x(self, value):
        if type(value) is not int:
            raise TypeError(f"x must be an integer")
        if value < 0:
            raise ValueError(f"x must be >= 0")
        self.__x = value

    @property
    def y(self):
        return self.__y

    @y.setter
    def y(self, value):
        if type(value) is not int:
            raise TypeError(f"y must be an integer")
        if value < 0:
            raise ValueError(f"y must be >= 0")
        self.__y = value

    def area(self):
        return self.__width * self.__height

    def display(self):
        space_x = ""
        space_y = ""
        rectangle = ""

        space_x += " " * self.__x 
        space_y += "\n" * self.__y

        rectangle += space_y

        for _ in range(self.__height):
            rectangle += space_x + "#" * self.__width + "\n"
        print(rectangle, end='')

    def __str__(self):
        return f"[Rectangle] ({(self.id)}) {self.x}/{self.y} - {self.width}/{self.height}"

    def update(self, *args):
        attribute_list = ["id", "width", "height", "x", "y"]

        for count, arg in enumerate(args):
            setattr(self, attribute_list[count], arg)
