#ifndef Heap_H
#define Heap_H
#include<iostream>
using namespace std;
typedef int itemType;

struct Node
{
	itemType value;
	Node* left;
	Node* right;
};

class Heap
{
public:
	Heap();
	~Heap();
	void insert(itemType item);
	itemType remove();
	void printAllCall();
	void printAll(Node* curNode);

private:
	Node* root;
	Node* pos;

	Node* find(Node* prevNode, Node* loc, int maxLevel, int level);
	int getLevel();

	void reHeapUp();
	void reHeapDown();

};
#endif