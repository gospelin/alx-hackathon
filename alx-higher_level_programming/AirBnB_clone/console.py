#!/usr/bin/python3
"""This is the console module."""

import cmd
from sys import exit
from models.base_model import BaseModel

class HBNBCommand(cmd.Cmd):
    def __init__(self):
        super().__init__()
        cmd.Cmd.prompt = "(hbnb) "

    def do_quit(self, arg):
        """Quit command to exit the program"""
        exit(1)

    def do_EOF(self, args):
        """End of File"""
        return True

    def emptyline(self):
        print

    def do_create(self, args):
        if str(args) == "BaseModel":
            new_model = BaseModel()
            new_model.save()


if __name__ == '__main__':
    HBNBCommand().cmdloop()
