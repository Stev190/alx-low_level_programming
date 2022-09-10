#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, and then in uppercase,
 * You can only use the putchar
 * Return: 0
 */

int main(void)
{
int lw = 'a';
int up = 'A';
while (lw <= 'z')
{
putchar(lw);
lw += 1;
}
while (up <= 'Z')
{
putchar(up);
up += 1;
}
putchar('\n');
return (0);
}
xxxxxxxxxxxxxxxxxxx
4-print_alphabt.c
-----
#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 * You can only use the putchar
 * Return: 0
 */

int main(void)
{
int lw = 'a';
while (lw <= 'z')
{
if (lw == 'e' || lw == 'q')
{
lw += 1;
}
else
{
putchar(lw);
lw += 1;
}
}
putchar('\n');
return (0);
}
