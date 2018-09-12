#include <stdio.h>
#include <err.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: 1, the intended exit code
 */
int main(void)
{
	perror("fml");
	return (1);
}
