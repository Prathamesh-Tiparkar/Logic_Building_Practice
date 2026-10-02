/*
Check whether 5th and 18th bits are ON or OFF
*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0

void ChkBit(UNIT iNo)
{
    UNIT iMask5 = 1 << 4;
    UNIT iMask18 = 1 << 17;

    if((iNo & iMask5) != 0)
    {
        printf("5th bit is ON\n");
    }
    else
    {
        printf("5th bit is OFF\n");
    }

    if((iNo & iMask18) != 0)
    {
        printf("18th bit is ON\n");
    }
    else
    {
        printf("18th bit is OFF\n");
    }
}

int main()
{
    UNIT iNo;

    printf("ENter number: ");
    scanf("%u",&iNo);

    ChkBit(iNo);

    return 0;
}