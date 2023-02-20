#include <stdio.h>
/**
*main - Prints alphabets in reverse
*Return: 0 (Success)
*/
int main(void)
{
int n = 122;
while (n >= 0)
{
putchar(n);
n--;
}
putchar('\n');
return (0);
}
