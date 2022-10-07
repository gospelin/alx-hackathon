#!/usr/bin/python3

class Base:

    __nb_objects = 0

    def __init__(self, id=None):
        if id == None:
            type(self).__nb_objects += 1
            self.id = type(self).__nb_objects
        else:
            self.id = id
