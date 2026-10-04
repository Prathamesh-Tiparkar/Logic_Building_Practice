/*
Generic program which accepts N values and count frequency
of any specific value

ip: 10 20 30 10 30 40 10 40 10 
value to check frequency : 40
op : 6

*/

#include<iostream>
using namespace std;

template<class T>
int SearchFirst(T *arr, int iSize, T iNo)
{
    int iCount = 0;

    for(int i = 0; i < iSize; i++)
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
    int iRet = SearchFirst(arr,9,40);

    if(iRet == -1)
    {
        cout<<"Element not found"<<endl;
    }
    else
    {
        cout<<"First position is : "<<iRet<<endl;
    }

    return 0;
}