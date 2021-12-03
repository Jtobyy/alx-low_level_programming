#!/usr/bin/python3
"""
Implementation of function island_perimeter
"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid
    """
    island = []
    for i in grid:
        edge = []
        for j in i:
            if j == 1:
                edge.append(1)
        if len(edge) != 0:
            island.append(edge)
    c = 1
    p = 0
    while c <= len(island):
        i = 1
        if c == 1 or c == len(island):
            while i <= len(island[c-1]):
                if i == 1:
                    p += 1
                if (i > len(island[c-2])):
                    p += 1
                if i == len(island[c-1]):
                    p += 1
                p += 1
                i += 1
        else:
            while i <= len(island[c-1]):
                if i == 1:
                    p += 1
                if (i > len(island[c-2])):
                    p += 1
                if i == len(island[c-1]):
                    p += 1
                i += 1
        c += 1
    return p
