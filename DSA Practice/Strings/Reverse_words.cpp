#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include <bits/stdc++.h> 
using namespace std;

void reverse(string);
int main()
{
    string s = "My Name is Neeraj";
    reverse(s);
    return 0;
}

void reverse(string s)
{
    int left = 0;
    for(int i = 0; s[i] != '\0';i++)
    {
        if(s[i] == ' ')
        {
            int right = i - 1;
            while(left<right)
            {
                swap(s[right--],s[left++]);
            }
            left = i + 1;
        }
 
        else if(s[i + 1] == '\0')
        {
            int right = i;
            while(left<right)
            {
                swap(s[right--],s[left++]);
            }
        }
    }
    cout<<s<<endl;
}