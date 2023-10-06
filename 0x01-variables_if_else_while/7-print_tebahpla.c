#include <stdio.h>
/**
 * main - entry point
 *
 * Return: program execution
 */
int main(void)
{
char letter = 'z';
while (letter >= 'a')
{
putchar(letter);
letter--;
}
putchar('\n');
return (0);
}
