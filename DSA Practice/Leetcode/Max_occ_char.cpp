#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

void get_max_occurrence(string);

int main()
{
    string s;
    cin>> s;
    get_max_occurrence(s);
    return 0;
} 

void get_max_occurrence(string s)
{
    int arr[26] = {0}; //26 alphabets

    for(int i = 0; i < s.length(); i++)
    {
        int index = 0;

        //lowercase
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            index = s[i] - 'a'; //to get index of alphabet
        }

        //uppercase 
        else
        {
            index = s[i] - 'A';//
        }
        arr[index]++;
    }
    //to find max occurrence 
    int max = -1, maxi = 0; 
    for(int i = 0; i < 26; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            maxi = i;
        }
    }
    cout << char(maxi + 'a')/*convert int to char*/ << " occured " << max << " times";
}
