#include<stdio.h>
#include<iostream>

using namespace std;

struct Rectangle
{   
    int length; 
    int breadth;
};
struct Hello
{   
    int length; 
    int breadth;
    char c;
}a;//another way to initialize

int main()
{
    /* code */
    struct Rectangle r1 = {10,5};
    printf("%d\n",sizeof(r1)); //8 bytes
    cout << sizeof(a) << endl; //Due to structure padding it is 12 bytes but seem like it should be 9 bytes //C++
    return 0;
}
