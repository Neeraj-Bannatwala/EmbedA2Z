#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int *func1(int n) // to return an array or pointer
{
    int *p = (int*) malloc(n*sizeof(int)); //created in heap
    return p;
}

void func2(int *arr, int n) // array as parameter (alternatively int arr[]) voi as nothing to return
{
    for(int i=0;i<n;i++)
    {
        cout<<"element = "<<arr[i]<<endl;
    }
}

int main()
{
    int *A = func1(5);
    A[1] =2;A[0] =3;A[2] =10;A[3] =4;A[4] =0;
    func2(A,5);
    return 0;
}