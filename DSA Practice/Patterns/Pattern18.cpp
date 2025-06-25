#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int i = 1;
    int n;
    cin>>n;

    while(i<=n)
    {
        int j=1;
        int k=1;
        while(k<= n-i)
        {
            cout<<" ";
            k++;
        }
        while(j<=i)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}