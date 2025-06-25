#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int *p;//pointer variable
    p = (int*) malloc(5*sizeof(int));//dynamic memory allocation(for C++-> p = new int[5])
    //p stores the base address of array in the heap
    p[0] = 3;p[1] = 2;p[2] = 1;p[3] = 9;p[4] = 10; //assigning values //p[i] == *(p+i)
    for(int i = 0;i < 5;i++)
    {
        cout << p[i]<<endl;
    }
    delete [] p; //for C++
    free(p); //for C
    return 0;
}