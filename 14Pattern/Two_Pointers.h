#include<vector>
using namespace std;

#pragma once

#ifndef TWO_POINTERS
#define TWO_POINTERS

void PairExist(vector<int>v, int Sum);

void ReverseArray(vector<int>& arr);

void MergeSortedArray(vector<int> A, vector<int> B, int n1, int n2, int C[]);

int RemoveDuplicates(vector<int>& nums);

void sorted_Squares(vector<int>& nums);

void threeSum(vector<int> nums);

void threeSumCloset(vector<int> nums, int target);

void CountTriplets(vector<int> nums, int value);

#endif
