#include <stdlib>
#include <stdio.h>
/**
 *  Main : prints all digits of base 10 from 0
 *
 *  Return 0
 **/
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
}

