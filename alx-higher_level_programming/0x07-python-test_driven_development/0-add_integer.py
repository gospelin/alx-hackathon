#!/usr/bin/python3

"""This is the official documentation of the add_integer function.

The add_integer(a, b) returns the sum of two values which must be
integers or float.
"""


def add_integer(a, b=98):
    """Return the sum of two values.

    Args:
        a: (int, float) - must be integer or float
        b: (int, flaot) - must be integer or float

    Returns:
        The sum of two given numbers

    Raises:
        TypeError: if a or b aren't integer and/or float numbers
    """
    if not isinstance(a, int) and not isinstance(a, float):
        raise TypeError("a must be an integer")
    elif not isinstance(b, int) and not isinstance(b, float):
        raise TypeError("b must be an integer")
    else:
        sum = int(a) + int(b)

    return sum
