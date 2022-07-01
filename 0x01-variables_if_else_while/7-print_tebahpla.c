#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Main : prints lowerxase in reverse order
 *
 * return : always
 **/
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
