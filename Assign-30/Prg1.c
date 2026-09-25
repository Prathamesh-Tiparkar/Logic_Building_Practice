/*
WAP which displays ASCII table.
Table contains symbol, Decimal, hexadecimal and 
octal representation of every member from 0 to 255.

*/

#include<stdio.h>

void DisplayASCII()
{
    int i = 0;

    for(i = 0; i <= 255; i++)
    {
        printf("%c\t %d\t %X\t %o\t", i,i,i,i);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}