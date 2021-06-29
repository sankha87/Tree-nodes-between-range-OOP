#pragma once
#include "TreeNode.h"

class Tree
{
	TreeNode* root;
	int nodecount;
	TreeNode* insertNode(TreeNode* node, int val);
	void inordertraversal(TreeNode* root);
public:
	void insert(int val);
	void inorder();
	void rangesearch(int r1, int r2);
};

