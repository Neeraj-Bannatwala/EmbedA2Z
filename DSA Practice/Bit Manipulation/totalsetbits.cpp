#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int setbits(int );

int main()
{
    int a,b;
    cin>>a>>b;
    int total_count = setbits(a) + setbits(b);
    cout<<total_count;
    return 0;
}

int setbits(int n)
{
    int count = 0;
    while(n != 0)
    {
        if(n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}