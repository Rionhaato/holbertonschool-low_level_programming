#include <stdio.h>

int main(void)
{
int i, j;

i = 0;
while(i <= 8)
{
j = i + 1;
while (j <=9)
{
putchar('0' + i);
putchar('0' + j);
if (!(i == 8 && j == 9))
{
putchar(',');
putchar(' ');
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
