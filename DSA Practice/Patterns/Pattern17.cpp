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
        int j = 1;
        while(j<=i)
        {
            cout<<char('A' + (n-1) - (i-1) + (j-1));
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}