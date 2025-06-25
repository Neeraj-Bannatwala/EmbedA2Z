#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int* altSwap(int*, int);
void printArray(int* , int);


int main()
{
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    int *swap_arr = altSwap(arr,9); //pointer to store address of arr
    printArray(swap_arr,9); //pass address of array
    return 0;
}

int* altSwap(int arr[],int size)
{
    int i = 0;
    while(i < size - 1)
    {
        swap(arr[i],arr[i+1]);
        i = i + 2;
    }
    return arr;
}

void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}