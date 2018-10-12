#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;

    concat = string_nconcat("", "", 0);
    printf("1%s\n", concat);
    free(concat);
    concat = string_nconcat("Holberton ", "School !!!", 17);
    printf("2%s\n", concat);
    free(concat);
    concat = string_nconcat(NULL, "School !!!", 3);
    printf("3%s\n", concat);
    free(concat);
    concat = string_nconcat(NULL, "School !!!", 15);
    printf("4%s\n", concat);
    free(concat);
    concat = string_nconcat("Holberton ", NULL, 6);
    printf("5%s\n", concat);
    free(concat);
    concat = string_nconcat("Holberton ", NULL, 15);
    printf("6%s\n", concat);
    free(concat);
    concat = string_nconcat("", NULL, 15);
    printf("7%s\n", concat);
    free(concat);
    concat = string_nconcat(NULL, NULL, 0);
    printf("8%s\n", concat);
    free(concat);
    return (0);
}
