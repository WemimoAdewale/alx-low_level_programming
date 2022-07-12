#include "main.h"
/**
* swap_int - swaps the values
* @x: pointer 1
* @y: pointer 2
* Return:0
*/
void swap_int(int *x, int *y)
{
int t;

t = *x;
*x = *y;
*y = t;
}

