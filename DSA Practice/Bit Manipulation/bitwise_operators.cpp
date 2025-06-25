#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int a=5;
    int b=7;

    cout<<"a&b = "<< (a&b) <<endl;
    cout<<"a|b = "<< (a|b) <<endl;
    cout<<"~a = "<< ~a  <<endl;
    cout<<"a^b = "<< (a^b) <<endl;

    cout<< (17<<1)<<endl;
    cout<< (17<<2)<<endl;
    cout<< (17>>1)<<endl;
    cout<< (17>>2)<<endl;
    
    int i=7;
    cout<<(++i)<<endl; //8
    cout<<(i++)<<endl; //8
    cout<<(i--)<<endl; //9
    cout<<(--i)<<endl; //7

    return 0;
}