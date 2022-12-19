#!/usr/bin/python3

"""This is the Storage module.

The module is concerned with handling all storages of respective files
"""

import json
import os

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

        if os.path.exists(Filestorage.__file_path):
            os.remove(Filestorage.__file_path)
            with open(Filestorage.__file_path, 'w') as output_file:
                json.dump(dictionary, output_file)

    def reload(self):
        from models.base_model import BaseModel
        from models.user import User
        from models.state import State
        from models.review import Review
        from models.amenity import Amenity
        from models.city import City
        from models.place import Place

        dct = {'BaseModel': BaseModel, 'User': User, 'State': State, \
            'Review': Review, 'Amenity': Amenity, 'City': City, 'Place': Place }
        if os.path.exists(Filestorage.__file_path):
            with open(Filestorage.__file_path, 'r') as input_file:
                for key, value in json.load(input_file).items():
                    self.new(dct[value['__class__']](**value))
 
