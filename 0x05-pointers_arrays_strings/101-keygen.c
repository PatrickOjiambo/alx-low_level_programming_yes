/**
 *main - Code starts here
 *Return: void
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_PASSWORD_LENGTH 20

int main(void)
{
	const char valid_chars[] =
	"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
	const int num_valid_chars = sizeof(valid_chars) - 1;
	char password[MAX_PASSWORD_LENGTH + 1];

	srand(time(NULL));

	for (i = 0; i < MAX_PASSWORD_LENGTH; i++)
	{
		password[i] = valid_chars[rand() % num_valid_chars];
	}
	password[MAX_PASSWORD_LENGTH] = '\0';
	printf("Random password: %s\n", password);
	return (0);
}

