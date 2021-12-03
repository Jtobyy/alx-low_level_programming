#!/usr/bin/python3
"""
Implementation of function island_perimeter
"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid
    """
    s = -1
    for ls in grid:
        for i in ls:
            if i == 1:
                s = grid.index(ls)
                break
        if s >= 0:
            break
    end = -1
    for ls in grid[s:]:
        for i in ls:
            if i == 1:
                end = 0;
        if end == 0:
            end = -1
            continue
        else:
            end = grid[s:].index(ls)
    if end == -1:
        end = len(grid) - 1

    p = 0
    c = s + 1
    width = len(grid[0])
    while c <= end + 1:
        k = 0
        for j in grid[c-1]:
            if j == 0:
                k += 1
            elif j == 1:
                break
        i = k
        if c == 1:
            while i < width:
                if grid[c-1][i] == 1 and i == k:
                    p += 1
                if grid[c-1][i] == 1 and grid[c][i] == 0:
                    p += 1
                if grid[c-1][i] == 1 and i+1 == width:
                    p += 1
                elif grid[c-1][i] == 1 and grid[c-1][i+1] == 0:
                    p += 1
                p += 1
                i += 1

        elif c == len(grid):
            while i < width:
                if grid[c-1][i] == 1 and i == k:
                    p += 1
                if grid[c-1][i] == 1 and grid[c-2][i] == 0:
                    p += 1
                if grid[c-1][i] == 1 and i+1 == width:
                    p += 1
                elif grid[c-1][i] == 1 and grid[c-1][i+1] == 0:
                    p += 1
                p += 1
                i += 1

        else:
            while i < width:
                if grid[c-1][i] == 1 and i == k:
                    p += 1
                if grid[c-1][i] == 1 and grid[c-2][i] == 0:
                    p += 1
                if grid[c-1][i] == 1 and grid[c][i] == 0:
                    p += 1
                if grid[c-1][i] == 1 and i+1 == width:
                    p += 1
                elif grid[c-1][i] == 1 and grid[c-1][i+1] == 0:
                    p += 1
                i += 1
        c += 1
    return p
