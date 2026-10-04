#include<iostream>
using namespace std;

template<class T>
T LargeNumber(T no1,T no2, T no3)
{
    if(no1 > no2 && no1 > no3)
    {
        return no1;
    }
    else if(no2 > no1 && no2 > no3)
    {
        return no2;
    }
    else
    {
        return no3;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter first Number: \n");
    scanf("%d",&iValue1);
    printf("Enter Second Number: \n");
    scanf("%d",&iValue2);
    printf("Enter Third Number: \n");
    scanf("%d",&iValue3);

    int iRet = LargeNumber(iValue1, iValue2, iValue3);
    printf("%d\n",iRet);
    
    return 0;
}