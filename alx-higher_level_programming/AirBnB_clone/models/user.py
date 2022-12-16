#!/usr/bin/python3

"""The User Module."""

from models.base_model import BaseModel

class User(BaseModel):
    """ The User class.
    
    The user class is responsible for handling all user details entry
    """
    
    email = ""
    password = ""
    first_name = ""
    last_name = ""
