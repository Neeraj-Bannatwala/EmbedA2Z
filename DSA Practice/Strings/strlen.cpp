#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int stringlen(char*);

int main()
{
    char name[20];
    
    cout<<"Name = ";
    cin>> name;

    cout<< "string length = "<< stringlen(name)<<endl;
    return 0;
}

int stringlen(char arr[])
{
    int count = 0;
    while(arr[count] != '\0')
    {
        count++;
    }
    return count;
}