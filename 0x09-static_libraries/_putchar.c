#include <unistd>
/**
* _putchar - writes character c to stdout
* @c: character to print
* Return:0 on sucess
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
