#include <main.h>

/**
 * _abs - return absolute value of a number
 * @r: number to be computed
 * Return: absolute value of a number
*/
int _abs(int r)
{
	if (r <= 0)
		r = -r;
	return (r);
}
