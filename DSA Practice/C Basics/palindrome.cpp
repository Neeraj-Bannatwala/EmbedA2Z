#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

void checkPalindrome(char s[]);

int main()
{
    char name[20];
    cout<<"Name = ";
    cin>> name;

    checkPalindrome(name);
    return 0;
}

void checkPalindrome(char s[])
{
    // Write your code here.
    int right = strlen(s) - 1;
    int left = 0;
    bool out = 1;

    while(right>left)
    {
        if(s[left++] != s[right--])
        {
            out = 0;
        }
    }

    if(out == 0)
    {
        cout<<"NP"<<endl;
    }

    else{
        cout<<"P"<<endl;
    }
}