#include "main.h"
#include <stdio.h>

/**
* _pow_recursion - calculates the value of x raised to the power of y
* @x: the base
* @y: the exponent
*
* Return: the result of x to the power of y, or -1 if y is negative
*/
int _pow_recursion(int x, int y)
{
if (y < 0) /* if exponent is negative, return error */
return (-1);

if (y == 0) /* anything to the power of 0 is 1 */
return (1);

if (y == 1) /* anything to the power of 1 is itself */
return (x);

return (x * _pow_recursion(x, y - 1)); /* recursion */
}
