#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int answer = 0;
    int i = 0;
    while(n!=0)
    {
        int r=n%2;
        answer =  pow(10,i) * r + answer;
        //cout<<answer<<endl;
        n=n/2; 
        i++;
    }
    cout<<answer<<endl;

    return 0;
}