#include <stdio.h>

/**
* main - write a program that prints its name, follwing by a new line.
* @argc: This is the argument count
* @argv: This is the argument vector
* Return: return 0 for success
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc:
	return (0);
}
