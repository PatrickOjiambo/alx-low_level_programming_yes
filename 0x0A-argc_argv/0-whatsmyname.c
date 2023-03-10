/**
 *main - Start of the program
 *@argc: Parameter 1
 *@argv: Parameter 2
 *Return: Integer
 */
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *appname;

    appname = strrchr(argv[0], '/'); /* '\\' on Windows */
    printf("%s\n", appname ? ++appname : argv[0]);
    return 0;
}
