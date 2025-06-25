#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

void array_reverse1(int*, int);
void array_reverse2(int*, int);

int main()
{
    int array[9] = {1,2,3,4,5,6,7,8,9};

    array_reverse1(array,9);
    //array_reverse2(array,9); //same array updateion hence will return the original array
    return 0;
}

void array_reverse1(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while(end>start)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        end--;
        start++;
    }

    for(int j = 0;j < size;j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;
}

void array_reverse2(int arr[], int size)
{
    int arr_rev[size];
    for(int i = 0; i < size ; i++)
    {
        arr_rev[(size-1) - i] = arr [i];
    } 
    for(int j = 0;j < size;j++)
    {
        cout<<arr_rev[j]<<" ";
    }
    cout<<endl;
}