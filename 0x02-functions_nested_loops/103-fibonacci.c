#include <stdio.h>
/**
* main - finds the sum of even valued terms
* Return:0;
*/
int main(void)
{
int i;
unsigned long int j;
unsigned long int k;
unsigned long int next;
unsigned long int sum;

j = 1;
k = 2;
sum = 0;

for (i = 1; i <= 33; ++i)
{
if (j < 4000000 && (j % 2) == 0)
{
sum = sum + j;
}
next = j + k;
j = k;
k = next;
}
printf("%lu\n", sum);
return (0);
}