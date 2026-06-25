/*
WAP which accept number from user and display its table

ip: 2
op: 20  18  16  14  12  10  8   6   4   2

ip: 5
op: 50  45  40  35  30  25  20  15  10  5 

ip: -5
op: 50  45  40  35  30  25  20  15  10  5 

*/

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0, table = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
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

    TableRev(iValue);

    return 0;
}