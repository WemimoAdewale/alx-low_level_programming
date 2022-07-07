#include "main.h"
/**
* print_most_numbers - prints most numbers except 2 and 3
* Description:prints
* Return:0
*/
void print_most_numbers(void)
{
int a = 0;

while (a <= 9)
{
if (a != 2 && a != 4)
{
_putchar(a + '0');
}
a++;
}
_putchar('\n');
}
