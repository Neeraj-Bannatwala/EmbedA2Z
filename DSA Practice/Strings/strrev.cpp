#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

char* stringrev(char*);

int main()
{
    char name[20];
    cout<<"Name = ";
    cin>> name;

    cout<< "Reverse string = "<<stringrev(name)<<endl;
    return 0;
}

char* stringrev(char arr[])
{
    int right = strlen(arr) - 1;
    int left = 0;

    while(right>left)
    {
        //swap without third variable
        arr[left] = arr[left] + arr[right];
        arr[right] = arr[left] - arr[right];
        arr[left] = arr[left] - arr[right];

        right--;
        left++;
    }
    return arr;
}