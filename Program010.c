/*

Q5. Accept one number from user and check whether the number is even or odd

*/


#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkEven(int iNo)
{
    if(iNo % 2 == 0)
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
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("ENter number: ");
    scanf("%d",&iValue);

    bRet = chkEven(iValue);

    if(bRet == TRUE)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }

    return 0;
}