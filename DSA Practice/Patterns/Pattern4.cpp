#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int n;
    cout<<"n = ";
    cin >> n;
    int i=1;
    while(i<=n)
    {
        int j = 0;
        while(j<n)
        {
            cout<< n - j;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}