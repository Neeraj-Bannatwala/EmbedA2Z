#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int power(int, int);//prototype of the function

int main()
{
    int x,y;
    cin>>x>>y;
    cout<<power(x,y);//func call
    return 0;
}

int power(int a, int b)
{
    int ans = 1;
    for(int i = 0; i < b; i++)
    {
        ans = ans * a;//continuous multiplication
    }
    return ans;
}