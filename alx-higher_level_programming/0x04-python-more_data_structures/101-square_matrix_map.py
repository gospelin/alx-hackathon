#!/usr/bin/python3
def square_matrix_map(matrix=[]):
    return list(map(lambda x: list(x), (map(lambda x: x*x, a) for a in matrix)))
