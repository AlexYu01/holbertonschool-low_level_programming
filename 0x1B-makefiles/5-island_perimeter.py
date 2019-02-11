#!/usr/bin/python3
"""
    Module containing the `island_perimiter` function.
"""


def island_perimeter(grid):
    """
        Calculate the perimeter of the island in `grid`.

        Args:
            grid (:obj:`list` of :obj:`list` of int): A matrix list of lists
                containing 0's and 1's to denote water and land.

        Returns:
            The perimeter of an island.
    """
    if not isinstance(grid, list):
        return 0
    r = len(grid)
    if r is 0:
        return 0
    if not isinstance(grid[0], list):
        return 0
    c = len(grid[0])
    if c is 0:
        return 0

    p = 0
    for i in range(r):
        for j in range(c):
            if grid[i][j] is 1:
                if 0 < j < c - 1:
                    if grid[i][j - 1] is 0:
                        p += 1
                    if grid[i][j + 1] is 0:
                        p += 1
                if 0 < i < r - 1:
                    if grid[i - 1][j] is 0:
                        p += 1
                    if grid[i + 1][j] is 0:
                        p += 1
    return p
