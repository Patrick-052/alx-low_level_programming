#!/usr/bin/python3
"""function to define a grid"""


def island_perimeter(grid):
    """grid is a list of lists containing integers"""
    num_rows = len(grid)
    num_cols = len(grid[0])
    perimeter = 0

    for row in range(num_rows):
        for col in range(num_cols):
            if grid[row][col] == 1:
                perimeter += 4
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2
    return perimeter
