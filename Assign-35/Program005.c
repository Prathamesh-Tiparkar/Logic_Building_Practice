/*
Check whether first and last bit are ON or OFF
*/
#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

void ChkBit(UINT iNo)
{
    UINT iMaskFirst = 1 << 0;
    UINT iMaskLast = 1U << 31;

    if((iNo & iMaskFirst) != 0)
    {
        printf("First bit is ON\n");
    }
    else
    {
        printf("First bit is OFF\n");
    }

    if((iNo & iMaskLast) != 0)
    {
        printf("Last bit is ON\n");
    }
    else
    {
        printf("Last bit is OFF\n");
    }
}

int main()
{
    UINT iNo;

    printf("Enter number: ");
    scanf("%u", &iNo);

    ChkBit(iNo);

    return 0;
}