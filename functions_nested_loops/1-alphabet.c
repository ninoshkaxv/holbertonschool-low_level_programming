#include "main.h"

/**
 * print_alphabet - Print the alphabet in lowercase
 */
void print_alphabet(void)
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
    {
        putchar(c);
    }

    putchar('\n');
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
    print_alphabet();
    return (0);
}

