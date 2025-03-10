#include<iostream>
#include<vector>

using namespace std;


#pragma once

#ifndef SUBSETS
#define SUBSETS


vector<vector<int>> AllSubsets;
void backTrack(int eachSize, int index, vector<int> curr, vector<int>nums);
void CreateSubsets(vector<int> nums);


#endif