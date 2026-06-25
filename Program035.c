/*
WAP to which returns differences between Even Factorial
and odd factorial of given number

ip: 5
op: -7     (8 - 15)

ip: -5
op: -7     (8 - 15)

ip: 10
op: 2895      (3840 - 945)

*/

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int Fact = 0, iCnt = 0, Even = 1, Odd = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            Even = Even * iCnt;
        }
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            Odd = Odd * iCnt;
        }
    }

    return Fact = Even - Odd;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial of number is %d", iRet);

    return 0;
}