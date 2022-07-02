#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - prints alphabets in lowercase followed by a new line
*
* Return: Always 0 sucess
*/
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
