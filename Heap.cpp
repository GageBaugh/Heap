#include "Heap.h"

Heap::Heap()
{
	root = pos = nullptr;
}

Heap::~Heap()
{
}

void Heap::insert(itemType item)
{
	if (root == nullptr)
	{
		root = new Node();
		root->value = item;
		root->left = root->right = nullptr;
	}
	else
	{
		Node* temp = new Node();
		temp->value = item;
		temp->left = temp->right = nullptr;
		pos = root;
		pos = find(nullptr, pos, getLevel(), 1);
		if (pos->left == nullptr)
			pos->left = temp;
		else
			pos->right = temp;
	}
}

itemType Heap::remove()
{
	return itemType();
}

void Heap::printAllCall()
{
	pos = root;
	printAll(pos);
}

void Heap::printAll(Node* curNode)
{
	cout << curNode->value << endl;
	if (curNode->left != nullptr)
	{
		printAll(curNode->left);
		if (curNode->right != nullptr)
			printAll(curNode->right);
	}
}

void Heap::reHeapUp()
{
}

void Heap::reHeapDown()
{
}

int Heap::getLevel()
{
	int level = 0;
	pos = root;
	while (pos->left != nullptr)
	{
		pos = pos->left;
		level += 1;
	}
	pos = root;
	for (int i = 0; i < level-1; i++)
		pos = pos->right;
	if (pos->right != nullptr)
		level += 1;
	pos = root;
	return level;
}

Node* Heap::find(Node* prevNode, Node* loc, int maxLevel, int level)
{
	if (loc->right == nullptr)
		return loc;
	else if (level < maxLevel)
	{
		loc = find(loc, loc->left, maxLevel, level+1);
		if(loc->right != nullptr)
			loc = find(loc, loc->right, maxLevel, level+1);
		return loc;
	}
	return prevNode;
}
