#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int complement = ~n;
    int count = 0; // or mask = 0;
    //edge case
    if(n==0)
    {
        cout<< 1;
        return 1;
    }
    while(n!=0)
    {
        count++; // or mask<<1;
        n =n>>1;// bitwise right shift to truncate
    }
    int frame = pow(2,count) - 1;
    complement  = complement & frame; // complement = complement & mask 
    cout<<complement<<endl;
}