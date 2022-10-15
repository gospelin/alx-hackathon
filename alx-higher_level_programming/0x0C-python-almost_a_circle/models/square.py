#!/usr/bin/python3

from models.rectangle import Rectangle


class Square(Rectangle):

    def __init__(self, size, x=0, y=0, id=None):
        super().__init__(size, size, x, y, id)

    @property
    def size(self):
        return self.width

    @size.setter
    def size(self, value):
        self.width = value
        self.height = value

    def update(self, *args, **kwargs):
        if args is not None:
            attribute_list = ["id", "size", "x", "y"]

            for index, arg in enumerate(args):
                setattr(self, attribute_list[index], arg)

        if kwargs:
            for key, value in kwargs.items():
                setattr(self, key, value)

    def __str__(self):
        return f"[Square] ({(self.id)}) {self.x}/{self.y} - {self.width}"

    def to_dictionary(self):
        attribute_list = ["id", "size", "x", "y"]
        new_dict = dict()

        for key in attribute_list:
            new_dict[key] = getattr(self, key)

        return new_dict
