#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

void swap1(int a, int b) //call by value
{
    int temp =a;
    a=b;
    b=temp;
}

void swap2(int *a, int *b) // call by address
{
    int temp =*a;
    *a=*b;
    *b=temp;
}

void swap3(int &a, int &b) // call by reference only in C++
{
    int temp =a;
    a=b;
    b=temp;
}

int main()
{
    int x=10;
    int y=20;

    swap1(x,y);
    printf("x = %d,y = %d\n",x,y);

    swap2(&x,&y);
    printf("x = %d,y = %d\n",x,y);

    int s=10;
    int t=20;
    swap3(s,t);
    printf("s = %d,t = %d\n",x,y);
    return 0;
}