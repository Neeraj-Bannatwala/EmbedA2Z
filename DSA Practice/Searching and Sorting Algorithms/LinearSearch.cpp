#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

void linearSearch(int*, int, int);

int main()
{
    int arr[] = {1,2,3,4,5};
    // int size;
    // cout<<"Enter Size of array "<<endl;
    // cin>>size;

    int num;
    cout<<"Enter Number to search "<<endl;
    cin>>num;

    linearSearch(arr,5,num);
    return 0;
}

void linearSearch(int arr[], int size, int num)
{
    int count = 0;
    for(int i = 0;i < size; i++)
    {
        if( num == arr[i])
        {
            count++;
            break;
        }
    }

    if(count)
    {
        cout<<"Found"<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }
}