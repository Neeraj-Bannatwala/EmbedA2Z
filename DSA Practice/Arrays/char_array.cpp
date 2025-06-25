#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    char name[20];

    cout<< "enter your name "<<endl;
    cin>>name;

    cout<< "Your name is ";
    cout << name << endl;

    name[2] = '\0';

    cout<< "Your name is ";
    cout << name << endl;//output is = Ne
    return 0;
}