#include<iostream>
#include<vector>

#include"Sliding_Window.h"
#include"Two_Pointers.h"

using namespace std;

int main()
{
	cout << "14 Patterns to Ace Any Coding Interview Question" << endl;

	vector<int>A = { 1,3,5 };
	vector<int>B = { 2,4,6 };
	int C[100];

	MergeSortedArray(A,B,3,3,C);
	
}