/*
WAP to which accept distance in kilometre and convert it into meter.
(1 kilometre = 1000 Metre)

ip: 5
op: 5000

ip: 12
op: 12000

*/

#include<stdio.h>

int KMtoMetre(int iNo)
{
    int Metre = 0;

    Metre = iNo * 1000;

    return Metre;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Distance: \n");
    scanf("%d",&iValue);

    iRet = KMtoMetre(iValue);

    printf("Metre is: %d", iRet);

    return 0;
}