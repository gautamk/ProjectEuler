#!/usr/bin/python
"""
Starting in the top left corner of a 2x2 grid, there are 6 routes (without backtracking) to the bottom right corner.
How many routes are there through a 20x20 grid?
"""

def discrete_math(grid_size):
	import math
	return math.factorial(grid_size*2)/(math.factorial(grid_size)**2)



if __name__ == "__main__":
	print discrete_math(20)
    
