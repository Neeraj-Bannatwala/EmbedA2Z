#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int i =1;
    int n;
    cin>>n;

    while(i<=n)
    {
        int k=1;
        while(k<=n-i)
        {
            cout<<" ";
            k++;
        }

        int j=1;
        while(j<=i)
        {
            cout<<j;
            j++;
        }

        int l=1;
        while(l<=i-1)
        {
            cout<<(i-1) - (l-1);
            l++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}