#include "main.h"

int strlen_no_wilds(char *str);
void iterate_wild(char **wildstr);
char *postfix_match(char *str, char *postfix);
int wildcmp(char *s1, char *s2);
/**
* strlen_no_wilds - Returns the length of a string,
* @str: The string to be measured.
* Return:thelength
*/
int strlen_no_wilds(char *str)
{
	int len = 0, index = 0;

	if (*(str + index))
	{
		if (*str != '*')
			len++;

		index++;
		len += strlen_no_wilds(str + index);
	}
	return (len);
}
/**
* iterate_wild - Iterates through a string located at a wildcard
* @wildstr: The string to be iterated through.
*/
void iterate_wild(char **wildstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		iterate_wild(wildstr);
	}
}
/**
* postfix_match - Checks if a string str matches the postfix of
* @str: The string to be matched.
* @postfix: The postfix.
* Return: If str and postfix are identical - a pointer to the null byte
*/
char *postfix_match(char *str, char *postfix)
{
	int str_len = strlen_no_wilds(str) - 1;
	int postfix_len = strlen_no_wilds(postfix) - 1;

	if (*postfix == '*')
		iterate_wild(&postfix);

	if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(str, postfix));
	}
	return (postfix);
}
/**
* wildcmp - Compares two strings, considering wildcard characters.
* @s1: The first string to be compared.
* @s2: The second string to be compared
* Return: If the strings can be considered identical - 1.else 0
*/
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}
	if (*s2 == '\0')
		return (1);
	if (*s1 != *s2)
		return (0);
	return (wildcmp(++s1, ++s2));
}
