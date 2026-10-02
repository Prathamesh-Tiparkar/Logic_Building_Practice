/*
Check whether 7th, 15th, 21st and 28th bits are ON or OFF
*/
#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

void ChkBit(UINT iNo)
{
    UINT iMask;

    iMask = (1U << 6) | (1U << 14) | (1U << 20) | (1U << 27);

    if((iNo & iMask) == iMask)
    {
        printf("7th, 15th, 21st and 28th bits are ON\n");
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