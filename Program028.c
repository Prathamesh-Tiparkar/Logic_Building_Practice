/*
WAP to find factorial of given number

ip: 5
op: 120     (5*4*3*2*1)

ip: -5
op: 120     (5*4*3*2*1)

ip: 4
op: 24      (4*3*2*1)

*/

#include<stdio.h>

int Factorial(int iNo)
{
    int Fact = 1, iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        Fact = Fact * iCnt;
    }

    return Fact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d", iRet);

    return 0;
}