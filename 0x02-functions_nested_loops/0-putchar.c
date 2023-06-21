#include <stdio.h>
#include "main.h"

/**
 * print_putchar - Prints _putchar followed by a new line using nested while loops.
 */
void print_putchar(void)
{
    int outer_counter = 0;

    while (outer_counter < 5)
    {
        int inner_counter = 0;

        while (inner_counter < 5)
        {
            putchar('_');
            inner_counter++;
        }

        putchar('\n');
        outer_counter++;
    }
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_putchar();
    return 0;
}
