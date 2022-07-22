#include "main.h"
/**
* _puts - pronymts a strjng followed by anew line
* @str: pointer to string
* Return:0;
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

