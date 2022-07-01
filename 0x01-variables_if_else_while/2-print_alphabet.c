#include <stdio.h>
/**
 * Main : Entry point
 * Description : script that prints in lowercase
 * Return : Success
 */
int main(void)
{
	int ch;

	printf("Print in lower case\n ");
	for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
	putchar('\n');
}
return (0);
}
