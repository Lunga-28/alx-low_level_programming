#!/usr/bin/python3

"""perimeter function """

def island_perimeter(grid):
    """Return the perimiter """
    wid = len(grid[0])
    heght = len(grid)
    edg = 0
    sz = 0

    
    for i in range(heght):
        for j in range(wid):
            if grid[i][j] == 1:
                sz += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edg += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edg += 1
    return sz * 4 - edg * 2
