#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    return 0;
}

int findDuplicate1(vector<int> &arr) 
{
    int size = arr.size();
    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if((arr[i] ^ arr[j]) == 0)
            {
                return arr[i];
                break;
            }
        }
    }
    // Write your code here
	
}

int findDuplicate2(vector<int> &arr) 
{
    int size = arr.size();
    int a = 0;
    int sum = (size*(size + 1))/2;
    for(int i = 0; i < size; i++)
    {
        a = a + arr[i];
    }

    int diff = sum - a;
    return (size - diff);
    // Write your code here
	
}

int findDuplicate3(vector<int> &arr) 
{
    int size = arr.size();
    int a = arr[0];
    for(int i = 1; i < size; i++)
    {
        a = a ^ arr[i] ^ i;
        //a = a ^ (i + 1);
    }

    return a;
    // Write your code here
	
}