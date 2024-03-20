#!/usr/bin/python3
"""
THis module contains an interview question on travelling 2d matrices
"""


def island_perimeter(grid):
    """
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height don’t exceed 100
    Grid is completely surrounded by water, and there is one island \
            (or nothing).
    The island doesn’t have “lakes” (water inside that isn’t \
            connected to the water around the island).
        Args:
            grid: grid is a list of list of integers:
    Returns: returns the perimeter of the island described in grid:
    """
    if not grid or grid == [[]]:
        return 0
    res = 0
    rows = len(grid)
    cols = len(grid[0])
    for r in range(rows):
        for c in range(cols):
            cell = grid[r][c]
            if cell:
                if (c - 1 >= 0 and grid[r][c - 1] == 0) or c - 1 < 0:
                    res += 1
                if (c + 1 <= cols and grid[r][c + 1] == 0) or c + 1 > cols:
                    res += 1
                if (r - 1 >= 0 and grid[r - 1][c] == 0) or r - 1 < 0:
                    res += 1
                if (r + 1 <= rows and grid[r + 1][c] == 0) or r + 1 > rows:
                    res += 1
    return res
