#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int count = 0;
    for(int i = 1;n > 0;i++)
    {
        if((n&1) == 1)
        {
            count++;
        }
        n = (n>>1);
    }
    cout<<count;
}
