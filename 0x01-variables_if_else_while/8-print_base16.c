#include <stdio.h>
/**
 * main - entry point
 *
 * Return: program execution
 */
int main(void)
{
char hexDigit;
for (hexDigit = '0'; hexDigit <= '9'; hexDigit++)
{
putchar(hexDigit);
}
for (hexDigit = 'a'; hexDigit <= 'f'; hexDigit++)
{
putchar(hexDigit);
}
putchar('\n');
return 0;
}
