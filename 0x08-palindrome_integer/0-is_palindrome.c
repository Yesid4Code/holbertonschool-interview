#include "palindrome.h"

/**
 * is_palindrome - function that checks if a given number is a palindrome
 * @n: the integer to analyze.
 *
 * Return: 1 if @n is a palindrome, 0 otherwise
 */
int is_palindrome(unsigned long n)
{
	unsigned long int reverse, reminder;
	unsigned long int n_cp = n;

	reminder = reverse = 0;

	while (n_cp != 0)
	{
		reminder = n_cp % 10;
		reverse = reverse * 10 + reminder;
		n_cp = n_cp / 10;
	}
	if (reverse != n)
		return (0);
	return (1);
}
