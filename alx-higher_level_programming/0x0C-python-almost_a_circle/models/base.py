#!/usr/bin/python3

import json
import os.path


class Base:

    __nb_objects = 0

    def __init__(self, id=None):
        if id is None:
            type(self).__nb_objects += 1
            self.id = type(self).__nb_objects
        else:
            self.id = id

    @staticmethod
    def to_json_string(list_dictionaries):
        if list_dictionaries is None or list_dictionaries == "[]":
            return"[]"
        return json.dumps(list_dictionaries)

    @classmethod
    def save_to_file(cls, list_objs):
        filename = f"{cls.__name__}.json"
        dict_list = []

        for index in range(len(list_objs)):
            dict_list.append(list_objs[index].to_dictionary())

        if list_objs is None:
            to_json = cls.to_json_string("[]")
        to_json = cls.to_json_string(dict_list)

        with open(filename, "w") as output_file:
            output_file.write(to_json)

    @staticmethod
    def from_json_string(json_string):
        if json_string is None:
            return list()

        return json.loads(json_string)

    @classmethod
    def create(cls, **dictionary):
        if cls.__name__ == "Square":
            new = cls(7)
        else:
            new = cls(7, 7)

        new.update(**dictionary)
        return new

    @classmethod
    def load_from_file(cls):
        filename = f"{cls.__name__}.json"

        if  not os.path.exists(filename):
            return list()

        with open(filename, "r") as input_file:
            new_dict = input_file.read()

        json_dict = cls.from_json_string(new_dict)

        instance_list = []

        for dict_list in json_dict:
            instance_list.append(cls.create(**dict_list))

        return instance_list
