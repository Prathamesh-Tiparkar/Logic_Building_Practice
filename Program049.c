/*
WAP to which accept temperature in Fahreneit and convert it into celsius.
(1 Celsius = (Fahrenheit -32) * (5/9))

ip: 10
op: -12.2222    (10  -32) * (5/9)

ip: 34
op: 1.11111     (34  -32) * (5/9)

*/

#include<stdio.h>

double FhtoCs(double dTemp)
{
    double Celsius = 0.0;

    Celsius = (dTemp - 32) * (5.0/9.0);

    return Celsius;
}

int main()
{
    double dValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temprature in Fahrenheit: \n");
    scanf("%lf",&dValue);

    dRet = FhtoCs(dValue);

    printf("Celsius is: %lf", dRet);

    return 0;
}