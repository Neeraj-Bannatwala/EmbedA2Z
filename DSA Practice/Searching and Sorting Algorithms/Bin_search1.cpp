#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    return 0;
}

vector<int> searchRange(vector<int> &arr, int x)
{
	// Write your code here.
	vector<int> ans1;
	vector<int> ans;
	ans.push_back(-1);
	ans.push_back(-1);
	int start = 0;
	int end = arr.size() - 1;
	int mid;
	bool found = false;
	while(end >= start)
	{
		mid = start + ((end-start)/2);
		if(arr[mid] == x)
		{
			found = true;
			break;
		}
		else if(arr[mid] > x)
		{
			end = mid - 1;
		}

		else
		{
			start = mid + 1;
		}
	}
	if(!found)
	{
		return ans;
	}
	int left = mid;

	while (left > 0 && arr[left - 1] == x) 
	{
        left--;
    }

	int right = mid;
    while (right < arr.size() - 1 && arr[right + 1] == x) {
        right++;
    }

    ans1.push_back(left);
    ans1.push_back(right);

	return ans1;
}