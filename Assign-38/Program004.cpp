/*
Generic program which accepts N values and count frequency
of any specific value

ip: 10 20 30 10 30 40 10 40 10 
value to check frequency : 40
op : 8

*/

#include<iostream>
using namespace std;

template<class T>
int SearchLast(T *arr, int iSize, T iNo)
{
    int iCount = 0;

    for(int i = iSize - 1; i >= 0; i--)
    {
        if(arr[i] == iNo)
        {
            return i + 1;
        }
    }
    return -1;
}

int main() 
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    int iRet = SearchLast(arr,9,40);

    cout<<"Last position is : "<<iRet<<endl;

    return 0;
}