#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int i = 1;
    int n;
    cout << "n = ";
    cin>> n;
    while(i<=n)
    {
        int j = 1;
        while(j<=n)
        {
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}