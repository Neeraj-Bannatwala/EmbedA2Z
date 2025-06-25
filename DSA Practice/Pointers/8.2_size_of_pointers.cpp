#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    int *p1;
    float *p2;
    double *p3;
    char *p4;
    struct Rectangle *p5;//structure pointer

    cout<<sizeof(p1)<<endl; //expected 4 is 8
    cout<<sizeof(p2)<<endl; //expected 2 is 8
    cout<<sizeof(p3)<<endl; //expected 4 is 8
    cout<<sizeof(p4)<<endl; //expected 1 is 8
    cout<<sizeof(p5)<<endl; //expected 8 is 8

    return 0;
}