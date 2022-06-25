#include <stdio.h>
/**
 * main - prints its name, followed by a new line
 * @argc: number of command line arrguments
 * @argv: array that contains the prrogram command line arguments
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
