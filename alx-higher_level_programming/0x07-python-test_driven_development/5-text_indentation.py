#!/usr/bin/python3

def text_indentation(text):
    if type(text) != str:
        raise TypeError("text must be a string")

    split = ".?:"

    for splits in split:
        text = text.split(splits)
        text = f"{splits}\n\n".join(text)

    print(text, end='')
