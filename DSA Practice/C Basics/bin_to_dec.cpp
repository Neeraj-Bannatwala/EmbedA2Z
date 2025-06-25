#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main()
{
    int n; //binary input
    cin>>n;

    int i = 0;
    int answer = 0;
    while(n!=0)
    {
        int digit = n%10;//remainder
        if(digit == 1)
        {
            answer = answer + pow(2,i);
        }
        i++;
        n = n/10;//to remove the digit
    }
    cout<<answer<<endl;
    return 0;
}