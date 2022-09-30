#!/usr/bin/python3

"""This is the official documentation of the 2-matrix_divided module.

It contains a single function that
"""


def matrix_divided(matrix, div):
    quotient = [row[:] for row in matrix]
    length = len(matrix[0])

    if not isinstance(matrix, list):
        raise TypeError("matrix must be a matrix (list of lists) of integers/floats")

    if type(div) not in (int, float):
        raise TypeError("div must be a number")
    if div == 0:
        raise ZeroDivisionError("division by zero")

    for i in range(len(matrix)):
        print(matrix[i])
        if not isinstance(matrix[i], list):
            raise TypeError("matrix must be a matrix (list of lists) of integers/floats")

        if length == 0 or len(matrix[i]) != length:
            raise TypeError("Each row of the matrix must have the same size")

        for j in range(len(matrix[i])):
            if type(matrix[i][j]) not in (int, float):
                raise TypeError("matrix must be a matrix (list of lists) of integers/floats")

            quotient[i][j] = round((matrix[i][j] / div), 2)

    return quotient
