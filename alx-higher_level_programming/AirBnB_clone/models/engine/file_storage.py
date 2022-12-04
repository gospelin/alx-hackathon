#!/usr/bin/python3

"""This is the Storage module.

The module is concerned with handling all storages of respective files
"""

import json
import os.path

class Filestorage():
    """The file storage class."""

    __file_path = "file.json"
    __objects = {}

    def all(self):
        """Returns the dictionary objects"""
        return Filestorage.__objects

    def new(self, obj):
        """Stores the obj key with its id"""
        key = f"{(obj.__class__.__name__)}.{(obj.id)}"
        Filestorage.__objects[key] = obj

    def save(self):
        """Save to file"""

        dictionary = {}

        for key, value in Filestorage.__objects.items():
            dictionary[key] = value.to_dict()

        with open(Filestorage.__file_path, 'w') as outfile:
            json.dump(dictionary, outfile)

    def reload(self):
        pass

