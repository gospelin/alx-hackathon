#!/usr/bin/python3

class BaseGeometry:
    def area(self):
        raise Exception("area() is not implemented")

    def integer_validator(self, name, value):
        if type(name) is str:
            self.name = name

        if type(value) is not int:
            raise TypeError(f"{name} must be an integer")

        self.value = value

        if value <= 0:
            raise ValueError(f"{name} must be greater than 0")
