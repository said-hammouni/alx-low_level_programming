#include "main.h"

/**
 * _sqrt_helper - checks for the natural square root
 *
 * @n: number to check for square root
 * @sqrt: square root to check against n
 *
 * Return: natural square root or -1
 */
int _sqrt_helper(int n, int sqrt)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (sqrt * sqrt == n)
		return (sqrt);
	if (sqrt * sqrt > n)
		return (-1);
	return (_sqrt_helper(n, sqrt + 1));
}

/**
 * _sqrt_recursion - returns natural square root of a number
 *
 * @n: number to get square root of
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 1));
}
