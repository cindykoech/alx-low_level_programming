#include <stdio.h>
/** 
*main - Entry point
*
*Return: 0
*/
int main(void)
{
char c;
for (c = 'a'; c <= '9'; c++)
	putchar(c);
for (c = 'a'; c <= 'f'; c++)
	putchar(c);
putchar('\n');
return (0);
}
