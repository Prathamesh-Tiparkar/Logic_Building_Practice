/*
WAP to find even factorial of given number

ip: 5
op: 8     (4*2)

ip: -5
op: 8     (4*2)

ip: 10
op: 3840      (10*8*6*4*2)

*/

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int Fact = 1, iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
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

    iRet = EvenFactorial(iValue);

    printf("Factorial of number is %d", iRet);

    return 0;
}