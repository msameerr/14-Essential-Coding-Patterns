#include<iostream>
#include<vector>

using namespace std;


class node
{

public:
	int data;
	node* next;

	node(int data)
	{
		this->data = data;
		this->next = NULL;
	}

};

void create(node*& head, vector<int> nums)
{
	int n = nums.size();

	for (int i = 0; i < n; i++)
	{
		node* temp = new node(nums[i]);

		temp->next = head;
		head = temp;
	}

}

void print(node* head)
{
	while (head != NULL)
	{
		cout << head->data << " -> ";
		head = head->next;
	}
	cout << endl;
}

// Question 02 : Reverse Linked List
// input = {1,2,3,4,5}
// output = {5,4,3,2,1}

void reverse(node*& head)
{

	node* curr = head;
	node* prvs = NULL;

	while (curr != NULL)
	{
		node* temp = curr->next;

		curr->next = prvs;
		prvs = curr;
		curr = temp;
	}

	head = prvs;
}


// Question 02 : Reverse Linked List 2
// Task : left position and right position, you have to reverse linkedlist from left to right
// input = {1,2,3,4,5}, left = 2, right = 4
// output = {1,4,3,2,5}

void reverse2(node*& head, int left, int right)
{

	node* temp = head;
	node* leftNode = temp;
	node* rightNode = temp;

	int l = 1, r = 1;
	while (l != left)
	{
		leftNode = leftNode->next;
		l++;
	}
	while (r != right)
	{
		rightNode = rightNode->next;
		r++;
	}




}



// --- copy above part ^|
int main()
{

	node* head = NULL;
	vector<int> nums = { 5,4,3,2,1 };

	create(head, nums);
	print(head);
	//reverse2(head, 2, 4);
	reverse(head);
	print(head);
}