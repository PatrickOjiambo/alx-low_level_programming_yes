/**
 * rot13 - Encodes a string using rot13
 * @s: String to encode
 *
 * Return: Pointer to encoded string
 */
char *rot13(char *s)
{
	char *p = s;
	int i;

	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char abc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	while (*p)
	{
		for (i = 0; abc[i]; i++)
		{
			if (*p == abc[i])
			{
				*p = rot13[i];
				break;
			}
		}
		p++;
	}

	return (s);
}

