/*
Generic program to accepts N values and reverse the contents

ip: 10 20 30 10 30 40 10 40 10 
op: 10 40 10 40 30 10 30 20 10

*/

#include<iostream>
using namespace std;

template<class T>

void Reverse(T *arr, int iSize)
{
    int iStart = 0;
    int iEnd = 0;
    T temp;

    iEnd = iSize -1;
    while(iStart < iEnd)
    {
        temp = arr[iStart];
        arr[iStart] = arr[iEnd];
        arr[iEnd] = temp;

        iStart++;
        iEnd--;
    }
}

int main() 
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    cout<<"Before reverse : \n";
    for(int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<"\t";       // 10 20 30 10 30 40 10 40 10
    }
    Reverse(arr,9);

    cout<<"\n\n After Reverse : \n";
    for(int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<"\t";       // 10 40 10 40 30 10 30 20 10 
    }
    return 0;
}