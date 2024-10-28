#include<iostream>
#include<vector>

using namespace std;

// Question 01: Averages of all contiguous sub-Array of size 'k'
// v = { 1,3,2,6,-1,4,1,8,2 }, K = 5
// Result = {2.2, 2.8, 2.4, 3.6, 2.8}

void AverageOfSubArrayofSizeK(vector<int>arr, int k)
{

	int WindowStart = 0;
	double WindowSum = 0;
	int n = arr.size();

	double Result[100];

	for (int WindowEnd = 0; WindowEnd < n; WindowEnd++)
	{

		WindowSum += arr[WindowEnd];

		cout << WindowSum << endl;

		if (WindowEnd >= (k - 1))
		{
			Result[WindowStart] = WindowSum / k;
			WindowSum -= arr[WindowStart];
			WindowStart++;
		}

	}

	for (int i = 0; i < (n-k+1); i++)
	{
		cout << Result[i] << " ";
	}

}