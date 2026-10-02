/*
Check whether 15th bits is ON or OFF
*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UNIT iNo)
{
    UNIT iMask = 1 << 14;

    if((iNo & iMask) != 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    UNIT iNo;
    BOOL bRet = FALSE;

    printf("ENter number: ");
    scanf("%u",&iNo);

    bRet = ChkBit(iNo);

    if(bRet == TRUE)
    {
        printf("15th bit is ON\n");
    }
    else
    {
        printf("15th bit is OFF\n");
    }
    return 0;
}