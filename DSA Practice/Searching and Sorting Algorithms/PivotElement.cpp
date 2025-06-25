#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int arr[] = {7,9,10,2,3};
    int start = 0;
    int end = 4;
    int mid;
    while(start < end)
    {
        mid = start + (end - start)/2;
        if((arr[mid] < arr[mid - 1] ) && (arr[mid] < arr[mid + 1]))
        {
            cout<<mid;
            break;
        }

        else if(arr[mid] > arr[start])
        {
            start = mid + 1;
        }

        else if(arr[mid] < arr[start])
        {
            end = mid;
        }
    }
    return 0;
}
