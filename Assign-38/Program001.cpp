/*
Generic program which accepts one value and one number from user. 
Print that number of times on screen.

ip: M  7
op: M   M   M   M   M   M   M

ip: 3.7   6
op: 3.7   3.7   3.7   3.7   3.7   3.7 

*/
#include<iostream>
using namespace std;

template<class T>
void Display(T value, int iSize)
{
    int i = 0;
    for(i = 0; i < iSize; i++)
    {
        cout<<value<<endl;
    }
}

int main()
{
    Display('M',7);
    Display(11,3);
    Display(3.7,6);
    
    return 0;
}