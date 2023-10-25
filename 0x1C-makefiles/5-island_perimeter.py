#!/usr/bin/python3
"""5-island_perimeter module"""


def island_perimeter(grid):
    """Perimeter of the island described in grid is returned. l is the length, w is the width and i is the perimeter"""
    i = 0
    l = len(grid) - 1
    w = len(grid[0]) - 1

    for k, g in enumerate(grid):
        for j, n in enumerate(g):
            if n == 1:
                if k == 0 or grid[k - 1][j] != 1:
                    i += 1
                if j == 0 or grid[k][j - 1] != 1:
                    i += 1
                if j == w or grid[k][j + 1] != 1:
                    i += 1
                if i == l or grid[k + 1][j] != 1:
                    i += 1
    return i
