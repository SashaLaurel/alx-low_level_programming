#include "main.h"

int _sqrt_recursion(int n);
int squareroot(int n, int i);
/**
 * _sqrt_recursion - checks for perfect square without loop
 * @n: input
 * Return: Always 0 (Success)
 */

int_sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else
return (squareroot(n, (n + 1) / 2));
}
