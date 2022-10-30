#include "main.h"

/**
 * _abs - return absolute value of a number
 * @r: number to be computed
 * Return: absolute value of a number
*/
int _abs(int r)

{
	if (r > 0)
		return (r);
	else if (r < 0)
		return (-r);

	return (0);
}
