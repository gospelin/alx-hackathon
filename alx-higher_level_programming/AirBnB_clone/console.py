#!/usr/bin/python3
"""This is the console module."""

import cmd

class HBNBCommand(cmd.Cmd):
    def __init__(self):
        super().__init__()
        cmd.Cmd.prompt = "(hbnb) "

    def help_quit(self):
        print("Quit command to exit the program")
        
    def do_quit(self, arg):
        self.close()
        quit()

if __name__ == '__main__':
    HBNBCommand().cmdloop()