#ifndef SANDPILES_H
#define SANDPILES_H

#include <stdbool.h>
#include <stdio.h>

void sandpiles_sum(int grid1[3][3], int grid2[3][3]);
void add_piles(int grid1[3][3], int grid2[3][3]);
bool stability_analyzer(int grid1[3][3]);
void stabilizer(int grid[3][3]);
static void print_grid(int grid[3][3]);

#endif /* SANDPILES_H */
