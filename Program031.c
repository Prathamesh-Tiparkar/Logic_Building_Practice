/*
WAP which accept number from user and dispay below pattern

ip: 5
op: *   *   *   *   *   #   #   #   #   #

ip: 2
op: *   *   #   #

ip: -5
op: *   *   *   *   *   #   #   #   #   #

*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("* \t");
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("# \t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}