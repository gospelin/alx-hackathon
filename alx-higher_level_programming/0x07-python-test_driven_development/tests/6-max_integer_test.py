#!/usr/bin/python3
"""Unittest for max_integer([..])
"""
import unittest
max_integer = __import__('6-max_integer').max_integer


class TestMaxInteger(unittest.TestCase):
    def test_isEmpty(self):
    # checks if the list have no value, returns None if true
        self.assertIsNone(max_integer([]), "The list is empty")

    def test_pos_values(self):
    # checks for positive values
        self.assertEqual(max_integer([1, 2, 3, 4]), 4)
        self.assertEqual(max_integer([1, 3, 2, 4]), 4)
        self.assertEqual(max_integer([100, 1000, 6000, 989, 5234, 1]), 6000)
        self.assertEqual(max_integer([500.8, 220.5, 120, 98.9, 234, 1]), 500.8)
        self.assertEqual(max_integer([20, 5.7, 8.5, 7.3, 20.69]), 20.69)
        self.assertEqual(max_integer([10, 150, 600, 989.78, 524, 1]), 989.78)

    def test_neg_Values(self):
    # checks for negative values
        self.assertEqual(max_integer([-10, -8, -20, -2, -50]), -2)
        self.assertEqual(max_integer([10, -5, -1, 20, -200, 200]), 200)
        self.assertEqual(max_integer([-2.5, -6, -8.7, -3.5, -4.5]), -2.5)
        self.assertEqual(max_integer([-2.5, -6, -8.7, -3.5, -4.5, -1.5]), -1.5)

    def test_Non_numeric(self):
    # make sure value error is raised 
        self.assertRaises(ValueError, max_integer, [True])
        self.assertRaises(ValueError, max_integer, [1, 2, "True", False])
        self.assertRaises(ValueError, max_integer, [2, None, '', 2.5, 8.9, 9])
