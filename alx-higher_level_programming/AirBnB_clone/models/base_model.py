#!/usr/bin/python3

"""This is the Base class for the Airbnb project.

It contains common elements:
attributes: id, created_at and updated_at
methods: save() and to_json()
"""

import uuid
from datetime import datetime

class BaseModels:
    def __init__(self):
        """Initializes all attributes."""
        self.id = str(uuid.uuid4())
        self.created_at = datetime.now()
        self.updated_at = self.created_at
    
    def __str__(self):
        """return class name, id and attribute dictionary."""
        class_name = ""

        class_name += f"{[ < class name > ] ( < self.id > ) < self.__dict__ >
        return self.name
	