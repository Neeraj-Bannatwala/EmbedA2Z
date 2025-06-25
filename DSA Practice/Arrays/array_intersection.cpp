#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    return 0;
}

#include <bits/stdc++.h> 
vector<int> findArrayIntersection1(vector<int> &arr1, int n, vector<int> &arr2, int m)//brute force
{
	// Write your code here.
	vector<int> ans;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(arr1[i] == arr2[j])
			{
				ans.push_back(arr2[j]);
				arr2[j] = INT_MIN;
				break;
			}
		}
	}
	return ans;
}

#include <bits/stdc++.h> 
vector<int> findArrayIntersection2(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here
	vector<int> ans;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(arr2[j]>arr1[i]) // skips a few comparisons
			{
				break;
			}
			if(arr1[i] == arr2[j])
			{
				ans.push_back(arr2[j]);
				arr2[j] = INT_MIN;
				break;
			}
		}
	}
	return ans;
}

#include <bits/stdc++.h> 
vector<int> findArrayIntersection3(vector<int> &arr1, int n, vector<int> &arr2, int m) //max(O(m,n))
{
    //Two pointer approach
	// Write your code here.
	vector<int> ans;
	int i = 0;
	int j = 0;
	while((i < n) && (j < m))
	{
		if(arr1[i] < arr2[j])
		{
			i++;
		}

		else if(arr1[i] == arr2[j])
		{
			ans.push_back(arr1[i]);
			i++;
			j++;
		}

		else
		{
			j++;
		}
	}
	return ans;
}