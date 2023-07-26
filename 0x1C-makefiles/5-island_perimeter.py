#!/usr/bin/python3
"""This module creates a function to compute the perimeter of the
island describe in grid"""


def island_perimeter(grid):
    """Compute and return the perimeter of an island
    Args:
         grid: list of list of integers with 0 and 1
    Return:
          The perimeter of the island
    """

    perim = 0

    if grid != []:
        rows = len(grid)
        cols = len(grid[0])

        for i in range(rows):
            for j in range(cols):
                if grid[i][j] == 1:
                    if (j - 1) == -1 or grid[i][j - 1] == 0:
                        perim += 1
                    if (i - 1) == -1 or grid[i - 1][j] == 0:
                        perim += 1
                    if (j + 1) == cols or grid[i][j + 1] == 0:
                        perim += 1
                    if (i + 1) == rows or grid[i + 1][j] == 0:
                        perim += 1

    return perim
