/*
WAP which accept number from user and display its table

ip: 2
op: 2   4   6   8   10  12  14  16  18  20

ip: 5
op: 5   10  15  20  25  30  35  40  45  50  

ip: -5
op: 5   10  15  20  25  30  35  40  45  50

*/

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0, table = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        table = iNo * iCnt;
        printf("%d \t",table);
    }
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}