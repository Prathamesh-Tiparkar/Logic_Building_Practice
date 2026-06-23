/*
WAP which accept no from user and return difference between summation of all its factors and non factors

ip: 12
op: -34     (16 -50)

*/

#include<stdio.h>

int FacDiff(int iNo)
{
    int iCnt = 0;
    int iFactSum = 0;
    int iNonFactSum = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iFactSum = iFactSum + iCnt;
        }
        else
        {
            iNonFactSum = iNonFactSum + iCnt;
        }
    }
    return (iFactSum - iNonFactSum);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Eneter number: \n");
    scanf("%d",&iValue);

    iRet = FacDiff(iValue);

    printf("%d \n",iRet);

    return 0;
}