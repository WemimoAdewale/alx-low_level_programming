#include <stdio.h>
/**
* main - prints first 50 Fibonacci numbers
* Return: Always 0
*/
int main(void)
{
long int i;
long int j;
long int k;
long int next;

j = 1;

k = 2;

for (i = 1; i <= 50; ++i)
{
if (j != 20365011074)
{
printf("%ld, ", j);
}
else
{
printf("%ld\n", j);
}
next = j + k;
j = k;
k = next;
}
return (0);
}
