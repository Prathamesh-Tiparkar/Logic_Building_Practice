/*
Write a program which accepts a range from the user and 
returns the addition of all even numbers in between that range. 
(Range should contain positive numbers only.

ip : 23  30
op:  108

ip:  -10  2
op:  Invalid Range
*/

#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iSum = 0;

    if(iStart < 0 || iEnd < 0 || iStart > iEnd)
    {
        printf("Invalid range");
        return 0;
    }

    for(int i = iStart; i <= iEnd; i++)
    {
        if(i % 2 == 0)
        {
            iSum = iSum + i;
        }
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point : ");
    scanf("%d", &iValue1);

    printf("Enter ending point : ");
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    if(iValue1 >= 0 && iValue2 >= 0 && iValue1 <= iValue2)
    {
        printf("Addition is %d", iRet);
    }

    return 0;
}