#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node* left, * right;
};

Node* newNode(int data)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->left = node->right = NULL;
	return (node);
}

Node* insertLevelOrder(int arr[], int i, int n)
{
	Node *root = nullptr;
	if(i<n)
	{
		root = newNode(arr[i]);
		// insert left child
		root->left = insertLevelOrder(arr,2*i+1,n);
		// insert right child
		root->right = insertLevelOrder(arr,2*i+2,n);
	}
	return root;
}

void inOrder(Node* root)
{
	if(root!=NULL)
	{
		inOrder(root->left);
		cout << root->data <<" ";
		inOrder(root->right);
	}
}

int main()
{
	int arr[] = {1,2,3,4,5,6,6,6,6};
	int n = sizeof(arr)/sizeof(arr[0]);
	Node* root = insertLevelOrder(arr,0,n);
	inOrder(root);
}
