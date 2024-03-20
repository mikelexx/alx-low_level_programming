#!usr/bin/python3
"""
THis module contains an interview question on travelling 2d matrices
"""


def travel(row, col, grid, vis, rows, cols):

    """
    THis functions asserts that the adjacent cells are not visited
    and not out of list then explores them
    Args:
        row: y position of cell on the grid
        col: x position of cell on the grid
    Returns: number of valid boundaries that can be obtained including and
    from that cell position
    """
    res = 0
    left = True
    right = True
    top = True
    bottom = True
    if grid[row][col] == 0 or vis[row][col]:
        return 0
    if col - 1 < 0 or grid[row][col - 1] == 0:
        res += 1
        left = False
    elif vis[row][col - 1]:
        left = False
    if col + 1 >= cols or grid[row][col + 1] == 0:
        res += 1
        right = False
    elif vis[row][col + 1]:
        right = False
    if row + 1 >= rows or grid[row + 1][col] == 0:
        res += 1
        bottom = False
    elif vis[row + 1][col]:
        bottom = False
    if row - 1 < 0 or grid[row - 1][col] == 0:
        res += 1
        top = False
    elif vis[row + 1][col]:
        top = False
    vis[row][col] = 1
    if top:
        res += travel(row - 1, col, grid, vis, rows, cols)
    if bottom:
        res += travel(row + 1, col, grid, vis, rows, cols)
    if left:
        res += travel(row, col - 1, grid, vis, rows, cols)
    if right:
        res += travel(row, col + 1, grid, vis, rows, cols)
    return res


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
    rows = len(grid)
    cols = len(grid[0])
    vis = [[0 for x in range(cols)] for j in range(rows)]

    for row in range(rows):
        for col in range(cols):
            cell = grid[row][col]
            if cell:
                return 0 + travel(row, col, grid, vis, rows, cols)
    return 0
