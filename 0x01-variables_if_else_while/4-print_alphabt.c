#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * Main : prints alphabet in liwer case followed by new line
 *
 * Return - Success
 **/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
putchar(ch);
}

putchar(10);

return (0);
}
