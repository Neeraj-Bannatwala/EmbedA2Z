#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int factorial(int);
int nCr(int, int);

int main()
{
    int n,r;
    cin>>n>>r;

    int out = nCr(n,r);

    cout<<out<<endl;

    return 0;
}

int factorial(int a)
{
    int ans = 1;

    for(int i = 1; i <= a ;i++)
    {
        ans = ans * i;
    }

    return ans;
}

int nCr(int n, int r)
{
    int num = factorial(n);

    int denom = factorial(r) * factorial(n - r);

    return num/denom;
}