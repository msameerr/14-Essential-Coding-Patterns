#include<iostream>
#include<vector>

using namespace std;

void AverageOfSubArrayofSizeK(vector<int>arr, int k)
{

	int WindowStart = 0;
	double WindowSum = 0;
	vector<double> Result;

	for (int WindowEnd = 0; WindowEnd < arr.size(); WindowEnd++)
	{

		WindowSum += arr[WindowEnd];

		if (WindowEnd >= (k - 1))
		{
			Result[WindowStart] = WindowSum;
			WindowSum++;
			WindowSum -= arr[WindowStart];
		}

	}

	for (int i = 0; i < Result.size(); i++)
	{
		cout << Result[i] << " ";
	}

}