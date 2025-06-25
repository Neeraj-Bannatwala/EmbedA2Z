#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    for(int i=0;i<5;i++)
    {
        cout<<"Hi"<<endl;
        if(i<4)
        {
            cout<<"less than 4"<<endl;
            continue; 
            cout<<"what"<<endl;
        }
        cout<<"execute"<<endl;
    }
    
    return 0;
}