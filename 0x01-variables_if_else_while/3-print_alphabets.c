
#include <stdio.h>
/**
*main - Prints the alphabet lower case and upper case
*Return: 0 (Success)
*/
int main(void)
{
int n = 98;
int m = 65;
while (n <= 122)
{
putchar(n);
n++;
}
while (m <= 90)
{
putchar(m);
m++;
}
putchar('\n');
return (0);
}
