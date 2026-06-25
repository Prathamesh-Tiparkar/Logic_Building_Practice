/*
Write a program which accepts a number from the user and
returns the count of even digits.

ip: 2395
op: 1

ip: -1018
op: 2

Time Complexity: 0(N)
*/

#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) == 0)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("Count of even digits is : %d\n",iRet);

    return 0;
}