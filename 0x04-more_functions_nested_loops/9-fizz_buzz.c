#include "main.h"
/**
* main - entry point for code
*
* Return:void
*/
int main(void)
{
int i = 1;

while (i <= 100)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
els
{
printf("%i", i);
}
if (i != 100)
{
putchar(' ');
}
i++;
}
putchar('\n');
return (0);
}
