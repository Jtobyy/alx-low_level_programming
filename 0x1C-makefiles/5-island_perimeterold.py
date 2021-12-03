#!/usr/bin/python3
"""
Implementation of function island_perimeter
"""

def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid
    """
    island = []
    width = len(grid[0])
    height = len(grid);
    for i in grid:
        edge = []
        for j in i:
            if j == 1:
                edge.append(1)
        if len(edge) != 0:
            island.append(edge)

    for ls in island:
        i = 0
        while i < height:
            try:
                if ls[i]:
                    print(ls[i], end="")
            except IndexError:
                break;
            i += 1;
        print()
