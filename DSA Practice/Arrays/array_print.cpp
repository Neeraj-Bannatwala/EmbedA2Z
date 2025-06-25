#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

void scan_array(int* , int);
void print_array(int* ,int);

int main()
{
    int array[10];
    int size;
    cout<<"total number of elements in the array: "<<endl;
    cin>>size;
    scan_array(array,size);
    print_array(array,size);
    return 0;
}

void print_array(int arr[],int size)
{
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void scan_array(int arr[], int size)
{
    for(int i= 0; i < size; i++)
    {
        cout<<"enter element " << i + 1 <<endl;
        cin>>arr[i];
    }
}