/**
 *_strcpy - copies src to dest
 *@dest: parameter
 *@src: Parameter
 *Return:the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}

