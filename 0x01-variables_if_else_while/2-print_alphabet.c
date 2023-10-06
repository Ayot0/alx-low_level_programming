#include <stdio.h>
/**
 * main - entry point
 *
 * Return: program execution
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}

