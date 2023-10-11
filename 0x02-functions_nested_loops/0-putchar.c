#include <unistd.h>
/**
 * main - entry point
 *
 * Return: program execution
 */
int main(void)
{
char text[] = "_putchar\n";
write(1, text, sizeof(text) - 1);
return (0);
}

