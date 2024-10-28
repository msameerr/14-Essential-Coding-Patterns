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