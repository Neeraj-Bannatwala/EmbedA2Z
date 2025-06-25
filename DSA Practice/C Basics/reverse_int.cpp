#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int ans = 0;
    while(x != 0)
    {
        int digit = x%10; //to extract digits
        if(ans > (pow(2,31) - 1)/10 || ans < pow(-2,31)/10 ) //if ans*10 > range of int
        {
            return 0;
        }
        ans = (ans * 10) + digit; //to reverse number 
        x = x/10; //truncate x
    }
    cout<<ans;
}