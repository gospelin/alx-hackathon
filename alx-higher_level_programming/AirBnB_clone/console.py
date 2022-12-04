#!/usr/bin/python3
"""This is the console module."""

import cmd

class HBNBCommand(cmd.Cmd):
    def __init__(self):
        super().__init__()



if __name__ == '__main__':
    HBNBCommand().cmdloop()