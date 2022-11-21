#!/usr/bin/python3

"""This is the Base class for the Airbnb project.

It contains common elements:
attributes: id, created_at and updated_at
methods: save() and to_json()
"""

from datetime import datetime
import uuid

class BaseModel:
    def __init__(self):
        """Initializes all attributes."""
        self.id = str(uuid.uuid4())
        self.created_at = datetime.now()
        self.updated_at = self.save()

    def __str__(self):
        """return class name, id and attribute dictionary."""
        class_name = ""

        class_name += f"[{self.__class__.__name__}] ({self.id}) {self.__dict__}"
        return class_name

    def save(self):
        return self.created_at

    def to_dict(self):
        new_dict = {}
        format = "%Y-%m-%dT%H:%M:%S.%f"
        
        for key, value in self.__dict__.items():
            if key == "created_at" or key == "updated_at":
                new_dict[key] = value.isoformat('-')
            new_dict[key] = value

        new_dict["__class__"] = self.__class__.__name__
        return new_dict
	