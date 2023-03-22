#!/usr/bin/python3
""" Function to find an island's perimeter"""


def island_perimeter(grid):
    """Find perimeter, note pg <-> perimeter grid"""
    pg = [[0 for i in range(2 + len(grid[0]))] for j in range(2 + len(grid))]
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j]:
                pg[i+1][j] += 1  # above
                pg[i+1][j+2] += 1  # below
                pg[i][j+1] += 1  # left
                pg[i+2][j+1] += 1  # right
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j]:
                pg[i+1][j+1] = 0
    return sum(sum(pg, []))
