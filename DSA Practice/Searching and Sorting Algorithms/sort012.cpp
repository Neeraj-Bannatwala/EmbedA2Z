#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    return 0;
}

void sort012_1(int *arr, int n) //high space complexity
{
   //   Write your code here
   int left = 0;
   int right = n - 1;
   int i = 0;
   int arr1[n];
   std::fill_n(arr1, n, 1);
   while(i<n)
   {
      if(arr[i]<1)
      {
         arr1[left] = arr[i];
         left++;
      }
      else if(arr[i]>1)
      {
         arr1[right] = arr[i];
         right--;
      }
      i++;
   }
   for(int j = 0; j < n; j++)
   {
      arr[j] = arr1[j];
   }
}

void sort012_2(int *arr, int n) //reduces space complexity
{
   //   Write your code here
   int count0s=0;
   int count1s=0;
   int count2s=0;

   for(int i = 0; i < n; i++)
   {
      if(arr[i] == 0)
      {
         count0s++;
      }
      else if(arr[i] == 1)
      {
         count1s++;
      }
      else
      {
         count2s++;
      }
   }

   for(int i = 0 ; i < count0s; i++)
   {
      arr[i] = 0;
   }

   for(int i = count0s ; i < (count0s + count1s); i++)
   {
      arr[i] = 1;
   }

   for(int i = (count0s + count1s) ; i < n; i++)
   {
      arr[i] = 2;
   }
}