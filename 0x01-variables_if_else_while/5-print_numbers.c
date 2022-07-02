#include <stdlib.h>
#include <stdio.h>
/**
* main - prints all single digits numbers of base 10 starting from 0
*
* Return: Always 0 sucess
*/
int main(void)
{
char d = '0';

while (d <= '9')
{
putchar(d);
d++;
}
putchar('\n');
return (0);
};
