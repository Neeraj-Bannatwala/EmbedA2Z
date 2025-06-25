#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int i=1;
    int n;
    cin>>n;

    while(i<=n)
    {
        int k=1;
        while(k<=i-1)
        {
            cout<<" ";
            k++;
        }
        int j=1;
        while(j<=n-(i-1))
        {
            cout<<i +(j-1);
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}