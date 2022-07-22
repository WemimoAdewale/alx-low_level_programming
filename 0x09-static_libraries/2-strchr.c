#include "main.h"
/**
* _strchr - lovates a character in a string
* @s:the string to be searched
* @c:the character to be lovated
* Return:if c is found a pointer to the first variable
*/
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
		{
			return (s + index);
		}
	}
	return ('\0');
}
