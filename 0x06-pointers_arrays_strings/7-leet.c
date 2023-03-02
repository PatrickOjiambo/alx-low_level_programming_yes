/**
 *leet - Leetcode
 *@str: string to be checked
 *Return: string
 */
#include <ctype.h>
#include <string.h>
char *leet(char *str)
{
	char *p = str;
	char *leet_chars = "AaEeOoTtLl";
	char *leet_codes = "4433007711";
	int i;

	while (*p != '\0')
	{
		for (i = 0; i < strlen(leet_chars); i++)
		{
			if (*p == leet_chars[i])
			{
				*p = leet_codes[i];
				break;
			}
		}
		p++;
	}
	return (str);
}
