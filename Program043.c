/*
Write a program which accepts a number from the user and
returns the count of digits between 3 and 7.

ip: 2395
op: 1

ip: 1018
op: 0

Time Complexity: 0(N)
*/

#include<stdio.h>

int CountRange(int iNo)
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

        if((iDigit > 3) && (iDigit < 7))
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

    iRet = CountRange(iValue);

    printf("Count of Odd digits is : %d\n",iRet);

    return 0;
}