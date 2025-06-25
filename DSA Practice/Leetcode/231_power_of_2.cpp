#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n<=0)
    {
        return false;
    }
    int count = 0;
    while(n !=0)
    {
        if(n&1)
        {
            count++;
        }
        if(count>1)
        {
            return false;
        }
        n = n>>1;
    }
    if(count)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
    return 0;
}