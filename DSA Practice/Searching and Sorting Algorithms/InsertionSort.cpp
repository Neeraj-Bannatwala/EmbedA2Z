#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

void insertion_sort(int* , int);

int main()
{
    int arr[] = {1,2,3,4,5,6};
    insertion_sort(arr,6);
    return 0;
}

void insertionSort(int n, vector<int> &arr){
    // Write your code here.
    for(int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;//to change scope
        for(; j >= 0; j--)
        {
            if(arr[j] > temp)
            {
                //shift
                arr[j+1] = arr[j];
            }
            else
            {
                break; //because sorted
            }
        }
        arr[j + 1] = temp;//temp arr[i] insertion //scope issue
    }
}