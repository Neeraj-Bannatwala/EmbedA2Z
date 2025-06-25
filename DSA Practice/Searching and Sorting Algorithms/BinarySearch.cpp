#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int binary_search(int*, int, int);

int main()
{
    int arr[] = {21,324,12,-1,43,123,43,1,0};
    int key;
    cout<<"Enter Key to search: "<<endl;
    cin>>key;
    int index = binary_search(arr,9,key);
    cout<<index<<endl;

}

int binary_search(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    while(end>=start)
    {
        int mid = start + ((end - start)/2);// = start/2 + end/2  // to avoid index of int out of range issue
        if(arr[mid] == key)
        {
            return mid;
            break;
        }

        else if(arr[mid] > key)
        {
            end = mid - 1;
        } 

        else
        {
            start = mid + 1;
        }
    }
    return -1; //not present
}