#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @r: The integer to compute.
 *
 * Return: The absolute value of @r.
 */
int _abs(int r)
{
    if (r < 0)
        return (-r);
    return (r);
}