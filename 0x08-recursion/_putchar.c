#include <unistd>
#include "main.h"
/**
* _putchar - writes the character c to stdout
* @c:the character to print
* Return:1on success, -1 on erro
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
