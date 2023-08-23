#!/usr/bin/python3
"""Module to returns perimeter of an island described in grid"""


def island_perimeter(grid):
    """Function to return the perimeter of islanc"""
    width = len(grid[0])
    height = len(grid)
    edges = 0
    perimeter = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                perimeter += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return perimeter * 4 - edges * 2
