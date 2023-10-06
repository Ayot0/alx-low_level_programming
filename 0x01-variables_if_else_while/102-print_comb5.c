#include <stdio.h>
/**
 * main - entry point
 *
 * Return: program execution
 */
int main(void)
{
int number1, number2;
for (number1 = 0; number1 <= 99; number1++)
{
for (number2 = number1; number2 <= 99; number2++)
{
printf("%02d %02d", number1, number2);
if (number1 < 99 || number2 < 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
