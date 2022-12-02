#!/usr/bin/python3

"""This is the Base class for the Airbnb project.

It contains common elements:
attributes: id, created_at and updated_at
methods: save() and to_json()
"""

from datetime import datetime as dt
import uuid

class BaseModel:
    def __init__(self, *args, **kwargs):
        """Initializes all attributes."""
        format = "%Y-%m-%dT%H:%M:%S.%f"
        if not kwargs:
            self.id = str(uuid.uuid4())
            self.created_at = dt.now().isoformat()
            self.updated_at = self.save()

        for key, value in kwargs.items():
            if key == "__class__":
                continue
            if key == "created_at" or key == "updated_at":
                value = dt.strptime(value, format)

            setattr(self, key, value)

    def __str__(self):
        """return class name, id and attribute dictionary."""
        class_name = ""

        class_name += f"[{self.__class__.__name__}] ({self.id}) {self.__dict__}"
        return class_name

    def save(self):
        return dt.now().isoformat()

    def to_dict(self):
        """Dictionary conversion of instance attributes"""
        new_dict = {}
        format = "%Y-%m-%dT%H:%M:%S.%f"

        for key, value in self.__dict__.items():
            if key == "created_at" or key == "updated_at":
                new_dict[key] = dt.strptime(value, format)
            if not value:
                pass
            new_dict[key] = value

        new_dict["__class__"] = self.__class__.__name__
        return new_dict
	