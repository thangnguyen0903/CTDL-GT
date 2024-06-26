// C++ program to find height of full binary tree 
// using preorder 
#include <bits/stdc++.h> 
using namespace std; 

// function to return max of left subtree height 
// or right subtree height 
int findDepthRec(char tree[], int n, int& index) 
{ 
	if (index >= n || tree[index] == 'l') 
		return 0; 

	// calc height of left subtree (In preorder 
	// left subtree is processed before right) 
	index++; 
	int left = findDepthRec(tree, n, index); 

	// calc height of right subtree 
	index++; 
	int right = findDepthRec(tree, n, index); 

	return max(left, right) + 1; 
} 

// Wrapper over findDepthRec() 
int findDepth(char tree[], int n) 
{ 
	int index = 0; 
	return findDepthRec(tree, n, index); 
} 

// Driver program 
int main() 
{ 
	int t; cin >> t;
	
	while(t--)
	{
		
	int n; cin >> n;
	char tree[n];
	
	for(int i = 0; i < n; i++) cin >> tree[i];

	cout << findDepth(tree, n) << endl;
	
	}

	return 0; 
}
