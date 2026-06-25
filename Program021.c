/*
WAP which accepts number from user and print that number of $ & * on screen.

ip: 5
op: $   *   $   *   $   *   $   *   $   *

ip: 3
op: $   *   $   *   $   *

ip: -3
op: $   *   $   *   $   *

*/

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$ \t * \t");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number: \n");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}