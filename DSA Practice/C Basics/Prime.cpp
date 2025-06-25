#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int n;
    cout<<"Number to check = ";
    cin>>n;

    int count =0;
    if(n==2 || n==1)
    {
        printf("prime");
        return 1;
    }
    else
    {
        for(int i=2;i<=(n/2)+1;i++)
        {
            if(n%i == 0)
            {
                count++;
                break;
            }
        }
    }
    if(count==0)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }
    return 0;
}