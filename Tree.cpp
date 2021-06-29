#include "Tree.h"
#include <stack>

void Tree::insert(int val)
{
	this->root = insertNode(this->root, val);
}

void Tree::inorder()
{
	inordertraversal(this->root);
}

void Tree::rangesearch(int r1, int r2)
{
	std::stack<TreeNode*> rec_stack;
	TreeNode* current = this->root;
	do
	{

		if (current != NULL && current->getData() < r1)
		{
			current = current->getRight();
		}
		while (current != NULL)
		{
			if (current->getData() >= r1 && current->getData() <= r2)
				rec_stack.push(current);
			if (current->getData() < r1)
				current = current->getRight();
			else
				current = current->getLeft();
		}

		if (!rec_stack.empty())
		{
			current = rec_stack.top();
			rec_stack.pop();
			std::cout << current->getData() << " ";
			current = current->getRight();
		}


	} while (!rec_stack.empty() || current != NULL);


}

TreeNode* Tree::insertNode(TreeNode* node, int val)
{
	if (node == NULL)
	{
		node = new TreeNode(val);
	}
	else
	{
		if (node->getData() < val)
		{
			TreeNode* temp = insertNode(node->getRight(), val);
			node->setRight(temp);
		}
		else
		{
			TreeNode* temp = insertNode(node->getLeft(), val);
			node->setLeft(temp);
		}
	}

	return node;
}

void Tree::inordertraversal(TreeNode *node)
{
	if (node == NULL)
		return;
	else
	{
		inordertraversal(node->getLeft());
		std::cout << node->getData() << "  ";
		inordertraversal(node->getRight());
	}
}
