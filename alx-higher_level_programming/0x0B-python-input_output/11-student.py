#!/usr/bin/python3

class Student:

    def __init__(self, first_name, last_name, age):
        self.first_name = first_name
        self.last_name = last_name
        self.age = age

    def to_json(self, attrs=None):
        json_dict = self.__dict__.copy()
        attrs_dict = dict()

        if type(attrs) is not list:
            return json_dict

        if type(attrs) is list:
            for attr in attrs:

                if type(attr) is not str:
                    return json_dict

                for key, value in json_dict.items():
                    if attr in key:
                        attrs_dict[attr] = value
        return attrs_dict

    def reload_from_json(self, json):
        json_dict = self.__dict__
        for key, value in json.items():
            json_dict[key] = value
