#include "main.h"
/**
* _abs - function that prints absolute cvalue of an integer
* @c: integer ised for argument
* Return: Always 0
*/
int _abs(int c)
{
if (c > 0 || c == 0)
{
return (c);
}
else
{
return (c * -1);
}
}

