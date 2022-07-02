#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Prints alphabet in lower case
*
* Return: Always 0 sucess
*/
int main(void)
{
char d = 'a';

while (d <= 'z')
{
putchar(d);
d++;
}
putchar('\n');
return (0);
}
