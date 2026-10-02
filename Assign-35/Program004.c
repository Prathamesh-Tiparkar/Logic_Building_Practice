/*
Check whether 7th, 8th and 9th bits are ON/OFF
*/

#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

void ChkBit(UINT iNo)
{
    UINT iMask;

    iMask = (1U << 6) | (1U << 7) | (1U << 8);

    if((iNo & iMask) == iMask)
    {
        printf("7th, 8th and 9th bits are ON\n");
    }
    else
    {
        printf("All bits are not ON\n");
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