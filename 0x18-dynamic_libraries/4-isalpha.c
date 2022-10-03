#include "main.h"
/**
* _isalpha -script to check if c is a letter;lowercase or uppercase
* @c: parameter for fuction
* Return:O
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
return (0);
}

