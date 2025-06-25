#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int sum = 0;
    for(int i= 1;i<=n;i++)
    {
        sum+=i;
    }
    cout<<"sum = "<<sum<<endl;
    return 0;
}