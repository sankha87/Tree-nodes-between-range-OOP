#include "TreeNode.h"

TreeNode::TreeNode(int val)
{
	this->data = val;
	this->left = NULL;
	this->right = NULL;
}

int TreeNode::getData()
{
	return this->data;
}

TreeNode* TreeNode::getLeft()
{
	return this->left;
}

TreeNode* TreeNode::getRight()
{
	return this->right;
}

void TreeNode::setRight(TreeNode* node)
{
	this->right = node;
}

void TreeNode::setLeft(TreeNode* node)
{
	this->left = node;
}

void TreeNode::setData(int val)
{
	this->data = val;
}