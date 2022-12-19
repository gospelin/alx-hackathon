#!/usr/bin/python3
"""This is the console module."""

import cmd
from sys import exit
from models.base_model import BaseModel
from models.user import User
from models.state import State
from models.review import Review
from models.amenity import Amenity
from models.city import City
from models.place import Place
from models import storage
import shlex

class HBNBCommand(cmd.Cmd):
    #def __init__(self):
    #    super().__init__()
    #    cmd.Cmd.prompt = "(hbnb) "

    prompt = "(hbnb) "
    
    classes_list = ['BaseModel', 'User', 'State', 'Review', 'Amenity', 'City', 'Place']

    def do_quit(self, _):
        """Quit command to exit the interpreter"""
        exit(1)

    def do_EOF(self, _):
        """ EOF command to exit the interpreter (Ctrl + D)"""
        return True

    def emptyline(self):
        """Do nothing when an empty line is inserted."""
        print

    def do_create(self, model):
        """ Creates a new model type.

        Syntax: create <class name>
        """

        model_classes = {'BaseModel': BaseModel, 'User': User, 'State': State, \
            'Review': Review, 'Amenity': Amenity, 'City': City, 'Place': Place}
        if not model:
            print("** class name missing **")
        elif str(model) not in HBNBCommand.classes_list:
            print("** class doesn't exist **")
        else:
            new_model = model_classes[model]()
            print(new_model.id)
            new_model.save()

    def do_show(self, line):
        """ Displays the string representation of the object based on id.

        Syntax: show <class name> <id>
        """

        args = line.split()

        if len(args) == 0:
            args = ['']
            print("** class name missing **")
        elif str(args[0]) not in HBNBCommand.classes_list:
            print("** class doesn't exist **")
        elif len(args) == 1:
            print("** instance id missing **")
        else:
            all_objs = storage.all()
            for key, value in all_objs.items():
                obj_name = value.__class__.__name__
                obj_id = value.id
                if obj_name == args[0] and obj_id == str(args[1]):
                    print(value)
                    return
            print("** no instance found **")

    def do_destroy(self, line):
        """ Deletes the given object via id.add()

        Syntax: destroy <class name> <id>
        """
        args = line.split()

        if len(args) == 0:
            args = ['']
            print("** class name missing **")
        elif str(args[0]) not in HBNBCommand.classes_list:
            print("** class doesn't exist **")
        elif len(args) == 1:
            print("** instance id missing **")
        else:
            all_objs = storage.all()
            for key, value in all_objs.items():
                obj_name = value.__class__.__name__
                obj_id = value.id
                if obj_name == args[0] and obj_id == str(args[1]):
                    del all_objs[key]
                    storage.save()
                    return
            print("** no instance found **")

    def do_all(self, line):
        """ Prints all string representation of all instances based or not on the class name.

        Syntax: all [<class_name>]
        """

        args = line.split()

        if len(args) == 0:
            args = ['']
        elif str(args[0]) not in HBNBCommand.classes_list:
            print("** class doesn't exist **")
            return

        all_objs = storage.all()
        list_instances = []
        for _, value in all_objs.items():
            if args[0] == "":
                list_instances += [value.__str__()]
            if args[0] == value.__class__.__name__:
                list_instances += [value.__str__()]
        print(list_instances)

    def do_update(self, line):
        """Updates an instance based on the class name and id by adding or updating attribute 
        (save the change into the JSON file).

        Syntax: update <class name> <id> <attribute name> <attribute value>
        """

        a = ""
        for argv in line.split(','):
            a =  a + argv

        args = shlex.split(a)

        if len(args) == 0:
            args = ['']
            print("** class name missing **")
        elif str(args[0]) not in HBNBCommand.classes_list:
            print("** class doesn't exist **")
        elif len(args) == 1:
            print("** instance id missing **")
        elif len(args) == 2:
            print("** attribute name missing **")
        elif len(args) == 3:
            print("** value missing **")
        else:
            all_objs = storage.all()
            for key, value in all_objs.items():
                obj_name = value.__class__.__name__
                obj_id = value.id
                if obj_name == args[0] and obj_id == str(args[1]):
                    setattr(value, args[2], args[3])
                    storage.save()
                    return

            print("** no instance found **")


if __name__ == '__main__':
    HBNBCommand().cmdloop()
