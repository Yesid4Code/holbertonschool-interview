#include "sandpiles.h"

/**
 * sandpiles_sum - function that sum two sandpiles.
 * @grid1: sandpile 1.
 * @grid2: sanpile 2.
 */
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	add_piles(grid1, grid2);
	while (stability_analyzer(grid1) == false)
	{
		printf("=\n");
		print_grid(grid1);
		stabilizer(grid1);
	}
}
/**
 * add_piles - function that sum two sandpiles.
 *
 * @grid1: sandpile 1.
 * @grid2: sandpile 2.
 */
void add_piles(int grid1[3][3], int grid2[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			grid1[i][j] = grid1[i][j] + grid2[i][j];
}

/**
 * stability_analyzer - function that check if a sandpile is stable.
 * @grid1: sandpile to check.
 *
 * Return: true if it is, false  if it is not.
 */
bool stability_analyzer(int grid1[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			if (grid1[i][j] > 3)
				return (false);
	return (true);
}

/**
 * stabilizer - function that stabilize a sandpile
 * @grid1: sandpile.
 */
void stabilizer(int grid1[3][3])
{
	int i, j;

	int sand_grid1[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (grid1[i][j] > 3)
			{
				grid1[i][j] -= 4;
				if (i >= 0 && i < 2)
					sand_grid1[i + 1][j] += 1;
				if (i > 0 && i <= 2)
					sand_grid1[i - 1][j] += 1;
				if (j >= 0 && j < 2)
					sand_grid1[i][j + 1] += 1;
				if (j > 0 && j <= 2)
					sand_grid1[i][j - 1] += 1;
			}
		}
	}
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			grid1[i][j] += sand_grid1[i][j];
}
/**
 * print_grid - funtion that print a 2D array
 * @grid: array to print
 */
static void print_grid(int grid[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j)
				printf(" ");
			printf("%d", grid[i][j]);
		}
		printf("\n");
	}
}
