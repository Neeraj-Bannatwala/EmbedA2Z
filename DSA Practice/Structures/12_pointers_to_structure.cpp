#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct rectangle r;
    struct rectangle *p;//structure pointer
    p = &r;
    p->length = 10; //Dereferencing structure pointer 
    p->breadth = 5;
    cout<<"Length is ="<<p->length<<endl<<"Breadth is ="<<p->breadth<<endl;

    struct rectangle *p1;
    p1 = (struct rectangle*)malloc(sizeof(struct rectangle));//Dynamic Memory allocation 
    p1->breadth = 23; 
    p1->length = 32; 
    printf("length is %d\nbreadth is %d\n",p1->length,p1->breadth);
    return 0;
}