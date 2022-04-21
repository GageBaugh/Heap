#include <iostream>
#include <string>
#include "Heap.h"
using namespace std;

int main()
{
	Heap h;
	h.insert(69);
	h.insert(30);
	h.insert(40);
	h.insert(50);
	h.insert(299);
	h.insert(2);
	h.insert(4);
	h.insert(43);
	h.insert(59);
	h.insert(139);
	h.insert(37);
	h.printAllCall();
	// print order should be
	// 69
	// 30
	// 50
	// 43
	// 59
	// 299
	// 139
	// 37
	// 40
	// 2
	// 4
	//
}
