#include "main.h"

/**
*swap_int - swap two integer values
*@a: first number
*@b: second number
*Returns nothing
*/

void swap_int(int *a, int *b)
{
int temp = *a;

*a = *b;
*b = temp;
}
