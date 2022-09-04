#!/usr/bin/python3

def square_matrix_simple(matrix=[]):
    new_matrix = matrix[:]
    for index, mat in enumerate(matrix):
        new_matrix[index] = list(map(lambda x: x*x, matrix[index]))
    return new_matrix
