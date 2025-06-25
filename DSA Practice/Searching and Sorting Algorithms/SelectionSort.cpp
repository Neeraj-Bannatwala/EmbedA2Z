#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

void selection_sort(int*, int);

int main()
{
    int arr[] = {2 ,13, 4, 1, 3, 6, 28};
    selection_sort(arr,7);
    return 0;
}

void selection_sort(int arr[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for(int j = i + 1; j < size ; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }           
        }
        swap(arr[minIndex],arr[i]);
    }


    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}