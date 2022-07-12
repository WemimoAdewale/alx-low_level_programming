#include "main.h"
/**
* print_array - prints elements of an array of integera
* @a:int type array pointer
* @n: integer
* Description: numbers must be seperated by a comma and space
* Return:void;
*/
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
		printf(", ");
		}
	}
	printf("\n");
}

