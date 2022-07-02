#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - entry point
*
* Return: Always 0 - sucess
*/
int main(void)
{
char ch;

for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar(10);

return (0);
}
