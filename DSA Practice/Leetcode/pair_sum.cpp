#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    return 0;
}

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   vector<vector<int>> ans;
   int i = 0;
   int j = i + 1;
   int size = arr.size();

   for(int i = 0; i< size; i++)
   {
      for(int j = i + 1; j < size;j++)
      {
        if (arr[i] + arr[j] == s) 
        {
            vector<int> temp;
            temp.push_back(min(arr[i], arr[j]));
            temp.push_back(max(arr[i], arr[j]));
            ans.push_back(temp);
        }
      }
   }
   
   sort(ans.begin(), ans.end());//sorts the pair of numbers in 2d vector
   return ans;
}