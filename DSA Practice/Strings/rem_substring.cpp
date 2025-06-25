#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;

string rem_occ_sub(string);

int main()
{
    string s = "daabcbaabcbc";
    cout<<rem_occ_sub(s);
    return 0;
}

string rem_occ_sub(string s)
{
    for(int i = 0; i < s.length() ; i++)
    {
        if((s[i] == 'a') && (s[i+1] == 'b') && (s[i + 2] == 'c') && (s[i+1] != '\0') && (s[i + 2] != '\0'))
        {
            s.erase(i, 3);
            i = 0;
        }
    }
    return s;
}