#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int binary = 0;
    int i = 0;
    if(n>=0)
    {
        while(n!=0)
        {
            int bit = n&1;
            binary = pow(10,i)*bit + binary;
            i++;
            n = n>>1; // n=n/2
        } 
    }
    else
    {
        n = -n;
        cout<< n << endl;
        int j =0;
        while(n!=0)
        {
            int bit = ~n&1;
            cout<<bit<<endl;
            binary = pow(10,j)*bit + binary;
            j++;
            n = n>>1; // n=n/2
        }
        //binary = binary +1; 
    }
    cout<<binary<<endl;
    return 0;
}