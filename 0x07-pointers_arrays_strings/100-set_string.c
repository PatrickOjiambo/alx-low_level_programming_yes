/**
 * set_string - sets the value of a pointer to a char.
 *
 * @s: a double pointer to a character representing the pointer to be set
 * @to: a pointer to a character representing the value to set the pointer to
 *
 * Return: void
 */
#include "main.h"
void set_string(char **s, char *to)
{
	*s = to;
}

