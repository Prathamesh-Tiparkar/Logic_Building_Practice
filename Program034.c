/*
WAP to find odd factorial of given number

ip: 5
op: 15     (5*3*1)

ip: -5
op: 15     (5*3*1)

ip: 10
op: 945      (9*7*5*3*1)

*/

#include<stdio.h>

int OddFactorial(int iNo)
{
    int Fact = 1, iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            Fact = Fact * iCnt;
        }
    }

    return Fact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Factorial of number is %d", iRet);

    return 0;
}