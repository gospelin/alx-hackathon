#!/usr/bin/python3

import json

def load_from_json_file(filename):
    with open(filename, 'r') as input_file:
        return json.loads(input_file.read())
