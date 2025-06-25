#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

void bubble_sort(int* , int);

int main()
{
    int arr[] = {1,2,3,4,5,6};
    bubble_sort(arr,6);
    return 0;
}

void bubble_sort(int arr[] , int size)
{
    for(int i = 0; i < size; i++)
    {
        int flag = 0;//to check swaps
        for(int j = 0; j < size - i - 1; j++)//because we want j to decrease with each iteration of i anf j + 1 could be out of bounds
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j + 1]);
                flag = 1;
            }
        }
        if(flag == 0)//no swaps already sorted
        {
            break;
        }    
    }

    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}