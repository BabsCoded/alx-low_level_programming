#include "main.h"

/**
*_strlen - returns the length of a stirng
*@s: string
* Returns length of string
*/

int_strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
