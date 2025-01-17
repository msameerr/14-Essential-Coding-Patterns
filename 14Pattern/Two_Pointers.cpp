#include<iostream>
#include<vector>

using namespace std;

// Question 01 : (Two Sum) Find Pair of Values Exist which is Equal to 'S'
// v = {1,2,4,6,9,12,20} , S = 11
// output -> {2,9}

void PairExist(vector<int>arr, int S)
{
	int n = arr.size();

	int i = 0;
	int j = n - 1;
	bool flag = false;

	while (i < j)
	{
		int sum = arr[i] + arr[j];
		if (sum == S)
		{
			cout << arr[i] << " " << arr[j] << endl;
			flag = true;
			break;
		}

		if (sum < S)
			i++;

		if (sum > S)
			j--;
	}

	if(!flag)
		cout << "Not Found";

}


// Question 02 : Reverse Array

void ReverseArray(vector<int>&arr)
{

	int n = arr.size();
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
		swap(arr[i], arr[j]);
		i++;
		j--;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}


// Question 03 : Merge Two Sorted Array
// vector<int>A = { 1,3,5 };
// vector<int>B = { 2,4,6 };
// C = {1,2,3,4,5,6}

void MergeSortedArray(vector<int> A, vector<int> B, int n1, int n2, int C[])
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (i < n1 && j < n2)
	{
		if (A[i] < B[j])
		{
			C[k] = A[i];
			i++;
			k++;
		}
		else
		{
			C[k] = B[j];
			j++;
			k++;
		}
	}

	while (i < n1)
	{
		C[k] = A[i];
		i++;
		k++;
	}

	while (j < n2)
	{
		C[k] = B[j];
		j++;
		k++;
	}

	for (int i = 0; i < k; i++)
	{
		cout << C[i] << " ";
	}

}

// Question 04 : Remove Duplicates from Sorted Array
// v = {0,0,1,1,1,2,2,2,2,3}
// v = {0,1,2,3}, size = 4

int RemoveDuplicates(vector<int>& nums)
{

	int n = nums.size();

	int i = 0;
	int j = i + 1;

	while (j < n)
	{

		if (nums[i] != nums[j])
		{
			i++;
			nums[i] = nums[j];
		}

		j++;

	}

	int size = i + 1;
	return size;

}


// Question 05 : Squares of Sorted Array 
// v = {-4,-1,0,3,10}
// output = {0,1,9,16,100}

void sorted_Squares(vector<int>& nums)
{

	int n = nums.size();
	int left = 0;
	int right = n - 1;

	int ans[10];

	for(int i = n-1 ; i >= 0; i--)
	{


		if (abs(nums[left]) > abs(nums[right]))
		{
			ans[i] = abs(nums[left]) * abs(nums[left]);
			left++;
		}
		else
		{
			ans[i] = abs(nums[right]) * abs(nums[right]);
			right--;
		}

	}

	for (int i = 0; i < n; i++)
	{
		cout << ans[i] << " ";
	}
}

// Question 06 : 