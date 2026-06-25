/*
WAP which accept area in square feet and convert it into square metre.
(1 square feet = 0.0929 square metre)

ip: 5
op: 0.464515

ip: 7
op: 0.650321

*/

#include<stdio.h>

double SquareMetre(int iNo)
{
    double Metre = 0;

    Metre = iNo * 0.0929;

    return Metre;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: \n");
    scanf("%d",&iValue);

    dRet = SquareMetre(iValue);

    printf("Metre is: %lf", dRet);

    return 0;
}