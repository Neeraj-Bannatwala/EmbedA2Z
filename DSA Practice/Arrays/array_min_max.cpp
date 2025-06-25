#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

void scan_array(int* ,int );
int get_min(int* ,int );
int get_max(int* ,int );
void print_array(int* ,int);

int main()
{
    int array[10];
    int size;
    cout<<"number of elemnts in the array"<<endl;
    cin>>size;
    scan_array(array,size);
    print_array(array,size);
    cout<<"Max element in the array = "<<get_max(array,size)<<endl;
    cout<<"Min element in the array = "<<get_min(array,size)<<endl;
    return 0;
}

void scan_array(int arr[],int size)
{
    for(int i = 0;i < size; i++)
    {
        cout<<"enter element "<<i+1<<endl;
        cin>>arr[i];
    }
}

void print_array(int arr[],int size)
{
    cout<<"Array = "<<endl;
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int get_max(int arr[],int size)
{
    int arr_max = INT_MIN;
    for(int i = 0; i<size;i++)
    {
        if(arr[i]>arr_max)
        {
            arr_max = arr[i];
        }
    }
    return arr_max;
}

int get_min(int arr[],int size)
{
    int arr_min = INT_MAX;
    for(int i = 0; i<size;i++)
    {
        if(arr[i]<arr_min)
        {
            arr_min = arr[i];
        }
    }
    return arr_min;
}