#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int a =10;
    int &r = a; //reference
    r = 25;// r is nothing but a, it consumes no additonal memory
    cout<<r<<endl<<a<<endl;
    return 0;
}