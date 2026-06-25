/*
WAP to which accept radius of circle from user and calculate its area.
Consider value of PI as 3.14 (Area = PI * Radius * Radius)

ip: 5.3
op: 88.2026

ip: 10.4
op: 339.6224

*/

#include<stdio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14;
    float Area = 0.0;

    Area = PI * fRadius * fRadius;

    return Area;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Radius: \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area is: %f", dRet);

    return 0;
}