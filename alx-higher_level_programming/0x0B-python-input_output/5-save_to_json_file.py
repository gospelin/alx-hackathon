#!/usr/bin/python3

import json

#def save_to_json_file(my_obj, filename):
#    with open(filename, 'w', encoding ="utf-8") as output_file:
#        output_file.write(json.dumps(my_obj))


def save_to_json_file(my_obj, filename):
    with open(filename, 'w', encoding="utf-8") as output_file:
        json.dump(my_obj, output_file)
