#include "Tree.h"
#include <conio.h>

int main()
{
	Tree* t1 = new Tree();
	t1->insert(15);
	t1->insert(10);
	t1->insert(20);
	t1->insert(25);
	t1->insert(8);
	t1->insert(28);
	t1->insert(35);
	t1->insert(16);
	t1->insert(48);
	t1->insert(19);

	std::cout << "inorder traversal\n";
	t1->inorder();
	std::cout << "\n";
	std::cout << "range search\n";
	t1->rangesearch(-10, 10);

	_getch();
}