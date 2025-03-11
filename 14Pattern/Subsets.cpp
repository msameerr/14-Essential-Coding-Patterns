#include<iostream>
#include<vector>

using namespace std;

// Question : Create subsets of array
// input : {1,2}
// subsets : {}, {1}, {2}, {1,2}

vector<vector<int>> AllSubsets;

void backTrack(int eachSize, int index, vector<int> curr, vector<int>nums)
{

	if (curr.size() == eachSize)
	{
		AllSubsets.push_back(curr);
		return;
	}

	for (int j = index; j < nums.size(); j++)
	{
		curr.push_back(nums[j]);
		backTrack(eachSize, j + 1, curr, nums);
		curr.pop_back();
	}

}


void CreateSubsets(vector<int> nums)
{

	int n = nums.size();

	for (int eachSize = 0; eachSize <= n; eachSize++)
	{

		vector<int> newArr;
		backTrack(eachSize, 0, newArr, nums);

	}

	int m = AllSubsets.size();

	for (int i = 0; i < m; i++)
	{
		cout << "[ ";
		for (int j = 0; j < AllSubsets[i].size(); j++)
		{
			cout << AllSubsets[i][j] << ", ";
		}
		cout << "], " << endl;

	}

}