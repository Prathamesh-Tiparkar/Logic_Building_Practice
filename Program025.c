/*
WAP which accept number from user and print first 5 multiples of number

ip: 4
op: 4   8   12  16  20

*/

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0, iMult = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        iMult = iNo * iCnt;
        printf("%d\t",iMult);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}