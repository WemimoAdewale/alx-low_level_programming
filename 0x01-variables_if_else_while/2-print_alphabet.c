#include <stdio.h>
/**
 * Main : Entry point
 * Description : script that prints in lowercase
 * Return : Success
 */
int main(void)
{
       char d = 'a';
       while (d <= 'z')
       { 
       putchar(d);
       d++;
       }
       putchar('\n')
       return (0);
}
