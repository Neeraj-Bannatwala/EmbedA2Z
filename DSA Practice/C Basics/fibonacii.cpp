#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements of fibonacci series = ";
    cin>>n;

    int a=0;
    int b=1;
    cout <<a<<" "<<b<<" ";
    for( int sum =0,i=1;i<=n-2;i++)
    {
        sum =a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }
    return 0;
}